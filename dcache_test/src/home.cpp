#include "home.hpp"

#include "VDCache.h"

#include <cstdarg>

void Home::fail(const char* fmt, ...) {
  if (status == nullptr || status->failed) return;
  char buf[512];
  va_list ap;
  va_start(ap, fmt);
  std::vsnprintf(buf, sizeof buf, fmt, ap);
  va_end(ap);
  status->fail(*log, "cycle=%llu %s", static_cast<unsigned long long>(cycle), buf);
}

void Home::reset() {
  miss_.clear();
  wb_.clear();
  block_until = 0;
  compack_hold = 0;
  arm_compack = false;
  compack_armed_ = false;
  stat_read_shared = 0;
  stat_read_unique = 0;
  stat_make_unique = 0;
  stat_wb_full = 0;
  stat_evict = 0;
  stat_blocked = 0;
}

bool Home::busy() const {
  for (const auto& item : miss_) {
    const Miss& miss = item.second;
    if (!miss.rsp_sent || !miss.acked) return true;
    if (miss.need_data && miss.beat < 2) return true;
  }
  for (const auto& item : wb_) {
    if (!item.second.done) return true;
  }
  return false;
}

void Home::dump() const {
  std::printf("--- Home 未完成 ---\n");
  for (const auto& item : miss_) {
    const Miss& miss = item.second;
    std::printf("  miss txn=%u %s addr=%llx rsp=%d beat=%d ack=%d\n", item.first,
                req_name(miss.opcode), static_cast<unsigned long long>(miss.addr),
                miss.rsp_sent ? 1 : 0, miss.beat, miss.acked ? 1 : 0);
  }
  for (const auto& item : wb_) {
    const Writeback& wb = item.second;
    std::printf("  wb txn=%u addr=%llx dirty=%d rsp=%d beats=%d%d done=%d\n", item.first,
                static_cast<unsigned long long>(wb.addr), wb.dirty ? 1 : 0,
                wb.rsp_sent ? 1 : 0, wb.got[0] ? 1 : 0, wb.got[1] ? 1 : 0, wb.done ? 1 : 0);
  }
}

void Home::consider(VDCache& dut) {
  if (arm_compack && !compack_armed_ && dut.io_l2_txRsp_valid &&
      dut.io_l2_txRsp_bits_opcode == kRspCompAck) {
    compack_hold = 16;
    compack_armed_ = true;
    if (log) log->add("c%llu 压住 CompAck 16 拍", static_cast<unsigned long long>(cycle));
  }
}

void Home::drive(VDCache& dut, const Scoreboard& sb) {
  const bool down = link_down();
  dut.io_l2_req_ready = !down;
  dut.io_l2_evt_ready = !down;
  dut.io_l2_txDat_ready = !down;
  dut.io_l2_txRsp_ready = !(down || compack_hold > 0);
  dut.io_l2_rxRsp_valid = 0;
  dut.io_l2_rxDat_valid = 0;
  dut.io_l2_rxSnp_valid = 0;
  if (down) {
    if (dut.io_l2_req_valid || dut.io_l2_evt_valid || dut.io_l2_txDat_valid || dut.io_l2_txRsp_valid) {
      ++stat_blocked;
    }
    return;
  }

  uint32_t rsp_txn = 0;
  bool have_rsp = false;
  bool rsp_is_wb = false;
  for (auto& item : miss_) {
    Miss& miss = item.second;
    if (!miss.rsp_sent && miss.delay == 0) {
      rsp_txn = item.first;
      have_rsp = true;
      break;
    }
  }
  if (!have_rsp) {
    for (auto& item : wb_) {
      Writeback& wb = item.second;
      if (!wb.rsp_sent && wb.delay == 0) {
        rsp_txn = item.first;
        have_rsp = true;
        rsp_is_wb = true;
        break;
      }
    }
  }

  if (have_rsp) {
    const uint8_t resp = rsp_is_wb ? 0 : miss_.at(rsp_txn).resp;
    const uint32_t opcode = rsp_is_wb ? (wb_.at(rsp_txn).dirty ? kRspCompDBIDResp : kRspComp)
                                      : kRspCompDBIDResp;
    dut.io_l2_rxRsp_valid = 1;
    dut.io_l2_rxRsp_bits_txnID = rsp_txn;
    dut.io_l2_rxRsp_bits_srcID = kL2Id;
    dut.io_l2_rxRsp_bits_tgtID = kDCacheId;
    dut.io_l2_rxRsp_bits_opcode = opcode;
    dut.io_l2_rxRsp_bits_dbID = rsp_txn;
    dut.io_l2_rxRsp_bits_respErr = 0;
    dut.io_l2_rxRsp_bits_resp = resp;
    return;
  }

  for (auto& item : miss_) {
    Miss& miss = item.second;
    if (!miss.need_data || !miss.rsp_sent || miss.beat_gap > 0 || miss.beat >= 2) continue;
    const Line* backing = sb.find_backing(miss.addr);
    Line zeros;
    const Line& line = backing ? *backing : zeros;
    uint8_t beat[kBeatBytes];
    const int off = miss.beat * kBeatBytes;
    std::memcpy(beat, line.b + off, kBeatBytes);
    dut.io_l2_rxDat_valid = 1;
    dut.io_l2_rxDat_bits_txnID = item.first;
    dut.io_l2_rxDat_bits_srcID = kL2Id;
    dut.io_l2_rxDat_bits_tgtID = kDCacheId;
    dut.io_l2_rxDat_bits_opcode = kDatCompData;
    dut.io_l2_rxDat_bits_dbID = item.first;
    dut.io_l2_rxDat_bits_respErr = 0;
    dut.io_l2_rxDat_bits_resp = miss.resp;
    dut.io_l2_rxDat_bits_dataID = miss.beat;
    wide_store(dut.io_l2_rxDat_bits_data, 8, beat, kBeatBytes);
    return;
  }
}

void Home::capture(VDCache& dut, Scoreboard& sb) {
  if (dut.io_l2_req_valid && dut.io_l2_req_ready) {
    const uint32_t txn = dut.io_l2_req_bits_txnID;
    const uint32_t opcode = dut.io_l2_req_bits_opcode;
    const uint64_t addr = dut.io_l2_req_bits_addr;
    const uint32_t alias = dut.io_l2_req_bits_tagAlias;
    if (log) {
      log->add("c%llu TXREQ txn=%u %s addr=%llx alias=%u",
               static_cast<unsigned long long>(cycle), txn, req_name(opcode),
               static_cast<unsigned long long>(addr), alias);
    }
    if (txn >= 16) fail("TXREQ txnId=%u 不是 MSHR", txn);
    if ((addr & 63u) != 0) fail("TXREQ 地址 %llx 没有按行对齐", static_cast<unsigned long long>(addr));
    if (alias != ((addr >> 12) & 3u)) {
      fail("TXREQ tagAlias=%u 和地址 %llx 的 [13:12] 不一致", alias,
           static_cast<unsigned long long>(addr));
    }
    if (dut.io_l2_req_bits_srcID != kDCacheId) fail("TXREQ srcID=%u", dut.io_l2_req_bits_srcID);
    if (miss_.count(txn)) fail("TXREQ txnId=%u 还没结束又被使用", txn);
    Miss miss;
    miss.opcode = opcode;
    miss.addr = addr;
    miss.delay = 1;
    if (opcode == kReqReadShared) {
      miss.need_data = true;
      miss.resp = kRespSC;
      ++stat_read_shared;
    } else if (opcode == kReqReadUnique) {
      miss.need_data = true;
      miss.resp = kRespUC;
      ++stat_read_unique;
    } else if (opcode == kReqMakeUnique) {
      miss.need_data = false;
      miss.resp = kRespUC;
      ++stat_make_unique;
    } else {
      fail("第一版不回 %s opcode=%u", req_name(opcode), opcode);
    }
    if (!status->failed) miss_[txn] = miss;
  }

  if (dut.io_l2_evt_valid && dut.io_l2_evt_ready) {
    const uint32_t txn = dut.io_l2_evt_bits_txnID;
    const uint32_t opcode = dut.io_l2_evt_bits_opcode;
    const uint64_t addr = dut.io_l2_evt_bits_addr;
    if (log) {
      log->add("c%llu TXEVT txn=%u %s addr=%llx", static_cast<unsigned long long>(cycle), txn,
               opcode == kEvtWriteBackFull ? "WriteBackFull" : "Evict",
               static_cast<unsigned long long>(addr));
    }
    if (txn < 17 || txn >= 35) fail("TXEVT txnId=%u 不在 WritebackQueue", txn);
    if (wb_.count(txn)) fail("TXEVT txnId=%u 重复", txn);
    Writeback wb;
    wb.addr = addr;
    wb.delay = 1;
    if (opcode == kEvtWriteBackFull) {
      wb.dirty = true;
      ++stat_wb_full;
    } else if (opcode == kEvtEvict) {
      wb.dirty = false;
      ++stat_evict;
    } else {
      fail("TXEVT opcode=%u", opcode);
    }
    if (!status->failed) wb_[txn] = wb;
  }

  if (dut.io_l2_rxRsp_valid && dut.io_l2_rxRsp_ready) {
    auto mark_rsp = [&](uint32_t txn, bool wb) {
      if (log) {
        log->add("c%llu RXRSP txn=%u %s", static_cast<unsigned long long>(cycle), txn,
                 wb ? "writeback" : "miss");
      }
    };
    if (miss_.count(dut.io_l2_rxRsp_bits_txnID) && !wb_.count(dut.io_l2_rxRsp_bits_txnID)) {
      Miss& miss = miss_.at(dut.io_l2_rxRsp_bits_txnID);
      miss.rsp_sent = true;
      miss.beat_gap = 1;
      mark_rsp(dut.io_l2_rxRsp_bits_txnID, false);
    } else if (wb_.count(dut.io_l2_rxRsp_bits_txnID)) {
      wb_.at(dut.io_l2_rxRsp_bits_txnID).rsp_sent = true;
      mark_rsp(dut.io_l2_rxRsp_bits_txnID, true);
    }
  }

  if (dut.io_l2_rxDat_valid && dut.io_l2_rxDat_ready) {
    const uint32_t txn = dut.io_l2_rxDat_bits_txnID;
    if (!miss_.count(txn)) {
      fail("RXDAT 没有对应的 MSHR txn=%u", txn);
    } else {
      Miss& miss = miss_.at(txn);
      if (log) {
        log->add("c%llu RXDAT txn=%u beat=%u", static_cast<unsigned long long>(cycle), txn,
                 dut.io_l2_rxDat_bits_dataID);
      }
      ++miss.beat;
    }
  }

  if (dut.io_l2_txRsp_valid && dut.io_l2_txRsp_ready) {
    const uint32_t txn = dut.io_l2_txRsp_bits_txnID;
    const uint32_t opcode = dut.io_l2_txRsp_bits_opcode;
    if (log) log->add("c%llu TXRSP txn=%u opcode=%u", static_cast<unsigned long long>(cycle), txn, opcode);
    if (opcode != kRspCompAck) {
      fail("第一版不应出现 SnpResp，txn=%u", txn);
    } else if (!miss_.count(txn)) {
      fail("CompAck dbid=%u 对不上已发出的事务", txn);
    } else {
      Miss& miss = miss_.at(txn);
      if (miss.need_data && miss.beat < 2) fail("CompAck 早于两拍 CompData，txn=%u", txn);
      if (!miss.rsp_sent) fail("CompAck 早于 DBID，txn=%u", txn);
      miss.acked = true;
    }
  }

  if (dut.io_l2_txDat_valid && dut.io_l2_txDat_ready) {
    const uint32_t txn = dut.io_l2_txDat_bits_txnID;
    const uint32_t data_id = dut.io_l2_txDat_bits_dataID;
    if (log) {
      log->add("c%llu TXDAT txn=%u dataId=%u opcode=%u", static_cast<unsigned long long>(cycle), txn,
               data_id, dut.io_l2_txDat_bits_opcode);
    }
    if (!wb_.count(txn)) {
      fail("TXDAT txn/dbid=%u 没有对应的写回", txn);
    } else {
      Writeback& wb = wb_.at(txn);
      if (!wb.dirty) fail("干净 Evict 却发出了 TXDAT，txn=%u", txn);
      if (dut.io_l2_txDat_bits_opcode != kDatCopyBackWrData) {
        fail("写回 TXDAT opcode=%u，txn=%u", dut.io_l2_txDat_bits_opcode, txn);
      }
      if (data_id > 1) fail("TXDAT dataId=%u", data_id);
      if (wb.got[data_id]) fail("TXDAT dataId=%u 重复，txn=%u", data_id, txn);
      uint8_t beat[kBeatBytes];
      wide_load(dut.io_l2_txDat_bits_data, beat, kBeatBytes);
      std::memcpy(wb.data.b + data_id * kBeatBytes, beat, kBeatBytes);
      wb.got[data_id] = true;
      if (wb.got[0] && wb.got[1]) {
        const Line* golden = sb.find_golden(wb.addr);
        if (golden == nullptr) {
          fail("写回了黄金内存里没有的行 %llx", static_cast<unsigned long long>(wb.addr));
        } else if (std::memcmp(golden->b, wb.data.b, kLineBytes) != 0) {
          fail("写回数据和黄金内存不一致 addr=%llx", static_cast<unsigned long long>(wb.addr));
        } else {
          sb.note_writeback(wb.addr, wb.data);
          wb.done = true;
          if (log) {
            log->add("c%llu 写回对齐黄金内存 addr=%llx", static_cast<unsigned long long>(cycle),
                     static_cast<unsigned long long>(wb.addr));
          }
        }
      }
    }
  }

  retire();
}

void Home::retire() {
  for (auto it = miss_.begin(); it != miss_.end();) {
    const Miss& miss = it->second;
    const bool data_ok = !miss.need_data || miss.beat >= 2;
    if (miss.rsp_sent && miss.acked && data_ok) it = miss_.erase(it);
    else ++it;
  }
  for (auto it = wb_.begin(); it != wb_.end();) {
    Writeback& wb = it->second;
    if (!wb.dirty && wb.rsp_sent) wb.done = true;
    if (wb.done) it = wb_.erase(it);
    else ++it;
  }
}

void Home::tick() {
  for (auto& item : miss_) {
    if (item.second.delay > 0) --item.second.delay;
    if (item.second.beat_gap > 0) --item.second.beat_gap;
  }
  for (auto& item : wb_) {
    if (item.second.delay > 0) --item.second.delay;
  }
  if (compack_hold > 0) --compack_hold;
}
