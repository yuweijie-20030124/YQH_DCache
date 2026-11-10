#pragma once

#include <cstdarg>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <deque>
#include <map>
#include <string>

// 编译运行：cd /home/ywj/yqh/dcache_test && make run
// 波形在 logs/<测试名>.vcd。打开：make gtk TEST=load-miss
// DTRACE=1 时把每条 flit 打到 stdout。

inline constexpr uint64_t kLineBytes = 64;
inline constexpr int kBeatBytes = 32;
inline constexpr uint32_t kReqReadShared = 0x04;
inline constexpr uint32_t kReqReadUnique = 0x10;
inline constexpr uint32_t kReqMakeUnique = 0x12;
inline constexpr uint32_t kEvtEvict = 0;
inline constexpr uint32_t kEvtWriteBackFull = 1;
inline constexpr uint32_t kRspComp = 1;
inline constexpr uint32_t kRspCompDBIDResp = 3;
inline constexpr uint32_t kRspCompAck = 0;
inline constexpr uint32_t kDatCompData = 0;
inline constexpr uint32_t kDatCopyBackWrData = 2;
inline constexpr uint32_t kRespSC = 1;
inline constexpr uint32_t kRespUC = 2;
inline constexpr uint32_t kDCacheId = 2;
inline constexpr uint32_t kL2Id = 0;
inline constexpr uint32_t kCmdLoad = 0;
inline constexpr uint32_t kCmdStore = 1;

inline uint64_t line_addr(uint64_t addr) { return addr & ~uint64_t{kLineBytes - 1}; } // 对齐，找cacheline的地址

struct Line {
  uint8_t b[kLineBytes];
  Line() { std::memset(b, 0, sizeof b); }
};

// static_cast C++ 的显式类型转换，写法是 static_cast<目标类型>(表达式)
inline void fill_line(Line& line, uint8_t tag) { //让line的第tag元素填充xx元素。
  for (int i = 0; i < static_cast<int>(kLineBytes); ++i) {
    line.b[i] = static_cast<uint8_t>(tag * 16u + static_cast<unsigned>(i));
  }
}

inline int bank_of(uint64_t addr) { return static_cast<int>((addr >> 3) & 7u); }

struct Log {
  std::deque<std::string> lines;
  bool trace = false;

  void add(const char* fmt, ...) {
    char buf[256];
    va_list ap;
    va_start(ap, fmt);
    std::vsnprintf(buf, sizeof buf, fmt, ap);
    va_end(ap);
    if (trace) std::printf("%s\n", buf);
    lines.emplace_back(buf);
    while (lines.size() > 48) lines.pop_front();
  }

  void dump() const {
    std::printf("--- 最近的事务 ---\n");
    for (const auto& line : lines) std::printf("  %s\n", line.c_str());
  }
};

struct Status {
  bool failed = false;

  void fail(Log& log, const char* fmt, ...) {
    if (failed) return;
    failed = true;
    char buf[512];
    va_list ap;
    va_start(ap, fmt);
    std::vsnprintf(buf, sizeof buf, fmt, ap);
    va_end(ap);
    std::printf("[FAIL] %s\n", buf);
    log.dump();
  }
};

struct Scoreboard {
  std::map<uint64_t, Line> golden;
  std::map<uint64_t, Line> backing;

  void reset() {
    golden.clear();
    backing.clear();
  }

  void seed(uint64_t addr, const Line& line) {
    const uint64_t line_a = line_addr(addr);
    golden[line_a] = line;
    backing[line_a] = line;
  }

  void commit_store(uint64_t addr, const Line& line) { golden[line_addr(addr)] = line; }

  const Line* find_golden(uint64_t addr) const {
    auto it = golden.find(line_addr(addr));
    return it == golden.end() ? nullptr : &it->second;
  }

  const Line* find_backing(uint64_t addr) const {
    auto it = backing.find(line_addr(addr));
    return it == backing.end() ? nullptr : &it->second;
  }

  void note_writeback(uint64_t addr, const Line& line) { backing[line_addr(addr)] = line; }
};

template <typename Wide>
void wide_clear(Wide& dst, int nwords) {
  for (int i = 0; i < nwords; ++i) dst[i] = 0;
}

template <typename Wide>
void wide_store(Wide& dst, int nwords, const uint8_t* bytes, int nbytes) {
  wide_clear(dst, nwords);
  for (int i = 0; i < nbytes; ++i) {
    dst[i / 4] |= static_cast<uint32_t>(bytes[i]) << (8 * (i % 4));
  }
}

template <typename Wide>
void wide_load(const Wide& src, uint8_t* bytes, int nbytes) {
  for (int i = 0; i < nbytes; ++i) {
    const uint32_t word = src[i / 4];
    bytes[i] = static_cast<uint8_t>((word >> (8 * (i % 4))) & 0xffu);
  }
}

inline const char* req_name(uint32_t opcode) {
  switch (opcode) {
    case kReqReadShared: return "ReadShared";
    case kReqReadUnique: return "ReadUnique";
    case kReqMakeUnique: return "MakeUnique";
    default: return "REQ?";
  }
}
