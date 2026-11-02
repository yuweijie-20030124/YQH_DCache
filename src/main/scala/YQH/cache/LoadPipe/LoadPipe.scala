// 无 WPU。命中通路是 s0、s1、s2 三级，不是 LoadPipe.md 开头说的两级。
// Tag/Meta 在 s0 发起读，同步存储下一拍才出结果，所以比较在 s1。
// Data 也是同步 SRAM：s1 按 bank 发出读，s2 才拿到数据并回答 LSU。
// 当前 Data 是 8 块 SRAM，每块一次读出 4 路。s1 即使已经知道真实 way，
// 仍然读该 bank 的全部 way，s2 再按命中 way 挑选。miss 和软件预取不读 Data。
// replayCarry 只随 replay 交还 LSU。重发仍从 s0 的 tag 比较开始，不用它直接选数据。
package YQH.cache

import chisel3._
import chisel3.util._

class LoadPipeIO(implicit p: DCacheParameters) extends DCacheBundle {
  val lsu = Flipped(new DCacheLoadIO)

  val meta_read = DecoupledIO(new MetaReadReq)
  val meta_resp = Input(Vec(nways, new MetaData))

  val tag_read = DecoupledIO(new TagReadReq)
  val tag_resp = Input(Vec(nways, UInt(tagBits.W)))

  val banked_data_read = DecoupledIO(new L1BankedDataReadReqWithMask)
  val is128Req = Output(Bool())
  val banked_data_resp = Input(Vec(2, new L1BankedDataReadResult))
  val bank_conflict = Input(Bool())

  val miss_req = DecoupledIO(new MissReq)
  val miss_resp = Input(new MissResp)

  val wbq_conflict_check = Valid(UInt(PAddrBits.W))
  val wbq_block_miss_req = Input(Bool())

  // 命中时通知替换算法。LoadPipe 不选 victim。
  val replace_access = ValidIO(new ReplacementAccessBundle)

  val disable_ld_fast_wakeup = Input(Bool())
  val unique_occupy_set = Output(UInt(idxBits.W))
  val unique_occupy_fail = Input(Bool())
}

class LoadPipe(id: Int)(implicit p: DCacheParameters) extends DCacheModule with MemoryOpConstants {
  require(id >= 0 && id < loadPipelineWidth, s"LoadPipe id 必须落在 0 到 ${loadPipelineWidth - 1}，当前是 $id")

  val io = IO(new LoadPipeIO)

  // Meta 是寄存器，读口保持就绪。Tag 在写的那一拍会拉低 ready。
  assert(io.meta_read.ready, "meta read port must stay ready")

  val s1_ready = Wire(Bool())
  val s2_ready = Wire(Bool())

  def lineAddr(paddr: UInt): UInt =
    Cat(paddr(PAddrBits - 1, blockOffBits), 0.U(blockOffBits.W))

  def hasWritePerm(coh: UInt): Bool =
    coh === MetaData.UNIQUE_CLEAN || coh === MetaData.UNIQUE_DIRTY

  // s0：虚地址读这个 set 的全部 tag 和 meta。这一拍不碰 Data。
  io.tag_read.valid := io.lsu.req.valid && s1_ready && io.meta_read.ready
  io.meta_read.valid := io.lsu.req.valid && s1_ready && io.tag_read.ready
  io.lsu.req.ready := io.tag_read.ready && io.meta_read.ready && s1_ready

  io.tag_read.bits.idx := get_idx(io.lsu.req.bits.vaddr)
  io.tag_read.bits.way_en := Fill(nways, 1.U(1.W))
  io.meta_read.bits.idx := get_idx(io.lsu.req.bits.vaddr)
  io.meta_read.bits.way_en := Fill(nways, 1.U(1.W))

  val s0_fire = io.lsu.req.fire
  val s0_bank = addr_to_dcache_bank(io.lsu.req.bits.vaddr)

  // s1：tag、meta 和物理地址都到了。比较出唯一 way，再决定要不要读 Data。
  val s1_valid = RegInit(false.B)
  val s1_req = RegEnable(io.lsu.req.bits, s0_fire)
  val s1_is128 = RegEnable(io.lsu.is128Req, s0_fire)
  val s1_pc = RegEnable(io.lsu.s0_pc, s0_fire)
  val s1_bank = RegEnable(s0_bank, s0_fire)

  val s1_kill = io.lsu.s1_kill
  val s1_paddr = io.lsu.s1_paddr_dup_dcache
  val s1_tag_way = VecInit((0 until nways).map { w =>
    io.tag_resp(w) === get_tag(s1_paddr) && io.meta_resp(w).isValid
  }).asUInt
  val s1_tag_hit = s1_tag_way.orR
  val s1_meta = Mux1H(s1_tag_way, io.meta_resp)
  val s1_prefetch_w = s1_req.cmd === M_PFW
  val s1_hit = s1_tag_hit && (!s1_prefetch_w || hasWritePerm(s1_meta.coh))
  val s1_upgrade = s1_tag_hit && s1_prefetch_w && !s1_hit
  // 普通 load 命中才读数据。预取不返回数据，miss 和权限升级也不读。
  val s1_need_data = s1_valid && !s1_kill && s1_hit && !isPrefetch(s1_req.cmd)

  val s1_bank_oh = UIntToOH(s1_bank, DCacheBanks)
  val s1_bank_mask = Mux(s1_is128, ((s1_bank_oh << 1)(DCacheBanks - 1, 0) | s1_bank_oh), s1_bank_oh)

  io.banked_data_read.valid := s1_need_data && s2_ready
  io.banked_data_read.bits.way_en := Fill(nways, 1.U(1.W))
  io.banked_data_read.bits.addr := s1_req.vaddr
  io.banked_data_read.bits.addr_dup := s1_req.vaddr_dup
  io.banked_data_read.bits.bankMask := s1_bank_mask
  io.banked_data_read.bits.kill := s1_kill
  io.banked_data_read.bits.lqIdx := s1_req.lqIdx
  io.is128Req := s1_valid && s1_is128

  // 这一拍没读成就是冲突，包括被写挡住。s1 不用停下来等 ready，直接带着 replay 进入 s2。
  val s1_bank_conflict = io.banked_data_read.valid && !io.banked_data_read.fire
  val s1_data_ok = !s1_need_data || s1_bank_conflict || io.banked_data_read.fire
  val s1_squash = s1_valid && s1_kill
  val s1_go = s1_valid && !s1_kill && s2_ready && s1_data_ok
  s1_ready := !s1_valid || s1_squash || s1_go

  when(s0_fire) { s1_valid := true.B }
    .elsewhen(s1_squash || s1_go) { s1_valid := false.B }

  io.lsu.s1_disable_fast_wakeup := io.disable_ld_fast_wakeup || (s1_valid && !s1_kill && !s1_hit)

  assert(!s1_valid || s1_kill || PopCount(s1_tag_way) <= 1.U,
    "tag should match at most one way")
  assert(!s1_valid || s1_kill || io.lsu.s1_paddr_dup_lsu === io.lsu.s1_paddr_dup_dcache,
    "duplicated physical addresses disagree")
  assert(!s1_valid || s1_kill || s1_req.cmd === M_XRD || s1_req.cmd === M_PFR || s1_req.cmd === M_PFW,
    "LoadPipe only accepts load and software prefetch")
  assert(!s1_valid || !s1_is128 || s1_bank =/= (DCacheBanks - 1).U,
    "128-bit load must not cross a cache line")
  assert(!io.banked_data_read.valid || io.bank_conflict === !io.banked_data_read.ready,
    "data conflict must be reported as not ready")

  // s2：命中把数据交还 LSU；miss 或权限不够才发 missReq。victim 留到 refill。
  val s2_valid = RegInit(false.B)
  val s2_req = RegEnable(s1_req, s1_go)
  val s2_is128 = RegEnable(s1_is128, s1_go)
  val s2_pc = RegEnable(s1_pc, s1_go)
  val s2_paddr = RegEnable(s1_paddr, s1_go)
  val s2_way_en = RegEnable(s1_tag_way, s1_go)
  val s2_way = RegEnable(OHToUInt(s1_tag_way), s1_go)
  val s2_meta = RegEnable(s1_meta, s1_go)
  val s2_hit = RegEnable(s1_hit, s1_go)
  val s2_tag_hit = RegEnable(s1_tag_hit, s1_go)
  val s2_upgrade = RegEnable(s1_upgrade, s1_go)
  val s2_bank_conflict = RegEnable(s1_bank_conflict, s1_go)
  val s2_need_data = RegEnable(s1_need_data && io.banked_data_read.fire, s1_go)

  val s2_latched = RegInit(false.B)
  val s2_latch_replay = RegInit(false.B)
  val s2_latch_handled = RegInit(false.B)
  val s2_latch_hit = RegInit(false.B)
  val s2_latch_id = Reg(UInt(log2Up(nMissEntries).W))
  val s2_latch_nack = RegInit(false.B)

  val s2_kill = io.lsu.s2_kill
  val s2_prefetch = isPrefetch(s2_req.cmd)
  val s2_first = s2_valid && !s2_latched && !s2_kill
  val s2_block_addr = lineAddr(s2_paddr)

  io.wbq_conflict_check.valid := s2_first && !s2_hit && !s2_bank_conflict
  io.wbq_conflict_check.bits := s2_block_addr
  io.unique_occupy_set := Mux(s2_valid, get_idx(s2_req.vaddr), 0.U)

  val wb_block = io.wbq_block_miss_req
  val occupy_cancel = s2_upgrade && io.unique_occupy_fail
  val send_miss = s2_first && !s2_hit && !s2_bank_conflict && !wb_block && !occupy_cancel
  io.miss_req.valid := send_miss
  io.miss_req.bits.source := Mux(s2_prefetch, SOFT_PREFETCH.U, LOAD_SOURCE.U)
  io.miss_req.bits.cmd := s2_req.cmd
  io.miss_req.bits.addr := s2_block_addr
  io.miss_req.bits.vaddr := s2_req.vaddr
  io.miss_req.bits.pc := s2_pc
  io.miss_req.bits.lqIdx := s2_req.lqIdx
  io.miss_req.bits.full_overwrite := false.B
  io.miss_req.bits.word_idx := 0.U
  io.miss_req.bits.amo_data := 0.U
  io.miss_req.bits.amo_mask := 0.U
  io.miss_req.bits.amo_cmp := 0.U
  io.miss_req.bits.req_coh := s2_meta
  io.miss_req.bits.id := s2_req.id
  io.miss_req.bits.isBtoT := s2_upgrade
  io.miss_req.bits.occupy_way := Mux(s2_upgrade, s2_way_en, 0.U)
  io.miss_req.bits.cancel := false.B
  io.miss_req.bits.store_data := 0.U
  io.miss_req.bits.store_mask := 0.U

  val send_ok = io.miss_req.fire && io.miss_resp.handled
  val send_fail = send_miss && (!io.miss_req.ready || !io.miss_resp.handled)
  val raw_replay = s2_first && !s2_prefetch && (s2_bank_conflict || (!s2_hit && (wb_block || occupy_cancel || send_fail)))
  val raw_hit = s2_first && s2_hit && !s2_bank_conflict
  val raw_handled = send_ok
  val raw_id = io.miss_resp.id
  val raw_nack = send_fail

  val resp_replay = Mux(s2_latched, s2_latch_replay, raw_replay)
  val resp_hit = Mux(s2_latched, s2_latch_hit, raw_hit)
  val resp_handled = Mux(s2_latched, s2_latch_handled, raw_handled)
  val resp_id = Mux(s2_latched, s2_latch_id, raw_id)
  val resp_nack = Mux(s2_latched, s2_latch_nack, raw_nack)

  val low_word = io.banked_data_resp(0).data(s2_way)
  val high_word = io.banked_data_resp(1).data(s2_way)
  val shifted = (Cat(high_word, low_word) >> Cat(s2_req.vaddr(2, 0), 0.U(3.W)))(VLEN - 1, 0)
  val hit_data = Mux(s2_is128, shifted, Cat(0.U((VLEN - 64).W), low_word))

  io.lsu.resp.valid := s2_valid && !s2_kill
  io.lsu.resp.bits.data := Mux(resp_hit && !s2_prefetch, hit_data, 0.U)
  io.lsu.resp.bits.id := s2_req.id
  io.lsu.resp.bits.miss := resp_handled
  io.lsu.resp.bits.replay := resp_replay
  io.lsu.resp.bits.replayCarry.valid := resp_replay && s2_bank_conflict
  io.lsu.resp.bits.replayCarry.real_way_en := s2_way_en
  io.lsu.resp.bits.mshr_id := resp_id
  io.lsu.resp.bits.handled := resp_handled
  io.lsu.resp.bits.real_miss := resp_handled && !s2_tag_hit
  io.lsu.resp.bits.replacementUpdated := resp_hit

  io.replace_access.valid := io.lsu.resp.fire && resp_hit
  io.replace_access.bits.set := get_idx(s2_req.vaddr)
  io.replace_access.bits.way := s2_way

  io.lsu.s2_hit := s2_valid && resp_hit
  io.lsu.s2_first_hit := io.lsu.s2_hit && s2_req.isFirstIssue
  io.lsu.s2_bank_conflict := s2_valid && s2_bank_conflict
  io.lsu.s2_wpu_pred_fail := false.B
  io.lsu.s2_mq_nack := s2_valid && resp_nack

  val s2_done = s2_valid && (s2_kill || io.lsu.resp.fire)
  s2_ready := !s2_valid || s2_done
  when(s1_go) { s2_valid := true.B }
    .elsewhen(s2_done) { s2_valid := false.B }

  when(s2_done || s2_kill) {
    s2_latched := false.B
  }.elsewhen(s2_valid && !s2_latched && !io.lsu.resp.ready) {
    s2_latched := true.B
    s2_latch_replay := raw_replay
    s2_latch_handled := raw_handled
    s2_latch_hit := raw_hit
    s2_latch_id := raw_id
    s2_latch_nack := raw_nack
  }

  assert(!(io.lsu.resp.valid && resp_hit && resp_replay), "hit and replay are mutually exclusive")
  assert(!(io.lsu.resp.valid && resp_hit && resp_handled), "hit and accept are mutually exclusive")
  assert(!(io.lsu.resp.valid && resp_replay && resp_handled), "replay and accept are mutually exclusive")
  assert(!s2_valid || !s2_need_data || s2_hit, "data is read only for a hitting load")
}
