#ifndef YQH_SIM_CONFIG_H
#define YQH_SIM_CONFIG_H

#include <cstddef>
#include <cstdint>

namespace yqh {
namespace regress {
namespace config {

// -----------------------------------------------------------------------------
// DCache geometry
// -----------------------------------------------------------------------------
// These values mirror the current YQH.cache.DCacheParameters configuration.
// They are kept in one place so the C++ models do not scatter protocol and
// cache geometry constants across CPU, L2, and test code.
// k前缀是google c++风格，表示常量
constexpr std::size_t kPAddrBits = 48;
constexpr std::size_t kVAddrBits = 48;

constexpr std::size_t kCacheLineBytes = 64;
constexpr std::size_t kCacheLineBits = kCacheLineBytes * 8;
constexpr std::size_t kDCacheSets = 256;
constexpr std::size_t kDCacheWays = 4;
constexpr std::size_t kDCacheBanks = 8;
constexpr std::size_t kDCacheRowBits = 64;
constexpr std::size_t kDCacheRowBytes = kDCacheRowBits / 8;
constexpr std::size_t kLoadPipelineWidth = 2;

constexpr std::size_t kMissEntries = 16;
constexpr std::size_t kProbeEntries = 16;
constexpr std::size_t kReleaseEntries = 18;

constexpr std::size_t kBlockOffsetBits = 6;
constexpr std::size_t kSetBits = 8;
constexpr std::size_t kBankBits = 3;
constexpr std::size_t kWayBits = 2;
// 4 KiB 页。TagAlias 是 set index 中高出页偏移的位，不写死 2。
constexpr std::size_t kPageOffsetBits = 12;
constexpr std::size_t kTagAliasBits =
    (kBlockOffsetBits + kSetBits > kPageOffsetBits)
        ? (kBlockOffsetBits + kSetBits - kPageOffsetBits)
        : 0;

// The RTL uses six bits for the CPU-side request/response id.
constexpr std::size_t kCpuReqIdBits = 6;
constexpr std::size_t kLqIndexBits = 4;
constexpr std::size_t kMshrIdBits = 4;

// -----------------------------------------------------------------------------
// Compact-CHI widths
// -----------------------------------------------------------------------------
// These values mirror the CompactChiParams instance used by DCacheParameters.
constexpr std::size_t kChiAddrBits = 48;
constexpr std::size_t kChiUpstreamNodeIdBits = 7;
constexpr std::size_t kChiDownstreamNodeIdBits = 7;
constexpr std::size_t kChiTxnIdBits = 8;
constexpr std::size_t kChiDbidBits = 8;
constexpr std::size_t kChiDataBits = 256;
constexpr std::size_t kChiDataBytes = kChiDataBits / 8;
constexpr std::size_t kChiDataIdBits = 1;
constexpr std::size_t kChiByteEnableBits = kChiDataBytes;
constexpr std::size_t kChiSizeBits = 3;
constexpr std::size_t kChiReqOpcodeBits = 6;
constexpr std::size_t kChiEvtOpcodeBits = 1;
constexpr std::size_t kChiSnpOpcodeBits = 2;
constexpr std::size_t kChiUpRspOpcodeBits = 1;
constexpr std::size_t kChiDownRspOpcodeBits = 3;
constexpr std::size_t kChiUpDatOpcodeBits = 2;
constexpr std::size_t kChiDownDatOpcodeBits = 1;
constexpr std::size_t kChiRespErrBits = 2;
constexpr std::size_t kChiRespBits = 3;
constexpr std::size_t kChiCBusyBits = 3;
constexpr std::size_t kChiDataSourceBits = 5;
constexpr std::size_t kChiSnoopAddrBits = kChiAddrBits - 3;

constexpr std::size_t kChiBeatsPerLine = kCacheLineBytes / kChiDataBytes;

// Compact-CHI node ids used by the current RTL configuration.
constexpr std::uint8_t kDCacheNodeId = 2;
constexpr std::uint8_t kL2NodeId = 0;

// -----------------------------------------------------------------------------
// Common masks and derived widths
// -----------------------------------------------------------------------------
constexpr std::size_t kLoadDataBytes = 16;
constexpr std::size_t kLoadMaskBits = kLoadDataBytes;
constexpr std::size_t kStoreMaskBits = kCacheLineBytes;
constexpr std::size_t kAtomicDataBytes = 16;
constexpr std::size_t kAtomicMaskBits = kAtomicDataBytes;

constexpr std::size_t kAddressBytes = kPAddrBits / 8;


// 后续使用这些参数要符合这些规定，否则就assert
static_assert(kPAddrBits == kChiAddrBits,
              "DCache and Compact-CHI address widths must match");
static_assert(kCacheLineBytes == (1u << kBlockOffsetBits),
              "cache line size must match block offset width");
static_assert(kDCacheSets == (1u << kSetBits),
              "DCache set count must match set index width");
static_assert(kDCacheWays == (1u << kWayBits),
              "DCache way count must match way width");
static_assert(kDCacheBanks == (1u << kBankBits),
              "DCache bank count must match bank width");
static_assert(kBlockOffsetBits <= kPageOffsetBits,
              "cache line offset must fit in the page offset");
static_assert(kTagAliasBits <= 8,
              "TagAlias is stored in uint8_t");
static_assert(kDCacheRowBits % 8 == 0,
              "DCache row width must be byte-addressable");
static_assert(kDCacheBanks * kDCacheRowBytes == kCacheLineBytes,
              "DCache banks and rows must form one cache line");
static_assert(kChiDataBits % 8 == 0,
              "Compact-CHI data width must be byte-addressable");
static_assert(kCacheLineBytes % kChiDataBytes == 0,
              "one cache line must contain an integral number of CHI beats");
static_assert(kChiBeatsPerLine == 2,
              "current DCache/Compact-CHI configuration expects two beats");
static_assert(kChiByteEnableBits == kChiDataBytes,
              "CHI byte-enable width must equal one data beat in bytes");
static_assert(kDCacheRowBytes == 8,
              "current DCache row width is expected to be 64 bits");
static_assert(kLoadDataBytes == 16,
              "current DCache Load response width is expected to be 128 bits");
static_assert(kAddressBytes == 6,
              "current DCache physical address width is expected to be 48 bits");
static_assert(kDCacheNodeId < (1u << kChiUpstreamNodeIdBits),
              "DCache node id does not fit Compact-CHI SrcID");
static_assert(kL2NodeId < (1u << kChiDownstreamNodeIdBits),
              "L2 node id does not fit Compact-CHI TgtID");

}  // namespace config
}  // namespace regress
}  // namespace yqh

#endif  // YQH_SIM_CONFIG_H
