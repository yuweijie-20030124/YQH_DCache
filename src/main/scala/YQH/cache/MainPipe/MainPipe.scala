// MainPipe 是唯一改 Tag、Meta、Data 的流水。
// 仲裁：probe > refill > store > atomic。高优先级本拍进不了，才让下一条。
// 同一 set 在 s1、s2 或 s3 时，新的同 set 请求不进 s0。
//
// 这一版按本地 MainPipe 文档做 store、原子、probe 和 refill 的流水。
// 不接顶层，也不把 Compact CHI 的 opcode 译进 probeOp。
// probeOp：0 失效，1 降为共享，2 清脏。
// force_write 阈值按文档的 0，store 不等待 Load 让出 Data 口。
// refill 只装进命中的路，或已经是 I 的路。不在这一笔里覆盖另一条仍有效的行。
// AMOALU 是组合逻辑，和写在同一个 s3，不再多插一拍。
// storeHit、storeReplay、atomicReplay 都要握手。对端没接住，本级就不走，避免把一次 store 或原子丢掉。
// occupyFail 时原子不能停在 s2：同 set 的 refill 进不来，在途升级就结束不了。这时打 atomicReplay，让 AtomicsUnit 以后重发。
// LR、AMO、AMOCAS 一旦 miss 被收下，s2 不回 atomicResp。MissQueue 把原来的 cmd 放在 refill 上，s3 做完再回。
// AtomicsUnit 看到 atomic.fire 之后要一直留着这笔请求，直到 atomicResp 或 atomicReplay。
package YQH.cache

import chisel3._
import chisel3.util._
import xiangshan.cache.AMOALU

object MainPipeSrc {
  def STORE  = 0.U(2.W)
  def ATOMIC = 1.U(2.W)
  def PROBE  = 2.U(2.W)
  def REFILL = 3.U(2.W)
}

object MainPipeProbe {
  def TO_INVALID = 0.U(2.W)
  def TO_SHARED  = 1.U(2.W)
  def CLEAN      = 2.U(2.W)
}

class MainPipeReq(implicit p: DCacheParameters) extends DCacheBundle {
  val cmd = UInt(M_SZ.W)
  val vaddr = UInt(VAddrBits.W)
  val addr = UInt(PAddrBits.W)
  val tagAlias = UInt(chi.tagAliasBits.W)
  val id = UInt(reqIdWidth.W)
  val missId = UInt(log2Up(nMissEntries).W)
  val pc = UInt(VAddrBits.W)
  // 64 bit bank 的编号，不是字节地址。AMOCAS.Q 用这一拍和后面那一拍。
  val wordIdx = UInt(log2Up(DCacheBanks).W)
  val amoData = UInt(QuadWordBits.W)
  val amoMask = UInt(QuadWordBytes.W)
  val amoCmp = UInt(QuadWordBits.W)
  val probeOp = UInt(2.W)
  val needData = Bool()
  // one-hot。0 表示 MissQueue 还没指定路。
  val replaceWay = UInt(nways.W)
}

class MainPipeRefillInfo(implicit p: DCacheParameters) extends DCacheBundle {
  val data = UInt((blockBytes * 8).W)
  val retUnique = Bool()
  val passDirty = Bool()
  val storeData = UInt((blockBytes * 8).W)
  val storeMask = UInt(blockBytes.W)
}

class MainPipeWbReq(implicit p: DCacheParameters) extends DCacheBundle {
  val addr = UInt(PAddrBits.W)
  val data = UInt((blockBytes * 8).W)
  val passDirty = Bool()
  val oldCoh = UInt(2.W)
}

class MainPipeProbeResp(implicit p: DCacheParameters) extends DCacheBundle {
  val id = UInt(reqIdWidth.W)
  val hit = Bool()
  val coh = UInt(2.W)
  val hasData = Bool()
  val passDirty = Bool()
}

class MainPipeAtomicResp(implicit p: DCacheParameters) extends DCacheBundle {
  val id = UInt(reqIdWidth.W)
  val cmd = UInt(M_SZ.W)
  val data = UInt(QuadWordBits.W)
  val success = Bool()
}

class MainPipeMsInfo(implicit p: DCacheParameters) extends DCacheBundle {
  val s2Wait = Bool()
  val s2MissId = UInt(log2Up(nMissEntries).W)
  val s3Done = Bool()
  val s3MissId = UInt(log2Up(nMissEntries).W)
  val installed = Bool()
  val finalCoh = UInt(2.W)
  val suggestValid = Bool()
  val suggestWay = UInt(log2Up(nways).W)
}

class MainPipeHold(implicit p: DCacheParameters) extends DCacheBundle {
  val src = UInt(2.W)
  val cmd = UInt(M_SZ.W)
  val vaddr = UInt(VAddrBits.W)
  val addr = UInt(PAddrBits.W)
  val set = UInt(idxBits.W)
  val id = UInt(reqIdWidth.W)
  val missId = UInt(log2Up(nMissEntries).W)
  val pc = UInt(VAddrBits.W)
  val storeData = UInt((blockBytes * 8).W)
  val storeMask = UInt(blockBytes.W)
  val wordIdx = UInt(log2Up(DCacheBanks).W)
  val amoData = UInt(QuadWordBits.W)
  val amoMask = UInt(QuadWordBytes.W)
  val amoCmp = UInt(QuadWordBits.W)
  val probeOp = UInt(2.W)
  val needData = Bool()
  val replaceWay = UInt(nways.W)
}

class MainPipeIO(implicit p: DCacheParameters) extends DCacheBundle {
  val probe = Flipped(DecoupledIO(new MainPipeReq))
  val refill = Flipped(DecoupledIO(new MainPipeReq))
  val store = Flipped(DecoupledIO(new DCacheLineReq))
  val atomic = Flipped(DecoupledIO(new MainPipeReq))

  val tagRead = DecoupledIO(new TagReadReq)
  val tagResp = Input(Vec(nways, UInt(tagBits.W)))
  val metaRead = DecoupledIO(new MetaReadReq)
  val metaResp = Input(Vec(nways, new MetaData))
  val dataRead = DecoupledIO(new DataLineReadReq)
  val dataResp = Flipped(Valid(new DataLineReadResp))
  val tagWrite = DecoupledIO(new TagWriteReq)
  val metaWrite = DecoupledIO(new MetaWriteReq)
  val dataWrite = DecoupledIO(new DataWriteReq)

  val missReq = DecoupledIO(new MissReq)
  val missResp = Input(new MissResp)
  val refillInfo = Flipped(Valid(new MainPipeRefillInfo))
  // s3Done、installed、suggestValid 只在 s3 完成的那一拍为高，MissQueue 要当拍采样。
  val mainpipeInfo = Output(new MainPipeMsInfo)
  // s3 写 Meta 前按这个 MSHR 问。父模块同拍回答 pendingInvalidate。
  val pendingSnoop = Output(Valid(UInt(log2Up(nMissEntries).W)))
  val pendingInvalidate = Input(Bool())
  val occupySet = Output(Valid(UInt(idxBits.W)))
  val occupyWay = Input(UInt(nways.W))
  val occupyFail = Input(Bool())
  val wbQuery = Output(Valid(UInt(PAddrBits.W)))
  val wbBlock = Input(Bool())

  val wbReq = DecoupledIO(new MainPipeWbReq)
  val probeResp = DecoupledIO(new MainPipeProbeResp)
  val atomicResp = DecoupledIO(new MainPipeAtomicResp)
  // occupyFail 时让 AtomicsUnit 以后重发。miss 已经被收下时不要走这条，等 refill 的 atomicResp。
  val atomicReplay = DecoupledIO(new DCacheLineResp)
  val storeHit = DecoupledIO(new DCacheLineResp)
  val storeReplay = DecoupledIO(new DCacheLineResp)

  val lrsc_blocked_block = Output(Valid(UInt(PAddrBits.W)))
  val update_resv_set = Output(Bool())
  val invalid_resv_set = Input(Bool())
  val block_lr = Output(Bool())

  // LoadPipe 命中时也来改这份 PLRU。端口 0 是 LoadPipe，MainPipe 自己的更新优先。
  val replaceAccess = Flipped(Valid(new ReplacementAccessBundle))
}

// 4 路树形 PLRU。bit0=1 表示左边两路刚被用过，victim 从右边挑。
class DCachePLRU(implicit p: DCacheParameters) extends DCacheModule {
  require(nways == 4)

  val io = IO(new Bundle {
    val access = Vec(2, Flipped(Valid(new ReplacementAccessBundle)))
    val querySet = Input(UInt(idxBits.W))
    val victim = Output(UInt(log2Up(nways).W))
  })

  val state = RegInit(VecInit(Seq.fill(nsets)(0.U(3.W))))

  def touch(old: UInt, way: UInt): UInt = {
    val left = !way(1)
    val lowRecent = !way(0)
    val bit0 = Mux(left, 1.U(1.W), 0.U(1.W))
    val bit1 = Mux(left, lowRecent, old(1))
    val bit2 = Mux(left, old(2), lowRecent)
    Cat(bit2, bit1, bit0)
  }

  val here = state(io.querySet)
  io.victim := Mux(!here(0), Mux(here(1), 1.U, 0.U), Mux(here(2), 3.U, 2.U))

  val a0 = io.access(0)
  val a1 = io.access(1)
  val next0 = touch(state(a0.bits.set), a0.bits.way)
  val base1 = Mux(a0.valid && a0.bits.set === a1.bits.set, next0, state(a1.bits.set))
  when(a0.valid && !(a1.valid && a0.bits.set === a1.bits.set)) {
    state(a0.bits.set) := next0
  }
  when(a1.valid) {
    state(a1.bits.set) := touch(base1, a1.bits.way)
  }
}

class MainPipe(implicit p: DCacheParameters) extends DCacheModule with MemoryOpConstants {
  val io = IO(new MainPipeIO)

  val plru = Module(new DCachePLRU)
  val alu = Seq.fill(2)(Module(new AMOALU(DCacheWordBits)))

  def lineAddr(paddr: UInt): UInt =
    Cat(paddr(PAddrBits - 1, blockOffBits), 0.U(blockOffBits.W))

  def idxAddr(paddr: UInt, set: UInt): UInt =
    Cat(paddr(PAddrBits - 1, 14), set(idxBits - 1, 0), paddr(5, 0))

  def hasWrite(coh: UInt): Bool =
    coh === MetaState.UC || coh === MetaState.UD

  def bankSlice(mask: UInt, bank: Int): UInt =
    mask(DCacheWordBytes * bank + DCacheWordBytes - 1, DCacheWordBytes * bank)

  def partialBanks(mask: UInt): UInt =
    VecInit((0 until DCacheBanks).map { b =>
      val slice = bankSlice(mask, b)
      slice.orR && !slice.andR
    }).asUInt

  def touchBanks(mask: UInt): UInt =
    VecInit((0 until DCacheBanks).map(b => bankSlice(mask, b).orR)).asUInt

  def mergeWord(old: UInt, neu: UInt, mask: UInt): UInt = {
    val bytes = (0 until DCacheWordBytes).map { i =>
      Mux(mask(i), neu(8 * i + 7, 8 * i), old(8 * i + 7, 8 * i))
    }
    Cat(bytes.reverse)
  }

  def lineToWords(line: UInt): Vec[UInt] =
    VecInit((0 until DCacheBanks).map(b => line(DCacheWordBits * b + DCacheWordBits - 1, DCacheWordBits * b)))

  def wordsToLine(words: Vec[UInt]): UInt =
    Cat(words.reverse)

  def mergeLine(base: UInt, store: UInt, mask: UInt): UInt = {
    val bytes = (0 until blockBytes).map { i =>
      Mux(mask(i), store(8 * i + 7, 8 * i), base(8 * i + 7, 8 * i))
    }
    Cat(bytes.reverse)
  }

  val s1_valid = RegInit(false.B)
  val s2_valid = RegInit(false.B)
  val s3_valid = RegInit(false.B)
  val s1_hold = Reg(new MainPipeHold)
  val s2_hold = Reg(new MainPipeHold)
  val s3_hold = Reg(new MainPipeHold)

  val s1_ready = Wire(Bool())
  val s2_ready = Wire(Bool())
  val s3_ready = Wire(Bool())
  val s1_fire = Wire(Bool())
  val s2_fire = Wire(Bool())
  val s3_done = Wire(Bool())

  def setBlocked(set: UInt): Bool =
    (s1_valid && s1_hold.set === set) ||
      (s2_valid && s2_hold.set === set) ||
      (s3_valid && s3_hold.set === set)

  val probeSet = dcacheSet(io.probe.bits.tagAlias, io.probe.bits.addr)
  val refillSet = get_idx(io.refill.bits.vaddr)
  val storeSet = get_idx(io.store.bits.vaddr)
  val atomicSet = get_idx(io.atomic.bits.vaddr)
  val portFree = io.tagRead.ready && io.metaRead.ready && s1_ready

  val probeCan = !setBlocked(probeSet) && portFree
  val refillCan = !setBlocked(refillSet) && portFree
  val storeCan = !setBlocked(storeSet) && portFree
  val atomicCan = !setBlocked(atomicSet) && portFree

  io.probe.ready := probeCan
  io.refill.ready := refillCan && !(io.probe.valid && probeCan)
  io.store.ready := storeCan && !(io.probe.valid && probeCan) && !(io.refill.valid && refillCan)
  io.atomic.ready := atomicCan && !(io.probe.valid && probeCan) &&
    !(io.refill.valid && refillCan) && !(io.store.valid && storeCan)

  val s0_fire = io.probe.fire || io.refill.fire || io.store.fire || io.atomic.fire
  val s0_set = Mux(io.probe.fire, probeSet,
    Mux(io.refill.fire, refillSet, Mux(io.store.fire, storeSet, atomicSet)))

  io.tagRead.valid := s0_fire
  io.tagRead.bits.idx := s0_set
  io.tagRead.bits.way_en := Fill(nways, 1.U)
  io.metaRead.valid := s0_fire
  io.metaRead.bits.idx := s0_set
  io.metaRead.bits.way_en := Fill(nways, 1.U)

  def fillCommon(hold: MainPipeHold, req: MainPipeReq, set: UInt, src: UInt): Unit = {
    hold.src := src
    hold.cmd := req.cmd
    hold.vaddr := req.vaddr
    hold.addr := req.addr
    hold.set := set
    hold.id := req.id
    hold.missId := req.missId
    hold.pc := req.pc
    hold.storeData := 0.U
    hold.storeMask := 0.U
    hold.wordIdx := req.wordIdx
    hold.amoData := req.amoData
    hold.amoMask := req.amoMask
    hold.amoCmp := req.amoCmp
    hold.probeOp := req.probeOp
    hold.needData := req.needData
    hold.replaceWay := req.replaceWay
  }

  when(io.probe.fire) {
    fillCommon(s1_hold, io.probe.bits, probeSet, MainPipeSrc.PROBE)
  }.elsewhen(io.refill.fire) {
    fillCommon(s1_hold, io.refill.bits, refillSet, MainPipeSrc.REFILL)
  }.elsewhen(io.store.fire) {
    s1_hold.src := MainPipeSrc.STORE
    s1_hold.cmd := io.store.bits.cmd
    s1_hold.vaddr := io.store.bits.vaddr
    s1_hold.addr := io.store.bits.addr
    s1_hold.set := storeSet
    s1_hold.id := io.store.bits.id
    s1_hold.missId := 0.U
    s1_hold.pc := 0.U
    s1_hold.storeData := io.store.bits.data
    s1_hold.storeMask := io.store.bits.mask
    s1_hold.wordIdx := 0.U
    s1_hold.amoData := 0.U
    s1_hold.amoMask := 0.U
    s1_hold.amoCmp := 0.U
    s1_hold.probeOp := 0.U
    s1_hold.needData := false.B
    s1_hold.replaceWay := 0.U
  }.elsewhen(io.atomic.fire) {
    fillCommon(s1_hold, io.atomic.bits, atomicSet, MainPipeSrc.ATOMIC)
  }

  // s1：tag / meta 在 s0 fire 的下一拍才有效。停住以后用锁存，不再读口。
  val s1_first = RegNext(s0_fire, false.B)
  val s1_tag = Reg(Vec(nways, UInt(tagBits.W)))
  val s1_meta = Reg(Vec(nways, new MetaData))
  when(s1_first) {
    s1_tag := io.tagResp
    s1_meta := io.metaResp
  }
  val tagNow = Mux(s1_first, io.tagResp, s1_tag)
  val metaNow = Mux(s1_first, io.metaResp, s1_meta)

  val hitOh = VecInit((0 until nways).map { w =>
    tagNow(w) === get_tag(s1_hold.addr) && metaNow(w).isValid
  }).asUInt
  val s1_hit = hitOh.orR
  val hitWay = OHToUInt(hitOh)
  val hitMeta = Mux1H(Mux(s1_hit, hitOh, 1.U(nways.W)), metaNow)
  val hitCoh = hitMeta.coh
  val hitWrite = s1_hit && hasWrite(hitCoh)

  val isStore1 = s1_valid && s1_hold.src === MainPipeSrc.STORE
  val isAtomic1 = s1_valid && s1_hold.src === MainPipeSrc.ATOMIC
  val isProbe1 = s1_valid && s1_hold.src === MainPipeSrc.PROBE
  val isRefill1 = s1_valid && s1_hold.src === MainPipeSrc.REFILL
  val isLr1 = isAtomic1 && s1_hold.cmd === M_XLR
  val isSc1 = isAtomic1 && s1_hold.cmd === M_XSC
  val isCas1 = isAtomic1 && isAMOCAS(s1_hold.cmd)
  val isAlu1 = isAtomic1 && (isAMOLogical(s1_hold.cmd) || isAMOArithmetic(s1_hold.cmd))
  val fullStore1 = isStore1 && s1_hold.storeMask.andR

  val invalidOh = VecInit((0 until nways).map(w => !metaNow(w).isValid)).asUInt
  val hasInvalid = invalidOh.orR
  val smallestInvalid = PriorityEncoder(invalidOh)
  val specValid = s1_hold.replaceWay.orR
  val specWay = OHToUInt(Mux(specValid, s1_hold.replaceWay, 1.U(nways.W)))
  val specOk = isRefill1 && !s1_hit && specValid && !metaNow(specWay).isValid
  val useInvalid = isRefill1 && !s1_hit && !specValid && hasInvalid
  plru.io.querySet := s1_hold.set
  val plruWay = plru.io.victim
  val canInstall1 = !isRefill1 || s1_hit || specOk || useInvalid
  val chosenWay1 = Mux(s1_hit, hitWay,
    Mux(specOk, specWay, Mux(useInvalid, smallestInvalid, plruWay)))
  // 指定了路但它还不是 I：不安装，也不另给一个 PLRU 建议。
  val suggest1 = isRefill1 && !canInstall1 && !specValid

  val probeNeed1 = isProbe1 && s1_hit && Mux(
    s1_hold.probeOp === MainPipeProbe.TO_INVALID,
    hitCoh === MetaState.UD || s1_hold.needData,
    hitCoh === MetaState.UD)
  val storeNeed1 = isStore1 && hitWrite && !fullStore1 && partialBanks(s1_hold.storeMask).orR
  val atomicNeed1 = hitWrite && (isLr1 || isSc1 || isCas1 || isAlu1)
  val twoBanks1 = isAMOCASQ(s1_hold.cmd) || s1_hold.amoMask(QuadWordBytes - 1, DCacheWordBytes).orR
  val atomicBanks1 = UIntToOH(s1_hold.wordIdx, DCacheBanks) |
    Mux(twoBanks1, UIntToOH(s1_hold.wordIdx +% 1.U, DCacheBanks), 0.U(DCacheBanks.W))
  val s1_need_data = storeNeed1 || probeNeed1 || atomicNeed1
  val s1_bank_mask = Mux(isStore1, partialBanks(s1_hold.storeMask),
    Mux(isProbe1, Fill(DCacheBanks, 1.U), atomicBanks1))

  io.dataRead.valid := s1_valid && s1_need_data && s2_ready
  io.dataRead.bits.addr := idxAddr(s1_hold.addr, s1_hold.set)
  io.dataRead.bits.bankMask := s1_bank_mask
  val s1_data_ok = !s1_need_data || io.dataRead.ready
  s1_fire := s1_valid && s2_ready && s1_data_ok
  s1_ready := !s1_valid || s1_fire

  val s2_hit = Reg(Bool())
  val s2_way = Reg(UInt(log2Up(nways).W))
  val s2_coh = Reg(UInt(2.W))
  val s2_need_data = Reg(Bool())
  val s2_can_install = Reg(Bool())
  val s2_suggest = Reg(Bool())
  val s2_suggest_way = Reg(UInt(log2Up(nways).W))
  val s2_got = RegInit(false.B)
  val s2_line = Reg(Vec(DCacheBanks, Vec(nways, UInt(DCacheWordBits.W))))

  when(s1_fire) {
    s2_hold := s1_hold
    s2_hit := s1_hit
    s2_way := chosenWay1
    s2_coh := Mux(s1_hit, hitCoh, MetaState.I)
    s2_need_data := s1_need_data
    s2_can_install := canInstall1
    s2_suggest := suggest1
    s2_suggest_way := plruWay
    s2_got := false.B
  }.elsewhen(io.dataResp.valid && s2_valid && s2_need_data && !s2_fire) {
    s2_line := io.dataResp.bits.data
    s2_got := true.B
  }

  val dataNow = Mux(io.dataResp.valid, io.dataResp.bits.data, s2_line)

  val s2_store = s2_valid && s2_hold.src === MainPipeSrc.STORE
  val s2_atomic = s2_valid && s2_hold.src === MainPipeSrc.ATOMIC
  val s2_refill = s2_valid && s2_hold.src === MainPipeSrc.REFILL
  val s2_sc = s2_atomic && s2_hold.cmd === M_XSC
  val s2_write_hit = s2_hit && hasWrite(s2_coh)
  val s2_upgrade = (s2_store && s2_hit && s2_coh === MetaState.SC) ||
    (s2_atomic && !s2_sc && s2_hit && !s2_write_hit)
  val s2_need_miss = (s2_store && !s2_write_hit) || (s2_atomic && !s2_sc && !s2_write_hit)

  io.occupySet.valid := s2_upgrade
  io.occupySet.bits := s2_hold.set
  // occupyWay 目前只留给“覆盖有效 victim”。这一版 refill 不覆盖有效行，所以不拿它挑路。
  dontTouch(io.occupyWay)
  val upgradeFail = s2_upgrade && io.occupyFail

  io.wbQuery.valid := s2_need_miss
  io.wbQuery.bits := lineAddr(s2_hold.addr)
  val wbBlocked = s2_need_miss && io.wbBlock
  val sendMiss = s2_need_miss && !upgradeFail && !wbBlocked

  io.missReq.valid := sendMiss
  io.missReq.bits.source := Mux(s2_store, STORE_SOURCE.U, AMO_SOURCE.U)
  io.missReq.bits.cmd := s2_hold.cmd
  io.missReq.bits.addr := lineAddr(s2_hold.addr)
  io.missReq.bits.vaddr := s2_hold.vaddr
  io.missReq.bits.pc := s2_hold.pc
  io.missReq.bits.lqIdx := 0.U.asTypeOf(new LqPtr)
  io.missReq.bits.full_overwrite := s2_hold.storeMask.andR
  io.missReq.bits.word_idx := s2_hold.wordIdx
  io.missReq.bits.amo_data := s2_hold.amoData
  io.missReq.bits.amo_mask := s2_hold.amoMask
  io.missReq.bits.amo_cmp := s2_hold.amoCmp
  io.missReq.bits.req_coh.coh := Mux(s2_hit, s2_coh, MetaState.I)
  io.missReq.bits.id := s2_hold.id
  io.missReq.bits.isBtoT := s2_upgrade
  io.missReq.bits.occupy_way := Mux(s2_upgrade, UIntToOH(s2_way), 0.U)
  io.missReq.bits.cancel := false.B
  io.missReq.bits.store_data := s2_hold.storeData
  io.missReq.bits.store_mask := s2_hold.storeMask

  val missAccepted = io.missReq.fire && io.missResp.handled
  // Store 没进 MissQueue 就回 replay，并且要等 Sbuffer 接住才离开 s2。
  val storeNeedReplay = s2_store && s2_need_miss && !missAccepted
  // 停在 s2 会挡住同 set。权限升级被 occupyFail 拒绝时必须离开，否则那 3 路 refill 进不来。
  val atomicNeedReplay = s2_atomic && upgradeFail
  io.storeReplay.valid := storeNeedReplay
  io.storeReplay.bits.miss := false.B
  io.storeReplay.bits.replay := true.B
  io.storeReplay.bits.id := s2_hold.id
  io.atomicReplay.valid := atomicNeedReplay
  io.atomicReplay.bits.miss := false.B
  io.atomicReplay.bits.replay := true.B
  io.atomicReplay.bits.id := s2_hold.id
  val storeLeave = s2_store && s2_need_miss && (missAccepted || io.storeReplay.fire)
  val atomicLeave = s2_atomic && s2_need_miss && (missAccepted || io.atomicReplay.fire)
  val missLeave = storeLeave || atomicLeave

  val dataOk2 = !s2_need_data || s2_got || io.dataResp.valid
  val refillReady2 = !s2_refill || io.refillInfo.valid
  val wantS3 = s2_valid && !s2_need_miss && dataOk2 && refillReady2
  s2_fire := wantS3 && s3_ready
  val s2_done = s2_fire || missLeave
  s2_ready := !s2_valid || s2_done

  io.mainpipeInfo.s2Wait := s2_refill && !io.refillInfo.valid
  io.mainpipeInfo.s2MissId := s2_hold.missId

  val s3_hit = Reg(Bool())
  val s3_way = Reg(UInt(log2Up(nways).W))
  val s3_coh = Reg(UInt(2.W))
  val s3_can_install = Reg(Bool())
  val s3_suggest = Reg(Bool())
  val s3_suggest_way = Reg(UInt(log2Up(nways).W))
  val s3_word = Reg(Vec(DCacheBanks, UInt(DCacheWordBits.W)))
  val s3_refill = Reg(new MainPipeRefillInfo)
  val sent = RegInit(VecInit(Seq.fill(7)(false.B)))

  when(s2_fire) {
    s3_hold := s2_hold
    s3_hit := s2_hit
    s3_way := s2_way
    s3_coh := s2_coh
    s3_can_install := s2_can_install
    s3_suggest := s2_suggest
    s3_suggest_way := s2_suggest_way
    for (b <- 0 until DCacheBanks) {
      s3_word(b) := dataNow(b)(s2_way)
    }
    when(s2_hold.src === MainPipeSrc.REFILL) {
      s3_refill := io.refillInfo.bits
    }
    sent.foreach(_ := false.B)
  }.otherwise {
    when(io.tagWrite.fire) { sent(0) := true.B }
    when(io.metaWrite.fire) { sent(1) := true.B }
    when(io.dataWrite.fire) { sent(2) := true.B }
    when(io.wbReq.fire) { sent(3) := true.B }
    when(io.probeResp.fire) { sent(4) := true.B }
    when(io.atomicResp.fire) { sent(5) := true.B }
    when(io.storeHit.fire) { sent(6) := true.B }
  }

  val s3_store = s3_valid && s3_hold.src === MainPipeSrc.STORE
  val s3_atomic = s3_valid && s3_hold.src === MainPipeSrc.ATOMIC
  val s3_probe = s3_valid && s3_hold.src === MainPipeSrc.PROBE
  val s3_refill_req = s3_valid && s3_hold.src === MainPipeSrc.REFILL
  val s3_lr = s3_atomic && s3_hold.cmd === M_XLR
  val s3_sc = s3_atomic && s3_hold.cmd === M_XSC
  val s3_cas = s3_atomic && isAMOCAS(s3_hold.cmd)
  val s3_alu = s3_atomic && (isAMOLogical(s3_hold.cmd) || isAMOArithmetic(s3_hold.cmd))
  val s3_write_hit = s3_hit && hasWrite(s3_coh)

  val lrsc_addr = Reg(UInt(PAddrBits.W))
  val lrsc_count = RegInit(0.U(6.W))
  val lineMatch = lineAddr(s3_hold.addr) === lrsc_addr
  val scOk = s3_sc && s3_write_hit && lineMatch && lrsc_count > 8.U

  val bank0 = s3_hold.wordIdx
  val bank1 = s3_hold.wordIdx +% 1.U
  // 命中原子用 array 的旧字。refill 上的原子用即将装入的新行，不读 array。
  val old0 = Wire(UInt(DCacheWordBits.W))
  val old1 = Wire(UInt(DCacheWordBits.W))
  val twoBanks3 = isAMOCASQ(s3_hold.cmd) || s3_hold.amoMask(QuadWordBytes - 1, DCacheWordBytes).orR
  for (i <- 0 until 2) {
    alu(i).io.cmd := s3_hold.cmd
  }
  alu(0).io.lhs := old0
  alu(0).io.rhs := s3_hold.amoData(DCacheWordBits - 1, 0)
  alu(0).io.mask := s3_hold.amoMask(DCacheWordBytes - 1, 0)
  alu(1).io.lhs := old1
  alu(1).io.rhs := s3_hold.amoData(QuadWordBits - 1, DCacheWordBits)
  alu(1).io.mask := s3_hold.amoMask(QuadWordBytes - 1, DCacheWordBytes)

  val old128 = Cat(old1, old0)
  val casMismatch = ((old128 ^ s3_hold.amoCmp) & FillInterleaved(8, s3_hold.amoMask)).orR

  val probeNew = MuxLookup(s3_hold.probeOp, s3_coh)(Seq(
    MainPipeProbe.TO_INVALID -> MetaState.I,
    MainPipeProbe.TO_SHARED -> MetaState.SC,
    MainPipeProbe.CLEAN -> Mux(s3_coh === MetaState.UD, MetaState.UC, s3_coh)
  ))
  val probeWriteMeta = s3_probe && s3_hit && probeNew =/= s3_coh
  val probeNeedWb = s3_probe && s3_hit && Mux(
    s3_hold.probeOp === MainPipeProbe.TO_INVALID,
    s3_coh === MetaState.UD || s3_hold.needData,
    s3_coh === MetaState.UD)

  io.pendingSnoop.valid := s3_refill_req
  io.pendingSnoop.bits := s3_hold.missId
  val pendInv = s3_refill_req && io.pendingInvalidate
  val rawRefillCoh = Mux(!s3_refill.retUnique, MetaState.SC,
    Mux(s3_refill.passDirty, MetaState.UD, MetaState.UC))
  val refillCoh = Mux(pendInv, MetaState.I, rawRefillCoh)
  val refillLine = mergeLine(s3_refill.data, s3_refill.storeData, s3_refill.storeMask)
  val refillWords = lineToWords(refillLine)
  old0 := Mux(s3_refill_req, refillWords(bank0), s3_word(bank0))
  old1 := Mux(s3_refill_req, refillWords(bank1), s3_word(bank1))
  val cmdIsLr = s3_hold.cmd === M_XLR
  val cmdIsCas = isAMOCAS(s3_hold.cmd)
  val cmdIsAlu = isAMOLogical(s3_hold.cmd) || isAMOArithmetic(s3_hold.cmd)
  // 共享行没有写权限。store 合并出现在共享 refill 上时不安装，把合并后的数据写回去。
  val sharedStore = s3_refill_req && s3_refill.storeMask.orR && !s3_refill.retUnique
  val doInstall = s3_refill_req && s3_can_install && !pendInv && !sharedStore
  // miss 被收下之后，AtomicsUnit 不再重发。refill 带着原来的 cmd，在这一拍做完。
  val refillOp = doInstall && s3_refill.retUnique && (cmdIsLr || cmdIsCas || cmdIsAlu)
  val casFail = (s3_cas || (refillOp && cmdIsCas)) && casMismatch
  val refillMutate = refillOp && (cmdIsAlu || (cmdIsCas && !casFail))
  val refillStore = doInstall && s3_refill.storeMask.orR
  val installCoh = Mux(refillMutate || refillStore, MetaState.UD, refillCoh)
  val dirtyRefill = s3_refill.passDirty || s3_refill.storeMask.orR
  // 共享且带脏：先交给 WritebackQueue，本地仍可装成 SC。不能在 L1 留下 SD。
  val sharedDirty = s3_refill_req && !s3_refill.retUnique && dirtyRefill
  val refillWb = sharedDirty || ((pendInv || sharedStore) && dirtyRefill)

  val storeBanks = Mux(s3_hold.storeMask.andR, Fill(DCacheBanks, 1.U), touchBanks(s3_hold.storeMask))
  val storeWords = Wire(Vec(DCacheBanks, UInt(DCacheWordBits.W)))
  for (b <- 0 until DCacheBanks) {
    val neu = s3_hold.storeData(DCacheWordBits * b + DCacheWordBits - 1, DCacheWordBits * b)
    val fullBank = bankSlice(s3_hold.storeMask, b).andR
    storeWords(b) := Mux(fullBank, neu, mergeWord(s3_word(b), neu, bankSlice(s3_hold.storeMask, b)))
  }
  val doStoreData = s3_store && storeBanks.orR
  val doStoreMeta = s3_store && doStoreData && s3_coh =/= MetaState.UD

  val atomicLow = mergeWord(old0, s3_hold.amoData(DCacheWordBits - 1, 0),
    s3_hold.amoMask(DCacheWordBytes - 1, 0))
  val atomicHigh = mergeWord(old1, s3_hold.amoData(QuadWordBits - 1, DCacheWordBits),
    s3_hold.amoMask(QuadWordBytes - 1, DCacheWordBytes))
  val hitAtomicWrite = s3_alu || ((s3_cas && !casFail) || scOk)
  val atomicWords = VecInit((0 until DCacheBanks).map { b =>
    val is0 = b.U === bank0
    val is1 = b.U === bank1
    val touched = is0 || (is1 && twoBanks3)
    val base = Mux(s3_refill_req, refillWords(b), s3_word(b))
    val useAlu = touched && (s3_alu || (refillMutate && cmdIsAlu))
    val useMerge = touched && !useAlu &&
      (scOk || ((s3_cas || (refillMutate && cmdIsCas)) && !casFail))
    Mux(useAlu, Mux(is0, alu(0).io.out, alu(1).io.out),
      Mux(useMerge, Mux(is0, atomicLow, atomicHigh), base))
  })
  val atomicBanks = Mux(hitAtomicWrite,
    UIntToOH(bank0, DCacheBanks) | Mux(twoBanks3, UIntToOH(bank1, DCacheBanks), 0.U(DCacheBanks.W)),
    0.U(DCacheBanks.W))
  val doAtomicData = s3_atomic && atomicBanks.orR
  val doAtomicMeta = doAtomicData && s3_coh =/= MetaState.UD

  val doTag = doInstall
  val doMeta = probeWriteMeta || doStoreMeta || doAtomicMeta || doInstall
  val doData = doStoreData || doAtomicData || doInstall
  val doWb = probeNeedWb || refillWb
  val doProbeResp = s3_probe
  val doAtomicResp = s3_atomic || refillOp

  val writeWords = Mux(s3_refill_req, Mux(refillMutate, atomicWords, refillWords),
    Mux(s3_store, storeWords, atomicWords))
  val writeBanks = Mux(s3_refill_req, Fill(DCacheBanks, doInstall),
    Mux(s3_store, storeBanks, atomicBanks))
  val newCoh = Mux(s3_probe, probeNew,
    Mux(s3_refill_req, installCoh, MetaState.UD))

  // wbReq 没握上手之前，不改 array，也不先把 probe 响应发出去。
  io.wbReq.valid := s3_valid && doWb && !sent(3)
  val wbClear = !doWb || sent(3) || io.wbReq.fire
  def armed(need: Bool, idx: Int): Bool = s3_valid && need && !sent(idx) && wbClear
  io.tagWrite.valid := armed(doTag, 0)
  io.tagWrite.bits.idx := s3_hold.set
  io.tagWrite.bits.way_en := UIntToOH(s3_way)
  // Tag SRAM 不保存 vaddr。端口还留着 WPU 的 34 bit，这里只送低位。
  io.tagWrite.bits.vaddr := s3_hold.vaddr(p.vtagBits - 1, 0)
  io.tagWrite.bits.tag := get_tag(s3_hold.addr)

  io.metaWrite.valid := armed(doMeta, 1)
  io.metaWrite.bits.idx := s3_hold.set
  io.metaWrite.bits.way_en := UIntToOH(s3_way)
  io.metaWrite.bits.meta.coh := newCoh

  io.dataWrite.valid := armed(doData, 2)
  io.dataWrite.bits.addr := idxAddr(s3_hold.addr, s3_hold.set)
  io.dataWrite.bits.wayEn := UIntToOH(s3_way)
  io.dataWrite.bits.bankMask := writeBanks
  io.dataWrite.bits.data := writeWords

  io.wbReq.bits.addr := lineAddr(s3_hold.addr)
  io.wbReq.bits.data := Mux(s3_refill_req, refillLine, wordsToLine(s3_word))
  io.wbReq.bits.passDirty := Mux(s3_probe, s3_coh === MetaState.UD, true.B)
  io.wbReq.bits.oldCoh := Mux(s3_refill_req, MetaState.UD, s3_coh)

  def channelDone(need: Bool, fire: Bool, idx: Int): Bool = !need || sent(idx) || fire
  // 数组和写回都接住之后才给响应。否则对端已经看到完成，数据却还没写进 array。
  val writesDone =
    channelDone(doTag, io.tagWrite.fire, 0) &&
      channelDone(doMeta, io.metaWrite.fire, 1) &&
      channelDone(doData, io.dataWrite.fire, 2) &&
      channelDone(doWb, io.wbReq.fire, 3)
  io.probeResp.valid := s3_valid && doProbeResp && !sent(4) && writesDone
  io.probeResp.bits.id := s3_hold.id
  io.probeResp.bits.hit := s3_hit
  io.probeResp.bits.coh := Mux(s3_hit, probeNew, MetaState.I)
  io.probeResp.bits.hasData := probeNeedWb
  io.probeResp.bits.passDirty := s3_hit && s3_coh === MetaState.UD

  io.atomicResp.valid := s3_valid && doAtomicResp && !sent(5) && writesDone
  io.atomicResp.bits.id := s3_hold.id
  io.atomicResp.bits.cmd := s3_hold.cmd
  io.atomicResp.bits.data := Cat(Mux(twoBanks3, old1, 0.U), old0)
  io.atomicResp.bits.success := Mux(s3_hold.cmd === M_XSC, scOk, Mux(cmdIsCas, !casFail, true.B))

  io.storeHit.valid := s3_valid && s3_store && !sent(6) && writesDone
  io.storeHit.bits.miss := false.B
  io.storeHit.bits.replay := false.B
  io.storeHit.bits.id := s3_hold.id

  s3_done := s3_valid &&
    channelDone(doTag, io.tagWrite.fire, 0) &&
    channelDone(doMeta, io.metaWrite.fire, 1) &&
    channelDone(doData, io.dataWrite.fire, 2) &&
    channelDone(doWb, io.wbReq.fire, 3) &&
    channelDone(doProbeResp, io.probeResp.fire, 4) &&
    channelDone(doAtomicResp, io.atomicResp.fire, 5) &&
    channelDone(s3_store, io.storeHit.fire, 6)
  s3_ready := !s3_valid || s3_done

  io.mainpipeInfo.s3Done := s3_done && s3_refill_req
  io.mainpipeInfo.s3MissId := s3_hold.missId
  io.mainpipeInfo.installed := s3_done && doInstall
  io.mainpipeInfo.finalCoh := Mux(doInstall, installCoh, refillCoh)
  io.mainpipeInfo.suggestValid := s3_done && s3_suggest
  io.mainpipeInfo.suggestWay := s3_suggest_way

  val probeClears = s3_done && s3_probe && lineMatch && lrsc_count =/= 0.U
  val scClears = s3_done && s3_sc
  val lrSets = s3_done && cmdIsLr && (s3_lr || refillOp)
  val clearing = scClears || probeClears || (io.invalid_resv_set && !lrSets)

  when(scClears || probeClears || (io.invalid_resv_set && !lrSets)) {
    lrsc_count := 0.U
  }.elsewhen(lrSets) {
    lrsc_count := 63.U
    lrsc_addr := lineAddr(s3_hold.addr)
  }.elsewhen(lrsc_count =/= 0.U) {
    lrsc_count := lrsc_count - 1.U
  }

  io.lrsc_blocked_block.valid := lrsc_count > 8.U && !clearing
  io.lrsc_blocked_block.bits := lrsc_addr
  io.update_resv_set := lrSets
  io.block_lr := (lrsc_count =/= 0.U && !clearing) || lrSets

  plru.io.access(0).valid := io.replaceAccess.valid
  plru.io.access(0).bits := io.replaceAccess.bits
  val plruTouch = s3_done && (doStoreData || doAtomicData || doInstall)
  plru.io.access(1).valid := plruTouch
  plru.io.access(1).bits.set := s3_hold.set
  plru.io.access(1).bits.way := s3_way

  when(s0_fire) { s1_valid := true.B }
    .elsewhen(s1_fire) { s1_valid := false.B }
  when(s1_fire) { s2_valid := true.B }
    .elsewhen(s2_done) { s2_valid := false.B }
  when(s2_fire) { s3_valid := true.B }
    .elsewhen(s3_done) { s3_valid := false.B }

  assert(PopCount(Seq(io.probe.fire, io.refill.fire, io.store.fire, io.atomic.fire)) <= 1.U,
    "mainpipe accepts one request per cycle")
  assert(!s1_valid || !s1_first || PopCount(hitOh) <= 1.U,
    "tag should match at most one way")
  assert(!s1_valid || !twoBanks1 || s1_hold.wordIdx =/= (DCacheBanks - 1).U,
    "atomic pair must not cross a cache line")
  assert(!s1_valid || !isAMOCASQ(s1_hold.cmd) || !s1_hold.wordIdx(0),
    "AMOCAS.Q wordIdx must be even")
  assert(!s2_valid || !s2_need_data || s2_got || io.dataResp.valid,
    "data read must return on the first s2 cycle")
  assert(!io.tagWrite.valid || PopCount(io.tagWrite.bits.way_en) === 1.U,
    "tag write selects one way")
  assert(!s3_valid || !s3_refill_req || s3_can_install || !doInstall,
    "refill must not install without a legal way")
  assert(!s3_valid || !sharedStore, "store data cannot be merged into a shared refill")
  assert(!io.atomicReplay.valid || !io.missReq.valid,
    "atomic replay is only used when the miss is not sent")
  assert(!(io.storeHit.valid && io.storeReplay.valid &&
    io.storeHit.bits.id === io.storeReplay.bits.id),
    "one store cannot hit and replay together")
}
