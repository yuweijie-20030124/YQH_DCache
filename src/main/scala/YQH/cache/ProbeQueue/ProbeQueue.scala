// ProbeQueue 只把 RXSNP 交给 MainPipe。不改 Tag、Meta、Data，也不发 SnpResp。
// 不接顶层。16 项，编号小的优先。项号放进 MainPipeReq.id，不是 CHI 的 txnId。
//
// SNP 没有 needData，送给 MainPipe 时恒为 0。opcode 原样放进 probeOp。
// 地址线上是 paddr[47:3]。这里补回低 3 位后再按 64B 对齐，低 6 位为 0。
// ns、srcID、tgtID、traceTag 第一版不往下传。WriteBackQueue 的 SnpResp 用固定节点号。
//
// 项在 MainPipe s0 收下的这一拍标记释放，下一拍才能再分配。不等 s3，也不等 TXDAT。
// probeResp 只接住，ready 恒为 1，避免 MainPipe 的 s3 没人握手。不能用它的 id 释放项，
// 因为项号在 s3 之前就已经可以重用。
//
// 同地址 reservation 有效时不送出。已经锁存的同地址请求拉回待发送，空出口让给别的地址。
// MSHR 已经收齐数据且还没释放时，同地址同 alias 的 Snoop 也留在这里。
// SnpMakeInvalid 不留，它要马上进 MainPipe，把还没安装的数据丢掉。
// updateResvSet 当拍和下一拍都不发。当拍地址还没进寄存器，同物理行、
// 不同 set 的 Snoop 不会被 MainPipe 的 set 冲突挡住。下一拍再按地址比较。
package YQH.cache

import chisel3._
import chisel3.util._
import anserl2.compactchi._

object ProbeState {
  val idle     = 0.U(2.W)
  val waitSend = 1.U(2.W)
  val held     = 2.U(2.W)
}

class ProbeEntry(implicit p: DCacheParameters) extends DCacheBundle {
  val state = UInt(2.W)
  val addr = UInt(PAddrBits.W)
  val tagAlias = UInt(chi.tagAliasBits.W)
  val opcode = UInt(chi.snpOpcodeBits.W)
  val snpTxnId = UInt(chi.txnIdBits.W)
}

class ProbeWfi(implicit p: DCacheParameters) extends DCacheBundle {
  val req = Input(Bool())
  // 只表示 16 项和出口锁存都空。MainPipe s1–s3 里的 Snoop 由顶层再看。
  val safe = Output(Bool())
}

class ProbeQueueIO(implicit p: DCacheParameters) extends DCacheBundle {
  val rxSnp = Flipped(DecoupledIO(new CompactChiSnpFlit(chi)))
  val pipeReq = DecoupledIO(new MainPipeReq)
  // s3 完成时的回应。项已经在 s0 释放，这里只握手，不改队列。
  val probeResp = Flipped(DecoupledIO(new MainPipeProbeResp))
  // MainPipe 的 lrsc_blocked_block。计数器大于 8 时 valid，地址按行对齐。
  val lrscLockedBlock = Input(Valid(UInt(PAddrBits.W)))
  // MainPipe 的 update_resv_set。为 1 的当拍和下一拍，不向 MainPipe 发任何 Snoop。
  val updateResvSet = Input(Bool())
  // MissQueue：数据已经在项里。同地址同 alias 先不进 MainPipe。
  val missHold = Input(Vec(nMissEntries, Valid(new MissSnoopHold)))
  // 还在队列里的 SnpMakeInvalid。MissQueue 用它提前禁止安装。
  val dropLine = Output(Vec(nProbeEntries, Valid(new MissSnoopHold)))
  val wfi = new ProbeWfi
}

class ProbeQueue(implicit p: DCacheParameters) extends DCacheModule {
  require(nProbeEntries == 16)
  require(blockOffBits >= 3)
  require(chi.snpOpcodeBits == 2)
  require(chi.snoopAddrBits == PAddrBits - 3)

  val io = IO(new ProbeQueueIO)

  val entries = RegInit(VecInit(Seq.fill(nProbeEntries) {
    0.U.asTypeOf(new ProbeEntry)
  }))
  val outValid = RegInit(false.B)
  val outIdx = RegInit(0.U(log2Up(nProbeEntries).W))
  val outBits = RegInit(0.U.asTypeOf(new MainPipeReq))
  val pause = RegNext(io.updateResvSet, false.B)
  // 置位当拍加上打一拍。两拍都不向 MainPipe 发。
  val stop = io.updateResvSet || pause

  def lineAddr(addr: UInt): UInt =
    Cat(addr(PAddrBits - 1, blockOffBits), 0.U(blockOffBits.W))

  val locked = io.lrscLockedBlock.valid
  val lockedLine = lineAddr(io.lrscLockedBlock.bits)

  def sameLine(addr: UInt): Bool =
    locked && lineAddr(addr) === lockedLine

  def heldByMiss(addr: UInt, alias: UInt, opcode: UInt): Bool = {
    val drop = opcode === CompactChiOpcode.Snp.SnpMakeInvalid
    val hit = io.missHold.map { h =>
      h.valid && lineAddr(h.bits.addr) === lineAddr(addr) && h.bits.alias === alias
    }
    !drop && hit.reduce(_ || _)
  }

  val sameNow = outValid && sameLine(outBits.addr)
  val missNow = outValid && heldByMiss(outBits.addr, outBits.tagAlias, outBits.probeOp)
  // 已经锁存但现在不能发时拉回待发送，空出口让给别的地址。
  val pullBack = sameNow || missNow
  io.pipeReq.valid := outValid && !stop && !sameNow && !missNow
  io.pipeReq.bits := outBits
  val fire = io.pipeReq.fire

  val eligible = Wire(Vec(nProbeEntries, Bool()))
  for (i <- 0 until nProbeEntries) {
    eligible(i) := entries(i).state === ProbeState.waitSend &&
      !sameLine(entries(i).addr) &&
      !heldByMiss(entries(i).addr, entries(i).tagAlias, entries(i).opcode)
  }
  val hasEligible = eligible.asUInt.orR
  val pick = PriorityEncoder(eligible.asUInt)
  val slotFree = !outValid || fire || pullBack
  val canPick = slotFree && hasEligible

  val idle = VecInit(entries.map(_.state === ProbeState.idle))
  io.rxSnp.ready := idle.asUInt.orR
  val allocId = PriorityEncoder(idle.asUInt)
  val snp = io.rxSnp.bits
  // bit k 是 paddr[k+3]。先补低 3 位，再把行内 6 位清掉。
  val rawAddr = Cat(snp.addr, 0.U(3.W))
  val byteAddr = Cat(rawAddr(PAddrBits - 1, blockOffBits), 0.U(blockOffBits.W))

  def toReq(e: ProbeEntry, idx: UInt): MainPipeReq = {
    val req = Wire(new MainPipeReq)
    req.cmd := 0.U
    req.vaddr := Cat(0.U((VAddrBits - 14).W), e.tagAlias, e.addr(11, 0))
    req.addr := e.addr
    req.tagAlias := e.tagAlias
    req.id := idx.pad(reqIdWidth)
    req.missId := 0.U
    req.pc := 0.U
    req.wordIdx := 0.U
    req.amoData := 0.U
    req.amoMask := 0.U
    req.amoCmp := 0.U
    req.probeOp := e.opcode
    req.needData := false.B
    req.snpTxnId := e.snpTxnId
    req.replaceWay := 0.U
    req
  }

  for (i <- 0 until nProbeEntries) {
    val idx = i.U
    when(io.rxSnp.fire && allocId === idx) {
      entries(i).state := ProbeState.waitSend
      entries(i).addr := byteAddr
      entries(i).tagAlias := snp.tagAlias
      entries(i).opcode := snp.opcode
      entries(i).snpTxnId := snp.txnID
    }
    when(pullBack && outIdx === idx) {
      entries(i).state := ProbeState.waitSend
    }
    when(fire && outIdx === idx) {
      entries(i).state := ProbeState.idle
    }
    when(canPick && pick === idx) {
      entries(i).state := ProbeState.held
    }
  }

  when(canPick) {
    outValid := true.B
    outIdx := pick
    outBits := toReq(entries(pick), pick)
  }.elsewhen(fire || pullBack) {
    outValid := false.B
  }

  // MainPipe 把数据和应答交给 WritebackQueue。这里不再等 s3。
  for (i <- 0 until nProbeEntries) {
    val makeInv = entries(i).opcode === CompactChiOpcode.Snp.SnpMakeInvalid
    io.dropLine(i).valid := entries(i).state =/= ProbeState.idle && makeInv
    io.dropLine(i).bits.addr := entries(i).addr
    io.dropLine(i).bits.alias := entries(i).tagAlias
  }

  io.probeResp.ready := true.B
  val _ = io.wfi.req
  val busy = entries.map(_.state =/= ProbeState.idle).reduce(_ || _) || outValid
  io.wfi.safe := !busy

  val live = VecInit(entries.map(_.state =/= ProbeState.idle))
  val clash = VecInit((0 until nProbeEntries).map { i =>
    live(i) && lineAddr(entries(i).addr) === byteAddr
  }).asUInt.orR

  assert(PopCount(entries.map(_.state === ProbeState.held)) <= 1.U,
    "probe queue holds one selected entry")
  assert(!outValid || entries(outIdx).state === ProbeState.held,
    "latched snoop must stay in its entry")
  assert(!fire || !pullBack,
    "an accepted snoop is not pulled back")
  assert(!io.rxSnp.fire || entries(allocId).state === ProbeState.idle,
    "snoop allocate must use an idle entry")
  assert(!io.rxSnp.fire || !clash,
    "second snoop to a line still in ProbeQueue")
  assert(!(fire && io.rxSnp.fire && allocId === outIdx),
    "a just accepted snoop cannot be reused in the same cycle")
  assert(!io.pipeReq.valid || outBits.addr(blockOffBits - 1, 0) === 0.U,
    "snoop address must be line aligned")
  assert(!io.pipeReq.valid || !heldByMiss(outBits.addr, outBits.tagAlias, outBits.probeOp),
    "snoop must wait until the matching MSHR is released")
  assert(!io.pipeReq.valid || !io.pipeReq.bits.needData,
    "compact chi snoop has no needData")
  assert(!io.pipeReq.valid || io.pipeReq.bits.id === outIdx,
    "pipe request id is the probe entry index")
  assert(!io.probeResp.fire || io.probeResp.bits.id < nProbeEntries.U(reqIdWidth.W),
    "probe response id must be a probe entry")
}
