#include "home.hpp"

#include "VDCache.h"
#include "verilated.h"
#if WAVE
#include "verilated_vcd_c.h"
#include <cerrno>
#include <sys/stat.h>
#endif

#include <cstdlib>
#include <set>
#include <string>

// 第一版定向闭环。上游是 LSU 桩，下游是单 RN 的 Compact-CHI Home。
// 不发原子、CMO 和 Snoop。随机激励不在这一版。

enum class LdPhase { Idle, Req, Pipe };
enum class StPhase { Idle, Req, Wait };
enum class LdKind { None, Hit, Miss, Replay };


// 
class Sim {
 public:
  explicit Sim(bool trace) {
    log.trace = trace;
    home.log = &log;
    home.status = &status;
  }

  ~Sim() { close_wave(); }

  bool run_all() {
    int pass = 0;
    const int total = 5;
    if (run("load-miss", &Sim::test_load_miss)) ++pass;
    if (run("store-miss-load", &Sim::test_store_miss_load)) ++pass;
    if (run("store-hit", &Sim::test_store_hit)) ++pass;
    if (run("dirty-replace", &Sim::test_dirty_replace)) ++pass;
    if (run("backpressure", &Sim::test_backpressure)) ++pass;
    std::printf("%d/%d 通过\n", pass, total);
    return pass == total;
  }

 private:
  VDCache dut;
#if WAVE
  VerilatedVcdC* wave = nullptr;
  bool wave_open = false;
  char wave_path[512] = {};
#endif
  Home home;
  Scoreboard sb;
  Log log;
  Status status;
  uint64_t cycle = 0;
  bool wfi_ = false;
  std::set<uint64_t> woken;

  LdPhase ld_phase = LdPhase::Idle;
  uint64_t ld_addr = 0;
  uint32_t ld_id = 3;
  bool ld_done = false;
  LdKind ld_kind = LdKind::None;
  uint8_t ld_data[8] = {};

  StPhase st_phase = StPhase::Idle;
  uint64_t st_addr = 0;
  uint32_t st_id = 9;
  Line st_line;
  bool st_done = false;
  bool st_replay = false;
  bool st_commit = false;

  bool run(const char* name, void (Sim::*fn)()) {
    open_wave(name);
    reset_dut();
    status.failed = false;
    log.lines.clear();
    (this->*fn)();
    if (!status.failed) drain();
    close_wave();
    std::printf("%s %s\n", status.failed ? "FAIL" : "PASS", name);
#if WAVE
    if (wave_path[0]) std::printf("  波形 %s\n", wave_path);
#endif
    return !status.failed;
  }

  void zero_inputs() {
    dut.io_load_0_req_valid = 0;
    dut.io_load_0_req_bits_cmd = 0;
    dut.io_load_0_req_bits_vaddr = 0;
    dut.io_load_0_req_bits_vaddr_dup = 0;
    dut.io_load_0_req_bits_mask = 0;
    dut.io_load_0_req_bits_id = 0;
    dut.io_load_0_req_bits_instrtype = 0;
    dut.io_load_0_req_bits_isFirstIssue = 0;
    dut.io_load_0_req_bits_replayCarry_real_way_en = 0;
    dut.io_load_0_req_bits_replayCarry_valid = 0;
    dut.io_load_0_req_bits_lqIdx_flag = 0;
    dut.io_load_0_req_bits_lqIdx_value = 0;
    dut.io_load_0_s1_kill_data_read = 0;
    dut.io_load_0_s1_kill = 0;
    dut.io_load_0_s2_kill = 0;
    dut.io_load_0_s0_pc = 0;
    dut.io_load_0_s1_pc = 0;
    dut.io_load_0_s2_pc = 0;
    dut.io_load_0_replacementUpdated = 0;
    dut.io_load_0_is128Req = 0;
    dut.io_load_0_s1_paddr_dup_lsu = 0;
    dut.io_load_0_s1_paddr_dup_dcache = 0;
    wide_clear(dut.io_load_0_req_bits_data, 4);

    dut.io_load_1_req_valid = 0;
    dut.io_load_1_req_bits_cmd = 0;
    dut.io_load_1_req_bits_vaddr = 0;
    dut.io_load_1_req_bits_vaddr_dup = 0;
    dut.io_load_1_req_bits_mask = 0;
    dut.io_load_1_req_bits_id = 0;
    dut.io_load_1_req_bits_instrtype = 0;
    dut.io_load_1_req_bits_isFirstIssue = 0;
    dut.io_load_1_req_bits_replayCarry_real_way_en = 0;
    dut.io_load_1_req_bits_replayCarry_valid = 0;
    dut.io_load_1_req_bits_lqIdx_flag = 0;
    dut.io_load_1_req_bits_lqIdx_value = 0;
    dut.io_load_1_s1_kill_data_read = 0;
    dut.io_load_1_s1_kill = 0;
    dut.io_load_1_s2_kill = 0;
    dut.io_load_1_s0_pc = 0;
    dut.io_load_1_s1_pc = 0;
    dut.io_load_1_s2_pc = 0;
    dut.io_load_1_replacementUpdated = 0;
    dut.io_load_1_is128Req = 0;
    dut.io_load_1_s1_paddr_dup_lsu = 0;
    dut.io_load_1_s1_paddr_dup_dcache = 0;
    wide_clear(dut.io_load_1_req_bits_data, 4);

    dut.io_store_req_valid = 0;
    dut.io_store_req_bits_cmd = 0;
    dut.io_store_req_bits_vaddr = 0;
    dut.io_store_req_bits_addr = 0;
    dut.io_store_req_bits_mask = 0;
    dut.io_store_req_bits_id = 0;
    wide_clear(dut.io_store_req_bits_data, 16);

    dut.io_atomics_req_valid = 0;
    dut.io_atomics_req_bits_cmd = 0;
    dut.io_atomics_req_bits_vaddr = 0;
    dut.io_atomics_req_bits_addr = 0;
    dut.io_atomics_req_bits_tagAlias = 0;
    dut.io_atomics_req_bits_id = 0;
    dut.io_atomics_req_bits_missId = 0;
    dut.io_atomics_req_bits_pc = 0;
    dut.io_atomics_req_bits_wordIdx = 0;
    dut.io_atomics_req_bits_amoMask = 0;
    dut.io_atomics_req_bits_probeOp = 0;
    dut.io_atomics_req_bits_needData = 0;
    dut.io_atomics_req_bits_snpTxnId = 0;
    dut.io_atomics_req_bits_replaceWay = 0;
    wide_clear(dut.io_atomics_req_bits_amoData, 4);
    wide_clear(dut.io_atomics_req_bits_amoCmp, 4);

    dut.io_cmoReq_valid = 0;
    dut.io_cmoReq_bits_id = 0;
    dut.io_cmoReq_bits_opcode = 0;
    dut.io_cmoReq_bits_addr = 0;
    dut.io_cmoReq_bits_alias = 0;
    dut.io_forwardMshr_id = 0;
    dut.io_forwardMshr_half = 0;
    dut.io_l2_rxRsp_bits_txnID = 0;
    dut.io_l2_rxRsp_bits_srcID = 0;
    dut.io_l2_rxRsp_bits_tgtID = 0;
    dut.io_l2_rxRsp_bits_opcode = 0;
    dut.io_l2_rxRsp_bits_dbID = 0;
    dut.io_l2_rxRsp_bits_respErr = 0;
    dut.io_l2_rxRsp_bits_resp = 0;
    dut.io_l2_rxRsp_bits_cBusy = 0;
    dut.io_l2_rxRsp_bits_traceTag = 0;
    dut.io_l2_rxDat_bits_txnID = 0;
    dut.io_l2_rxDat_bits_srcID = 0;
    dut.io_l2_rxDat_bits_tgtID = 0;
    dut.io_l2_rxDat_bits_opcode = 0;
    dut.io_l2_rxDat_bits_dbID = 0;
    dut.io_l2_rxDat_bits_respErr = 0;
    dut.io_l2_rxDat_bits_resp = 0;
    dut.io_l2_rxDat_bits_dataSource = 0;
    dut.io_l2_rxDat_bits_cBusy = 0;
    dut.io_l2_rxDat_bits_dataID = 0;
    dut.io_l2_rxDat_bits_traceTag = 0;
    wide_clear(dut.io_l2_rxDat_bits_data, 8);
    dut.io_l2_rxSnp_bits_txnID = 0;
    dut.io_l2_rxSnp_bits_srcID = 0;
    dut.io_l2_rxSnp_bits_tgtID = 0;
    dut.io_l2_rxSnp_bits_opcode = 0;
    dut.io_l2_rxSnp_bits_addr = 0;
    dut.io_l2_rxSnp_bits_tagAlias = 0;
    dut.io_l2_rxSnp_bits_ns = 0;
    dut.io_l2_rxSnp_bits_traceTag = 0;

    dut.io_load_0_resp_ready = 1;
    dut.io_load_1_resp_ready = 1;
    dut.io_store_main_pipe_hit_resp_ready = 1;
    dut.io_store_refill_hit_resp_ready = 1;
    dut.io_store_replay_resp_ready = 1;
    dut.io_atomics_resp_ready = 1;
    dut.io_atomics_replay_ready = 1;
    dut.io_cmoResp_ready = 1;
    dut.io_refillWakeup_ready = 1;
    dut.io_loadReplay_ready = 1;
    dut.io_wfi_req = wfi_;
  }

  void drive() {
    zero_inputs();
    if (ld_phase == LdPhase::Req) {
      dut.io_load_0_req_valid = 1;
      dut.io_load_0_req_bits_cmd = kCmdLoad;
      dut.io_load_0_req_bits_vaddr = ld_addr;
      dut.io_load_0_req_bits_vaddr_dup = ld_addr;
      dut.io_load_0_req_bits_id = ld_id;
      dut.io_load_0_req_bits_isFirstIssue = 1;
      dut.io_load_0_req_bits_mask = 0xff;
    } else if (ld_phase == LdPhase::Pipe) {
      dut.io_load_0_s1_paddr_dup_lsu = ld_addr;
      dut.io_load_0_s1_paddr_dup_dcache = ld_addr;
    }
    if (st_phase == StPhase::Req) {
      dut.io_store_req_valid = 1;
      dut.io_store_req_bits_cmd = kCmdStore;
      dut.io_store_req_bits_vaddr = st_addr;
      dut.io_store_req_bits_addr = st_addr;
      dut.io_store_req_bits_id = st_id;
      dut.io_store_req_bits_mask = ~uint64_t{0};
      wide_store(dut.io_store_req_bits_data, 16, st_line.b, kLineBytes);
    }
    home.drive(dut, sb);
  }

  void sample() {
    if (!dut.reset) {
      home.capture(dut, sb);
      sample_cpu();
    }
  }

  void sample_cpu() {
    if (dut.io_loadReplay_valid && dut.io_loadReplay_ready) {
      status.fail(log, "cycle=%llu loadReplay addr=%llx，第一版不期望安装失败",
                  static_cast<unsigned long long>(cycle),
                  static_cast<unsigned long long>(dut.io_loadReplay_bits_addr));
    }
    if (dut.io_refillWakeup_valid && dut.io_refillWakeup_ready) {
      woken.insert(line_addr(dut.io_refillWakeup_bits_addr));
      log.add("c%llu refillWakeup addr=%llx", static_cast<unsigned long long>(cycle),
              static_cast<unsigned long long>(dut.io_refillWakeup_bits_addr));
    }
    if (ld_phase == LdPhase::Req && dut.io_load_0_req_valid && dut.io_load_0_req_ready) {
      ld_phase = LdPhase::Pipe;
    }
    if (ld_phase == LdPhase::Pipe && dut.io_load_0_resp_valid && dut.io_load_0_resp_ready &&
        dut.io_load_0_resp_bits_id == ld_id) {
      if (dut.io_load_0_resp_bits_replay) {
        ld_kind = LdKind::Replay;
      } else if (dut.io_load_0_s2_hit) {
        ld_kind = LdKind::Hit;
        uint8_t raw[16] = {};
        wide_load(dut.io_load_0_resp_bits_data, raw, 16);
        std::memcpy(ld_data, raw, 8);
        for (int i = 8; i < 16; ++i) {
          if (raw[i] != 0) {
            status.fail(log, "cycle=%llu 非 128bit load 的高 64 位不是 0",
                        static_cast<unsigned long long>(cycle));
            break;
          }
        }
      } else if (dut.io_load_0_resp_bits_miss || dut.io_load_0_resp_bits_handled) {
        ld_kind = LdKind::Miss;
      } else {
        status.fail(log, "cycle=%llu load resp 无法归类", static_cast<unsigned long long>(cycle));
        ld_kind = LdKind::Replay;
      }
      ld_done = true;
      ld_phase = LdPhase::Idle;
    }
    if (st_phase == StPhase::Req && dut.io_store_req_valid && dut.io_store_req_ready) {
      st_phase = StPhase::Wait;
    }
    if (st_phase == StPhase::Wait) {
      const bool hit = dut.io_store_main_pipe_hit_resp_valid && dut.io_store_main_pipe_hit_resp_ready &&
                       dut.io_store_main_pipe_hit_resp_bits_id == st_id;
      const bool refill = dut.io_store_refill_hit_resp_valid && dut.io_store_refill_hit_resp_ready &&
                          dut.io_store_refill_hit_resp_bits_id == st_id;
      const bool replay = dut.io_store_replay_resp_valid && dut.io_store_replay_resp_ready &&
                          dut.io_store_replay_resp_bits_id == st_id;
      if (hit || refill) {
        st_commit = true;
        st_done = true;
        st_phase = StPhase::Idle;
        log.add("c%llu store %s id=%u addr=%llx", static_cast<unsigned long long>(cycle),
                hit ? "hit" : "refill", st_id, static_cast<unsigned long long>(st_addr));
      } else if (replay) {
        st_replay = true;
        st_done = true;
        st_phase = StPhase::Idle;
        log.add("c%llu store replay addr=%llx", static_cast<unsigned long long>(cycle),
                static_cast<unsigned long long>(st_addr));
      }
    }
    if (dut.io_atomics_resp_valid || dut.io_atomics_replay_valid || dut.io_cmoResp_valid) {
      status.fail(log, "cycle=%llu 第一版不应收到原子或 CMO 响应",
                  static_cast<unsigned long long>(cycle));
    }
  }

  void open_wave(const char* name) {
#if WAVE
    close_wave();
    if (mkdir("/home/ywj/yqh/dcache_test/logs", 0755) != 0 && errno != EEXIST) {
      std::printf("无法创建波形目录\n");
      wave_path[0] = 0;
      return;
    }
    std::snprintf(wave_path, sizeof wave_path, "/home/ywj/yqh/dcache_test/logs/%s.vcd", name);
    wave = new VerilatedVcdC;
    dut.trace(wave, 99);
    wave->open(wave_path);
    wave_open = wave->isOpen();
    if (!wave_open) std::printf("无法写波形 %s\n", wave_path);
#else
    (void)name;
#endif
  }

  void close_wave() {
#if WAVE
    if (!wave) return;
    if (wave_open) {
      wave->flush();
      wave->close();
    }
    delete wave;
    wave = nullptr;
    wave_open = false;
#endif
  }

  // 低电平半拍记激励（sample 看到的值），高电平半拍记上升沿之后的寄存器。
  // 周期 10ns，避免只在一个沿采样把 valid/ready 看丢。
  void dump_wave(uint64_t t) {
#if WAVE
    if (wave_open) wave->dump(t);
#else
    (void)t;
#endif
  }

  void step() {
    dut.clock = 0;
    dut.eval();
    home.cycle = cycle;
    home.consider(dut);
    drive();
    dut.eval();
    sample();
    dump_wave(cycle * 10);
    dut.clock = 1;
    dut.eval();
    dump_wave(cycle * 10 + 5);
    home.tick();
    ++cycle;
  }

  void reset_dut() {
    cycle = 0;
    home.reset();
    sb.reset();
    woken.clear();
    wfi_ = false;
    ld_phase = LdPhase::Idle;
    st_phase = StPhase::Idle;
    dut.clock = 0;
    dut.reset = 1;
    zero_inputs();
    dut.eval();
    for (int i = 0; i < 6; ++i) step();
    dut.reset = 0;
    for (int i = 0; i < 2; ++i) step();
  }

  bool wait_pred(int limit, bool (Sim::*pred)() const) {
    for (int i = 0; i < limit && !status.failed; ++i) {
      if ((this->*pred)()) return true;
      step();
    }
    return (this->*pred)() && !status.failed;
  }

  void issue_load(uint64_t addr) {
    const uint64_t line = line_addr(addr);
    for (int attempt = 0; attempt < 8 && !status.failed; ++attempt) {
      ld_addr = addr;
      ld_id = 3;
      ld_done = false;
      ld_kind = LdKind::None;
      ld_phase = LdPhase::Req;
      bool finished = false;
      for (int i = 0; i < 4000 && !status.failed; ++i) {
        step();
        if (ld_done) {
          finished = true;
          break;
        }
      }
      if (!finished) {
        status.fail(log, "load 超时 addr=%llx", static_cast<unsigned long long>(addr));
        return;
      }
      if (ld_kind == LdKind::Replay) continue;
      if (ld_kind == LdKind::Hit) {
        check_load(addr);
        return;
      }
      woken.erase(line);
      bool woke = false;
      for (int i = 0; i < 4000 && !status.failed; ++i) {
        if (woken.count(line)) {
          woke = true;
          break;
        }
        step();
      }
      if (!woke) {
        status.fail(log, "miss 之后没有 refillWakeup addr=%llx", static_cast<unsigned long long>(addr));
        home.dump();
        return;
      }
      for (int i = 0; i < 4 && !status.failed; ++i) step();
    }
    if (!status.failed) status.fail(log, "load 重试过多 addr=%llx", static_cast<unsigned long long>(addr));
  }

  void check_load(uint64_t addr) {
    const Line* golden = sb.find_golden(addr);
    Line zeros;
    const uint8_t* expect = golden ? golden->b : zeros.b;
    const int off = bank_of(addr) * 8;
    if (std::memcmp(ld_data, expect + off, 8) != 0) {
      status.fail(log,
                  "load 数据不符 addr=%llx got=%02x%02x%02x%02x%02x%02x%02x%02x "
                  "exp=%02x%02x%02x%02x%02x%02x%02x%02x",
                  static_cast<unsigned long long>(addr), ld_data[0], ld_data[1], ld_data[2], ld_data[3],
                  ld_data[4], ld_data[5], ld_data[6], ld_data[7], expect[off], expect[off + 1],
                  expect[off + 2], expect[off + 3], expect[off + 4], expect[off + 5], expect[off + 6],
                  expect[off + 7]);
    }
  }

  void issue_store(uint64_t addr, const Line& line) {
    for (int attempt = 0; attempt < 8 && !status.failed; ++attempt) {
      st_addr = line_addr(addr);
      st_line = line;
      st_id = 9;
      st_done = false;
      st_replay = false;
      st_commit = false;
      st_phase = StPhase::Req;
      bool finished = false;
      for (int i = 0; i < 4000 && !status.failed; ++i) {
        step();
        if (st_done) {
          finished = true;
          break;
        }
      }
      if (!finished) {
        status.fail(log, "store 超时 addr=%llx", static_cast<unsigned long long>(addr));
        home.dump();
        return;
      }
      if (st_replay) continue;
      if (st_commit) {
        sb.commit_store(st_addr, st_line);
        return;
      }
    }
    if (!status.failed) status.fail(log, "store 重试过多 addr=%llx", static_cast<unsigned long long>(addr));
  }

  void drain() {
    ld_phase = LdPhase::Idle;
    st_phase = StPhase::Idle;
    wfi_ = true;
    for (int i = 0; i < 8000 && !status.failed; ++i) {
      step();
      if (dut.io_wfi_safe && !home.busy()) {
        log.add("c%llu wfi.safe", static_cast<unsigned long long>(cycle));
        return;
      }
    }
    status.fail(log, "排空超时 wfi.safe=%u home.busy=%d", dut.io_wfi_safe ? 1 : 0, home.busy() ? 1 : 0);
    home.dump();
  }

  static uint64_t same_set(int index) {
    return 0x80000000ull + (static_cast<uint64_t>(index) << 14) + (4ull << 6);
  }

  void test_load_miss() {
    Line line;
    fill_line(line, 0xA);
    const uint64_t addr = 0x80001000ull;
    sb.seed(addr, line);
    const int before = home.stat_read_shared;
    issue_load(addr);
    issue_load(addr + 56);
    if (!status.failed && home.stat_read_shared == before) {
      status.fail(log, "load miss 没有发出 ReadShared");
    }
  }

  void test_store_miss_load() {
    Line line;
    fill_line(line, 0xB);
    const uint64_t addr = 0x80002040ull;
    const int before = home.stat_make_unique;
    issue_store(addr, line);
    if (!status.failed && home.stat_make_unique == before) {
      status.fail(log, "整行 store miss 没有发出 MakeUnique");
    }
    for (int i = 0; i < 4 && !status.failed; ++i) step();
    issue_load(line_addr(addr));
    issue_load(line_addr(addr) + 56);
  }

  void test_store_hit() {
    Line first;
    Line second;
    fill_line(first, 0xC);
    fill_line(second, 0xD);
    const uint64_t addr = 0x80003080ull;
    issue_store(addr, first);
    const int after_miss = home.stat_make_unique;
    issue_store(addr, second);
    if (!status.failed && home.stat_make_unique != after_miss) {
      status.fail(log, "第二笔整行 store 又发了 MakeUnique，没有走命中写");
    }
    for (int i = 0; i < 4 && !status.failed; ++i) step();
    issue_load(line_addr(addr) + 24);
  }

  void test_dirty_replace() {
    for (int i = 0; i < 5 && !status.failed; ++i) {
      Line line;
      fill_line(line, static_cast<uint8_t>(0x10 + i));
      issue_store(same_set(i), line);
    }
    if (!status.failed) drain();
    if (!status.failed && home.stat_wb_full < 1) {
      status.fail(log, "同 set 第五行没有写出 WriteBackFull");
    }
    wfi_ = false;
    for (int i = 0; i < 5 && !status.failed; ++i) issue_load(same_set(i));
  }

  void test_backpressure() {
    home.block_until = cycle + 50;
    home.arm_compack = true;
    Line line;
    fill_line(line, 0xE);
    const uint64_t addr = 0x80004000ull;
    sb.seed(addr, line);
    issue_load(addr);
    if (!status.failed && home.stat_blocked == 0) {
      status.fail(log, "反压没有挡住任何 L2 通道");
    }
  }
};

int main(int argc, char** argv) {
  Verilated::commandArgs(argc, argv);
#if WAVE
  Verilated::traceEverOn(true);
#endif
  const bool trace = std::getenv("DTRACE") != nullptr;
  Sim sim(trace);
  const bool ok = sim.run_all();
#if WAVE
  std::printf("波形在 /home/ywj/yqh/dcache_test/logs/ 。每个测试一个 vcd，时间从 0 开始。\n");
  std::printf("时钟周期 10ns：0-5ns 为低电平，激励已驱动；5ns 为上升沿。\n");
#endif
  return ok ? 0 : 1;
}
