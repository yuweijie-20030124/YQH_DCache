#ifndef YQH_SIM_LINE_IMAGE_H
#define YQH_SIM_LINE_IMAGE_H

#include <algorithm>
#include <cstddef>
#include <cstdint>

#include "sim_types.h"

namespace yqh {
namespace sim {
namespace line_image {

// 这个文件只处理“地址如何落到 cache line、数据如何在线上排列”这类纯问题。
//
// CPU model、L2 model 和 scoreboard 都会需要这些操作。如果每个模块自己
// 重复实现地址切分和 byte merge，很容易出现以下不一致：
//
//   - CPU 认为一条 line 的起始地址是 0x1040，L2 却按 0x1000 处理；
//   - L2 把 DataID=1 放到 line 的低 32 B，DCache/scoreboard 却放到高 32 B；
//   - scoreboard 按一种大小端方式提取 Load 数据，DUT 按另一种方式返回。
//
// 因此这里不保存任何模型状态，也不访问 DUT，只提供所有模型共同使用的
// 地址、cache line、CHI beat 和 byte mask 工具。所有 byte 操作都遵守同一
// 个约定：byte 0 对应最低地址字节。

// -----------------------------------------------------------------------------
// Address decomposition
// -----------------------------------------------------------------------------

// 返回地址所在 cache line 的 byte 起始地址。
//
// 用途：
//   - L2 memory_model 用它作为 cache line 的 map key；
//   - scoreboard 用它关联同一条 line 的 CPU 操作、CHI 事务和 Probe；
//   - 测试场景用它判断两个地址是否属于同一条 line。
//
// 例：line_base(0x1048) == 0x1040。
constexpr Address line_base(Address address) noexcept {
    return address & ~(static_cast<Address>(config::kCacheLineBytes) - 1);
}

// 返回地址在线内的 byte 偏移，范围是 [0, cacheLineBytes)。
//
// 用途：
//   - 从 refill 的 64 B line 中提取 CPU 请求的数据；
//   - 判断 Load/Store 是否跨 cache line；
//   - 计算 byte mask 应该作用于 line 的哪个位置。
constexpr std::size_t line_offset(Address address) noexcept {
    return static_cast<std::size_t>(
        address & (static_cast<Address>(config::kCacheLineBytes) - 1));
}

// 返回地址所在 32 B CHI data beat 的 byte 起始地址。
//
// 用途：
//   - L2 处理窄访问时确定 beat 对齐位置；
//   - 检查 TXDAT/RXDAT 的数据窗口是否自然对齐；
//   - 调试时把一个 byte address 映射回具体 CHI beat。
constexpr Address chi_beat_base(Address address) noexcept {
    return address & ~(static_cast<Address>(config::kChiDataBytes) - 1);
}

// 返回地址在一个 CHI data beat 内的 byte 偏移，范围是 [0, 32)。
//
// 这个偏移和 cache line 内的 offset 不同：前者只看 32 B beat，后者看
// 整个 64 B cache line。区分这两个函数可以避免把 line offset 直接当成
// byteEnable 或窄访问 lane。
constexpr std::size_t chi_beat_offset(Address address) noexcept {
    return static_cast<std::size_t>(
        address & (static_cast<Address>(config::kChiDataBytes) - 1));
}

// 根据 byte address 返回它属于当前 cache line 的第几个 CHI beat。
//
// 当前配置是一条 64 B line 分成两个 32 B beat，所以返回值通常是 0 或 1。
// L2 生成 RXDAT、scoreboard 检查 DataID、以及 line image 拼接数据时都会用到。
constexpr std::size_t chi_beat_index(Address address) noexcept {
    return line_offset(address) / config::kChiDataBytes;
}

// 判断地址是否是 cache line 起始地址。
//
// 用途：
//   - 检查 ReadShared、WriteBackFull、Evict 等整行事务的地址；
//   - 检查测试场景是否按照 line 对齐构造地址；
//   - scoreboard 报告非法整行事务时提供统一判断。
constexpr bool is_line_aligned(Address address) noexcept {
    return line_offset(address) == 0;
}

// 判断地址是否是 CHI data beat 起始地址。
//
// 用途：
//   - 检查窄访问是否落在一个 32 B 数据窗口内；
//   - 以后实现 WriteNoSnpPtl 或 ReadNoSnp 时，辅助检查 beat 对齐。
constexpr bool is_chi_beat_aligned(Address address) noexcept {
    return chi_beat_offset(address) == 0;
}

// 从虚拟地址提取当前 DCache 使用的 TagAlias，即 vaddr[13:12]。
//
// 这不是物理 tag，也不是 cache line offset。当前 DCache 的 VIPT 组织需要
// 它把页内虚拟索引信息带给 MissQueue/CHI。CPU model 构造请求时可以用它，
// scoreboard 检查 TXREQ 或 RXSNP 关联时也可以用它。
constexpr std::uint8_t tag_alias_from_vaddr(Address virtualAddress) noexcept {
    return static_cast<std::uint8_t>(
        (virtualAddress >> 12) &
        ((static_cast<Address>(1) << config::kTagAliasBits) - 1));
}

// 把普通 byte address 压缩成 Compact-CHI RXSNP 使用的 PA[47:3]。
//
// RXSNP 没有传低 3 个 byte offset，因为 Probe 的粒度是 cache line。L2
// 发起 Probe 时使用这个函数，避免直接把完整 byte address 错接到 RXSNP.addr。
constexpr Address snoop_address_from_byte_address(Address byteAddress) noexcept {
    return byteAddress >> 3;
}

// 把 RXSNP 的 PA[47:3] 恢复成普通 byte address。
//
// ProbeScheduler、scoreboard 和 DCache 事件日志需要把 RXSNP 地址重新映射
// 到 cache line key；恢复后应继续用 line_base() 做统一的 line 对齐处理。
constexpr Address byte_address_from_snoop_address(Address snoopAddress) noexcept {
    return snoopAddress << 3;
}

// -----------------------------------------------------------------------------
// Cache line and CHI beat images
// -----------------------------------------------------------------------------

// 从一条 64 B cache line 中取出一个 32 B CHI beat。
//
// 用途：
//   - simL2Cache 发送 RXDAT；
//   - simL2Cache 发送 TXDAT 写回；
//   - scoreboard 比较 DCache 发出的某一拍数据。
//
// dataId=0 对应 line[0..31]，dataId=1 对应 line[32..63]。函数返回 false
// 表示 dataId 超出当前配置，调用者可以把它作为协议或模型错误处理。
inline bool read_chi_beat(const CacheLine& line,
                          std::uint8_t dataId,
                          ChiDataBeat& beat) noexcept {
    if (dataId >= config::kChiBeatsPerLine) {
        return false;
    }

    const std::size_t offset =
        static_cast<std::size_t>(dataId) * config::kChiDataBytes;
    std::copy_n(line.begin() + offset,
                config::kChiDataBytes,
                beat.begin());
    return true;
}

// 把一个 32 B CHI beat 写入 64 B cache line。
//
// 用途：
//   - L2 接收 DCache 的 TXDAT 两拍并重组写回 line；
//   - scoreboard 接收 RXDAT 后构造独立的期望 line；
//   - 以后处理多拍数据反压时，按握手到达顺序逐拍填充 line image。
//
// 如果同一个 dataId 被重复写入，函数本身不会替调用者判断“重复拍”；
// 重复拍属于事务状态机或 protocol checker 的职责。
inline bool write_chi_beat(CacheLine& line,
                           std::uint8_t dataId,
                           const ChiDataBeat& beat) noexcept {
    if (dataId >= config::kChiBeatsPerLine) {
        return false;
    }

    const std::size_t offset =
        static_cast<std::size_t>(dataId) * config::kChiDataBytes;
    std::copy_n(beat.begin(),
                config::kChiDataBytes,
                line.begin() + offset);
    return true;
}

// 按 64 个 byte mask 把 source 的选中字节合并到 destination。
//
// 用途：
//   - reference model 提交带 byte mask 的 Store；
//   - L2 接收带 byte enable 的写数据后更新后备内存；
//   - scoreboard 检查 partial write 是否只改变被选中的字节。
//
// 未选中的字节保持 destination 原值，函数不改变 cache line 的 coherence
// 状态；dirty/clean 状态由 reference 或 L2 状态机负责。
inline void merge_line(CacheLine& destination,
                       const CacheLine& source,
                       const LineByteMask& byteMask) noexcept {
    for (std::size_t byte = 0; byte < config::kCacheLineBytes; ++byte) {
        if (byteMask.test(byte)) {
            destination[byte] = source[byte];
        }
    }
}

// 从 cache line 中提取 CPU 可见的数据。
//
// 用途：
//   - scoreboard 根据 reference line 计算 Load 的期望值；
//   - CPU model 或测试日志显示某个地址对应的 byte/half/word/doubleword；
//   - 后续检查 DCache hit 返回的数据是否来自正确的 line offset。
//
// sizeBytes 是实际访问大小，不等于 CpuData 容器的固定容量。函数会把
// data 中未使用的高位 byte 清零，并拒绝跨 line 的访问。
inline bool extract_cpu_data(const CacheLine& line,
                             Address address,
                             std::size_t sizeBytes,
                             CpuData& data) noexcept {
    data.fill(0);

    const std::size_t offset = line_offset(address);
    if (sizeBytes == 0 || sizeBytes > config::kLoadDataBytes ||
        offset + sizeBytes > config::kCacheLineBytes) {
        return false;
    }

    std::copy_n(line.begin() + offset, sizeBytes, data.begin());
    return true;
}

// 把 CPU-sized 的带 byte mask 数据合并到 cache line。
//
// 用途：
//   - reference model 在 Store 完成时更新期望 line；
//   - 以后处理 AMO 的局部字节更新；
//   - 验证 partial store 不会错误覆盖相邻字节。
//
// sizeBytes 明确表示本次实际操作宽度，不能直接使用 CpuData 的 16 B
// 容器大小。比如一个 8 B Store 应传 sizeBytes=8；byteMask 中只检查前
// sizeBytes 个 bit。函数不会更新 dirty/coherence 状态。
inline bool merge_cpu_data(CacheLine& line,
                           Address address,
                           const CpuData& data,
                           const CpuByteMask& byteMask,
                           std::size_t sizeBytes) noexcept {
    const std::size_t offset = line_offset(address);
    if (sizeBytes == 0 || sizeBytes > config::kLoadDataBytes ||
        offset + sizeBytes > config::kCacheLineBytes) {
        return false;
    }

    for (std::size_t byte = 0; byte < sizeBytes; ++byte) {
        if (byteMask.test(byte)) {
            line[offset + byte] = data[byte];
        }
    }
    return true;
}

}  // namespace line_image
}  // namespace sim
}  // namespace yqh

#endif  // YQH_SIM_LINE_IMAGE_H
