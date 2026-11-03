// WritebackQueue 保存已经离开 Cache Array 的副本，并把它写回 L2。
// 不接顶层。MainPipe 现有的 wbReq 只有地址、数据和 oldCoh，接不过来，本模块用自己的请求口。
//
// txnId 17～34 = 17 + 项号，只用于 Evict / WriteBackFull 的 TXEVT。
// Snoop 应答带回原来的 RXSNP.txnId，不占用这 18 个号。
// 没有 Credit / Retry。TXRSP 只准备无数据的 SnpResp，和 MissQueue 的 CompAck 由顶层仲裁。
//
// 共享且 PassDirty 按冻结记录发送，不按文档里“通道还没冻结、先不发”：
// TXEVT 用 WriteBackFull，Resp 用 SC_PD，DBID 到了再发两拍 CopyBackWrData。
// alwaysReleaseData 关闭，不接收 WriteEvictFull。
package YQH.cache

import chisel3._
import chisel3.util._
import anserl2.compactchi._

// 写回编号只改这里。MainPipe 填 WriteBackReq，WriteBackQueue 按同一编号发送。
// 线上 TXEVT 仍然只有 Evict=0、WriteBackFull=1。PassDirty 是内部编号，发出去时仍用 WriteBackFull。
object WbOpcode {
  val Evict          = 0.U(3.W)
  val WriteEvictFull = 1.U(3.W)
  val WriteBackFull  = 2.U(3.W)
  val SnpResp        = 3.U(3.W)
  val SnpRespData    = 4.U(3.W)
  // 单独记住。线上仍然是 WriteBackFull，Resp 为 SC_PD。
  val PassDirty      = 5.U(3.W)
}

object WbState {
  val invalid  = 0.U(2.W)
  val req      = 1.U(2.W)
  val waitComp = 2.U(2.W)
  val dat      = 3.U(2.W)
}

object WbChiResp {
  val I     = 0.U(3.W)
  val SC    = 1.U(3.W)
  val UC    = 2.U(3.W)
  val I_PD  = 4.U(3.W)
  val SC_PD = 5.U(3.W)
  val UC_PD = 6.U(3.W)
}

class WriteBackReq(implicit p: DCacheParameters) extends DCacheBundle {
  val data = UInt((blockBytes * 8).W)
  val addr = UInt(PAddrBits.W)
  val opcode = UInt(3.W)
  val resp = UInt(chi.respBits.W)
  val passDirty = Bool()
  val respErr = UInt(chi.respErrBits.W)
  val snpTxnId = UInt(chi.txnIdBits.W)
}

class WriteBackEntry(implicit p: DCacheParameters) extends DCacheBundle {
  val busy = Bool()
  val opcode = UInt(3.W)
  val resp = UInt(chi.respBits.W)
  val respErr = UInt(chi.respErrBits.W)
  val passDirty = Bool()
  val snpTxnId = UInt(chi.txnIdBits.W)
  val addr = UInt(PAddrBits.W)
  val data = UInt((blockBytes * 8).W)
  val dataReady = Bool()
  val dbid = UInt(chi.dbidBits.W)
  val dbidValid = Bool()
  val compGot = Bool()
  val dataSent = Bool()
  val rspSeen = Bool()
  val compSrc = UInt(chi.downstreamNodeIdBits.W)
  val traceTag = Bool()
  val state = UInt(2.W)
  val beatsLeft = UInt(2.W)
}

class WriteBackWfi(implicit p: DCacheParameters) extends DCacheBundle {
  val req = Input(Bool())
  // 只表示 18 个写回项都空。MissQueue、ProbeQueue 由顶层再与上。
  val safe = Output(Bool())
}

class WriteBackQueueIO(implicit p: DCacheParameters) extends DCacheBundle {
  val req = Flipped(DecoupledIO(new WriteBackReq))
  val txEvt = DecoupledIO(new CompactChiEvtFlit(chi, chiWayBits))
  val txDat = DecoupledIO(new CompactChiUpDatFlit(chi))
  // 无数据 SnpResp。顶层还要和 CompAck 仲裁后才能送到 L2。
  val txRsp = DecoupledIO(new CompactChiUpRspFlit(chi))
  // 只接收 txnId 17～34。其它编号由顶层送到 MissQueue 或 CMO。
  val rxRsp = Flipped(DecoupledIO(new CompactChiDownRspFlit(chi)))

  // 0、1 是两条 LoadPipe，2 是 MainPipe，3 是 CMO。同地址还有项时为 1。
  val blockQuery = Input(Vec(4, Valid(UInt(PAddrBits.W))))
  val block = Output(Vec(4, Bool()))
  val wfi = new WriteBackWfi
}

class WriteBackQueue(implicit p: DCacheParameters) extends DCacheModule {
  val io = IO(new WriteBackQueueIO)

  require(wbTxnIdBaseInt == nMissEntries + 1)
  require(wbTxnIdInt(nReleaseEntries - 1) == nMissEntries + nReleaseEntries)
  require(chi.dataBits * 2 == blockBytes * 8)

  val n = nReleaseEntries
  val entries = RegInit(VecInit(Seq.fill(n)(0.U.asTypeOf(new WriteBackEntry))))

  def lineOf(addr: UInt): UInt =
    Cat(addr(PAddrBits - 1, blockOffBits), 0.U(blockOffBits.W))

  def isCopyBack(op: UInt): Bool =
    op === WbOpcode.WriteBackFull || op === WbOpcode.PassDirty

  def isEvt(op: UInt): Bool =
    op === WbOpcode.Evict || isCopyBack(op)

  def legalResp(resp: UInt): Bool =
    resp === WbChiResp.I || resp === WbChiResp.SC || resp === WbChiResp.UC ||
      resp === WbChiResp.I_PD || resp === WbChiResp.SC_PD || resp === WbChiResp.UC_PD

  val req = io.req.bits
  val reqLine = lineOf(req.addr)
  val legalOp =
    req.opcode === WbOpcode.Evict || req.opcode === WbOpcode.WriteBackFull ||
      req.opcode === WbOpcode.SnpResp || req.opcode === WbOpcode.SnpRespData ||
      req.opcode === WbOpcode.PassDirty
  val conflict = entries.map(e => e.busy && lineOf(e.addr) === reqLine).reduce(_ || _)
  val freeOh = VecInit(entries.map(!_.busy))
  val hasFree = freeOh.asUInt.orR
  val allocId = PriorityEncoder(freeOh.asUInt)
  io.req.ready := hasFree && !conflict && legalOp

  val reqResp = Mux(req.opcode === WbOpcode.PassDirty, WbChiResp.SC_PD,
    Mux(isEvt(req.opcode), WbChiResp.I,
      Mux(req.passDirty, req.resp | 4.U(chi.respBits.W), req.resp)))

  val evtHold = RegInit(false.B)
  val evtHoldIdx = RegInit(0.U(log2Up(n).W))
  val rspHold = RegInit(false.B)
  val rspHoldIdx = RegInit(0.U(log2Up(n).W))
  val datHold = RegInit(false.B)
  val datHoldIdx = RegInit(0.U(log2Up(n).W))

  val evtWant = VecInit(entries.map { e =>
    e.busy && e.dataReady && e.state === WbState.req && isEvt(e.opcode)
  })
  val rspWant = VecInit(entries.map { e =>
    e.busy && e.dataReady && e.state === WbState.req && e.opcode === WbOpcode.SnpResp
  })
  val datStart = VecInit(entries.map { e =>
    e.busy && e.dataReady && e.state === WbState.dat && e.beatsLeft === 2.U && !e.dataSent
  })
  val datHeld = datHold && entries(datHoldIdx).busy &&
    entries(datHoldIdx).state === WbState.dat && entries(datHoldIdx).beatsLeft =/= 0.U

  val evtIdx = Mux(evtHold, evtHoldIdx, PriorityEncoder(evtWant.asUInt))
  val rspIdx = Mux(rspHold, rspHoldIdx, PriorityEncoder(rspWant.asUInt))
  val datIdx = Mux(datHeld, datHoldIdx, PriorityEncoder(datStart.asUInt))
  io.txEvt.valid := evtHold || evtWant.asUInt.orR
  io.txRsp.valid := rspHold || rspWant.asUInt.orR
  io.txDat.valid := datHeld || (!datHold && datStart.asUInt.orR)

  val evtEntry = entries(evtIdx)
  io.txEvt.bits := 0.U.asTypeOf(new CompactChiEvtFlit(chi, chiWayBits))
  io.txEvt.bits.txnID := wbTxnIdBaseInt.U + evtIdx
  io.txEvt.bits.srcID := p.dcacheNodeId.U
  io.txEvt.bits.tgtID := p.l2NodeId.U
  io.txEvt.bits.opcode := Mux(evtEntry.opcode === WbOpcode.Evict,
    CompactChiOpcode.Evt.Evict, CompactChiOpcode.Evt.WriteBackFull)
  io.txEvt.bits.addr := evtEntry.addr
  io.txEvt.bits.traceTag := evtEntry.traceTag

  val rspEntry = entries(rspIdx)
  io.txRsp.bits := 0.U.asTypeOf(new CompactChiUpRspFlit(chi))
  io.txRsp.bits.txnID := rspEntry.snpTxnId
  io.txRsp.bits.srcID := p.dcacheNodeId.U
  io.txRsp.bits.tgtID := p.l2NodeId.U
  io.txRsp.bits.opcode := CompactChiOpcode.Rsp.SnpResp
  io.txRsp.bits.respErr := rspEntry.respErr
  io.txRsp.bits.resp := rspEntry.resp
  io.txRsp.bits.traceTag := rspEntry.traceTag

  val datEntry = entries(datIdx)
  val lowBeat = datEntry.data(chi.dataBits - 1, 0)
  val highBeat = datEntry.data(blockBytes * 8 - 1, chi.dataBits)
  val firstBeat = datEntry.beatsLeft === 2.U
  io.txDat.bits := 0.U.asTypeOf(new CompactChiUpDatFlit(chi))
  io.txDat.bits.txnID := Mux(datEntry.opcode === WbOpcode.SnpRespData, datEntry.snpTxnId, datEntry.dbid)
  io.txDat.bits.srcID := p.dcacheNodeId.U
  io.txDat.bits.tgtID := Mux(datEntry.rspSeen, datEntry.compSrc, p.l2NodeId.U)
  io.txDat.bits.opcode := Mux(datEntry.opcode === WbOpcode.SnpRespData,
    CompactChiOpcode.Dat.SnpRespData, CompactChiOpcode.Dat.CopyBackWrData)
  io.txDat.bits.respErr := datEntry.respErr
  io.txDat.bits.resp := datEntry.resp
  io.txDat.bits.dataID := Mux(firstBeat, 0.U, 1.U)
  io.txDat.bits.data := Mux(firstBeat, lowBeat, highBeat)
  io.txDat.bits.byteEnable := Fill(chi.byteEnableBits, 1.U(1.W))
  io.txDat.bits.traceTag := datEntry.traceTag

  when(io.txEvt.fire) {
    evtHold := false.B
  }.elsewhen(io.txEvt.valid) {
    evtHold := true.B
    evtHoldIdx := evtIdx
  }
  when(io.txRsp.fire) {
    rspHold := false.B
  }.elsewhen(io.txRsp.valid) {
    rspHold := true.B
    rspHoldIdx := rspIdx
  }
  when(io.txDat.fire && datEntry.beatsLeft === 1.U) {
    datHold := false.B
  }.elsewhen(io.txDat.valid) {
    datHold := true.B
    datHoldIdx := datIdx
  }

  val rsp = io.rxRsp.bits
  val rspBase = wbTxnIdBaseInt.U(chi.txnIdBits.W)
  val rspLimit = (wbTxnIdBaseInt + n).U(chi.txnIdBits.W)
  val rspInRange = rsp.txnID >= rspBase && rsp.txnID < rspLimit
  // 范围外不要拿去索引 18 项，否则 txnId=0 会绕成一个很大的下标。
  val rspEnt = Mux(rspInRange, rsp.txnID - rspBase, 0.U)
  val rspWait = Wire(Vec(n, Bool()))
  for (i <- 0 until n) {
    val e = entries(i)
    rspWait(i) := e.busy && isEvt(e.opcode) &&
      (e.state === WbState.waitComp || e.state === WbState.dat)
  }
  val rspExpect = rspInRange && rspWait(rspEnt)
  io.rxRsp.ready := rspExpect

  for (i <- 0 until n) {
    val e = entries(i)
    val mine = i.U(log2Up(n).W)
    val doAlloc = io.req.fire && allocId === mine
    val rspHit = io.rxRsp.fire && rspEnt === mine
    val evtFire = io.txEvt.fire && evtIdx === mine
    val rspFire = io.txRsp.fire && rspIdx === mine
    val datFire = io.txDat.fire && datIdx === mine
    val copyBack = isCopyBack(e.opcode)
    val isComp = rsp.opcode === CompactChiOpcode.Rsp.Comp ||
      rsp.opcode === CompactChiOpcode.Rsp.CompDBIDResp
    val isDbid = rsp.opcode === CompactChiOpcode.Rsp.DBIDResp ||
      rsp.opcode === CompactChiOpcode.Rsp.CompDBIDResp

    val compNext = Wire(Bool())
    val dbidValidNext = Wire(Bool())
    val dbidNext = Wire(UInt(chi.dbidBits.W))
    val dataSentNext = Wire(Bool())
    val rspSeenNext = Wire(Bool())
    val compSrcNext = Wire(UInt(chi.downstreamNodeIdBits.W))
    val traceNext = Wire(Bool())
    val beatsNext = Wire(UInt(2.W))
    val stateNext = Wire(UInt(2.W))
    val busyNext = Wire(Bool())

    compNext := e.compGot
    dbidValidNext := e.dbidValid
    dbidNext := e.dbid
    dataSentNext := e.dataSent
    rspSeenNext := e.rspSeen
    compSrcNext := e.compSrc
    traceNext := e.traceTag
    beatsNext := e.beatsLeft
    stateNext := e.state
    busyNext := e.busy

    when(doAlloc) {
      compNext := false.B
      dbidValidNext := false.B
      dbidNext := 0.U
      dataSentNext := false.B
      rspSeenNext := false.B
      compSrcNext := p.l2NodeId.U
      traceNext := false.B
      beatsNext := Mux(req.opcode === WbOpcode.SnpRespData, 2.U, 0.U)
      stateNext := Mux(req.opcode === WbOpcode.SnpRespData, WbState.dat, WbState.req)
    }
    when(rspHit && isComp) { compNext := true.B }
    when(rspHit && isDbid && !e.dbidValid) {
      dbidNext := rsp.dbID
      dbidValidNext := true.B
    }
    when(rspHit && !e.rspSeen) {
      rspSeenNext := true.B
      compSrcNext := rsp.srcID
      traceNext := rsp.traceTag
    }
    when(datFire && e.beatsLeft === 1.U) { dataSentNext := true.B }
    when(e.busy && datFire) { beatsNext := e.beatsLeft - 1.U }

    val entering = e.busy && copyBack && e.state === WbState.waitComp &&
      dbidValidNext && !e.dataSent && e.beatsLeft === 0.U
    when(entering) {
      stateNext := WbState.dat
      beatsNext := 2.U
    }
    when(evtFire) { stateNext := WbState.waitComp }
    when(e.busy && copyBack && e.state === WbState.dat && dataSentNext && !compNext) {
      stateNext := WbState.waitComp
    }

    val freeNow = e.busy && (
      (e.opcode === WbOpcode.Evict && e.state === WbState.waitComp && rspHit && isComp) ||
        (copyBack && dataSentNext && compNext) ||
        (e.opcode === WbOpcode.SnpResp && rspFire) ||
        (e.opcode === WbOpcode.SnpRespData && datFire && e.beatsLeft === 1.U))
    when(freeNow) {
      busyNext := false.B
      stateNext := WbState.invalid
    }
    when(doAlloc) { busyNext := true.B }

    e.busy := busyNext
    e.state := stateNext
    e.compGot := compNext
    e.dbidValid := dbidValidNext
    e.dbid := dbidNext
    e.dataSent := dataSentNext
    e.rspSeen := rspSeenNext
    e.compSrc := compSrcNext
    e.traceTag := traceNext
    e.beatsLeft := beatsNext
    // 和 busy 同一拍可见。分配当拍寄存器还是旧值，所以数据最早下一拍才能发出。
    e.dataReady := busyNext
    when(doAlloc) {
      e.opcode := req.opcode
      e.resp := reqResp
      e.respErr := req.respErr
      e.passDirty := req.passDirty || req.opcode === WbOpcode.PassDirty
      e.snpTxnId := req.snpTxnId
      e.addr := reqLine
      e.data := req.data
    }

    when(rspHit) {
      assert(rsp.opcode === CompactChiOpcode.Rsp.Comp ||
        rsp.opcode === CompactChiOpcode.Rsp.DBIDResp ||
        rsp.opcode === CompactChiOpcode.Rsp.CompDBIDResp,
        "writeback RXRSP opcode is not a completion or a DBID")
      assert(e.opcode =/= WbOpcode.Evict || isComp,
        "Evict waits for Comp or CompDBIDResp")
      assert(!isComp || !e.compGot, "writeback completion arrived twice")
      assert(!e.dbidValid || !isDbid || e.dbid === rsp.dbID,
        "writeback DBID changed")
    }
    assert(PopCount(Seq(evtFire, rspFire, datFire)) <= 1.U,
      "one writeback entry can use only one channel")
  }

  for (q <- 0 until 4) {
    val addr = lineOf(io.blockQuery(q).bits)
    io.block(q) := io.blockQuery(q).valid &&
      entries.map(e => e.busy && lineOf(e.addr) === addr).reduce(_ || _)
  }
  io.wfi.safe := !entries.map(_.busy).reduce(_ || _)
  val _ = io.wfi.req

  assert(!io.req.valid || legalOp, "WriteEvictFull is off, opcode must be known")
  assert(!io.req.valid || req.addr(blockOffBits - 1, 0) === 0.U, "writeback address must be line aligned")
  assert(!io.req.valid || req.opcode =/= WbOpcode.PassDirty || req.passDirty,
    "PassDirty request must set passDirty")
  assert(!io.req.valid || (req.opcode =/= WbOpcode.Evict && req.opcode =/= WbOpcode.SnpResp) || !req.passDirty,
    "Evict and SnpResp do not carry data")
  assert(!io.req.fire || legalResp(reqResp), "writeback response state is not a CHI resp")
  assert(!io.rxRsp.valid || rspInRange, "RXRSP txnId is outside writeback ids 17 to 34")
  assert(!io.rxRsp.valid || rspExpect, "RXRSP writeback id is not waiting")
  assert(!io.txEvt.valid || evtWant(evtIdx), "TXEVT payload must stay on the selected entry")
  assert(!io.txRsp.valid || rspWant(rspIdx), "TXRSP payload must stay on the selected entry")
  assert(!io.txDat.valid || datEntry.state === WbState.dat, "TXDAT entry must be in s_dat")
  assert(!io.txDat.valid || datEntry.beatsLeft === 1.U || datEntry.beatsLeft === 2.U,
    "TXDAT beat counter must be 2 then 1")
  assert(!io.txDat.valid || datEntry.opcode =/= WbOpcode.SnpRespData || !datEntry.dbidValid,
    "SnpRespData uses the snoop txnId, not a DBID")
  assert(!io.txDat.valid || datEntry.opcode === WbOpcode.SnpRespData || datEntry.dbidValid,
    "CopyBackWrData cannot start before DBID")
  for (i <- 0 until n) {
    for (j <- i + 1 until n) {
      assert(!entries(i).busy || !entries(j).busy || lineOf(entries(i).addr) =/= lineOf(entries(j).addr),
        "one address can occupy only one writeback entry")
    }
  }
}
