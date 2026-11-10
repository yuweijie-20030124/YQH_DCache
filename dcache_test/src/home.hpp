#pragma once

#include "common.hpp"

class VDCache;

// 只服务这一颗 DCache 的 Compact-CHI Home。
// 内存里的数是“L2 已经拥有的行”。核心提交的 store 记在 Scoreboard::golden，
// 写回到达后才写进 backing。没有 Credit，也不发 Snoop。
class Home {
 public:
  Log* log = nullptr;
  Status* status = nullptr;
  uint64_t cycle = 0;
  uint64_t block_until = 0;
  int compack_hold = 0;
  bool arm_compack = false;

  int stat_read_shared = 0;
  int stat_read_unique = 0;
  int stat_make_unique = 0;
  int stat_wb_full = 0;
  int stat_evict = 0;
  int stat_blocked = 0;

  void reset();
  bool busy() const;
  void consider(VDCache& dut);
  void drive(VDCache& dut, const Scoreboard& sb);
  void capture(VDCache& dut, Scoreboard& sb);
  void tick();
  void dump() const;

 private:
  struct Miss {
    uint32_t opcode = 0;
    uint64_t addr = 0;
    uint8_t resp = 0;
    bool need_data = false;
    bool rsp_sent = false;
    int beat = 0;
    bool acked = false;
    int delay = 0;
    int beat_gap = 0;
  };
  struct Writeback {
    uint64_t addr = 0;
    bool dirty = false;
    bool rsp_sent = false;
    bool got[2] = {false, false};
    Line data;
    bool done = false;
    int delay = 0;
  };

  std::map<uint32_t, Miss> miss_;
  std::map<uint32_t, Writeback> wb_;
  bool compack_armed_ = false;

  bool link_down() const { return cycle < block_until; }
  void fail(const char* fmt, ...);
  void retire();
};
