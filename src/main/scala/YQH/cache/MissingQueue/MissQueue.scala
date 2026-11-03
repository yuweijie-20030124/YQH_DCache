// MissQueue 持有 16 个 MSHR，负责 load / store / 原子 / 软件预取的 miss。
// 入口仲裁是单独的 MissArb，由顶层把 MainPipe、LoadPipe0、LoadPipe1 接进来。
//
// 这一版没有 Credit / Retry，L2 口只有 valid/ready。
// txnId 0～15 是 MSHR，16 是 CMO。CompAck 的 txnId 填 L2 返回的 dbId。
// 释放要同时满足 data_done、refill_done、compack_done、snoop_done，
// 并且合并进来的 store id 已经逐个送出，load 的唤醒或重发也已经发出。
package YQH.cache

import chisel3._
import chisel3.util._
import anserl2.compactchi._

object MissQueueConst {
  val nClients = 8
  // 四路都有效时不能每拍重发 refill，否则会占死 MainPipe 的 refill 口。
  // 等 16 拍再试一次，给同 set 的 Snoop 留出把某一路打成 I 的时间。
  val victimRetry = 16
}

object CmoOpcode {
  def CLEAN = CompactChiOpcode.Req.CleanShared
  def FLUSH = CompactChiOpcode.Req.CleanInvalid
  def INVAL = CompactChiOpcode.Req.MakeInvalid
}

class CmoReq(implicit p: DCacheParameters) extends DCacheBundle {
  // StoreQueue 的完成号。opcode 用 Compact CHI 的 CleanShared / CleanInvalid / MakeInvalid。
  val id = UInt(reqIdWidth.W)
  val opcode = UInt(6.W)
  val addr = UInt(PAddrBits.W)
  val alias = UInt(chi.tagAliasBits.W)
}

class CmoResp(implicit p: DCacheParameters) extends DCacheBundle {
  val id = UInt(reqIdWidth.W)
  val done = Bool()
  val error = Bool()
}

class MissWfi(implicit p: DCacheParameters) extends DCacheBundle {
  val req = Input(Bool())
  // 只表示 MissQueue 和 CMO 空闲。WritebackQueue、ProbeQueue 要由顶层再与上。
  val safe = Output(Bool())
}

class MissForwardBeat(implicit p: DCacheParameters) extends DCacheBundle {
  val id = UInt(log2Up(nMissEntries).W)
  val half = Bool()
  val data = UInt(chi.dataBits.W)
}

class MissForwardRead(implicit p: DCacheParameters) extends DCacheBundle {
  val id = Input(UInt(log2Up(nMissEntries).W))
  val half = Input(Bool())
  val data = Output(Valid(UInt(chi.dataBits.W)))
}

class MissHint(implicit p: DCacheParameters) extends DCacheBundle {
  val id = UInt(log2Up(nMissEntries).W)
  val half = Bool()
}

class MissNotify(implicit p: DCacheParameters) extends DCacheBundle {
  val id = UInt(log2Up(nMissEntries).W)
  val addr = UInt(PAddrBits.W)
  val alias = UInt(chi.tagAliasBits.W)
}

class MissSnoopNotice(implicit p: DCacheParameters) extends DCacheBundle {
  val addr = UInt(PAddrBits.W)
  val alias = UInt(chi.tagAliasBits.W)
  // 本地 Meta 编码：I / SC / UC / UD。
  val finalCoh = UInt(2.W)
  // 父模块确认 buffer 里这份是要交出去的唯一脏拷贝。
  val takeBuffer = Bool()
}

class MissClient(implicit p: DCacheParameters) extends DCacheBundle {
  val valid = Bool()
  val id = UInt(reqIdWidth.W)
  val source = UInt(sourceTypeWidth.W)
  val half = Bool()
  val sent = Bool()
}

class MissEntry(implicit p: DCacheParameters) extends DCacheBundle {
  val busy = Bool()
  val source = UInt(sourceTypeWidth.W)
  val cmd = UInt(M_SZ.W)
  val addr = UInt(PAddrBits.W)
  val vaddr = UInt(VAddrBits.W)
  val pc = UInt(VAddrBits.W)
  val alias = UInt(chi.tagAliasBits.W)
  val isUpgrade = Bool()
  val way = UInt(nways.W)
  val opcode = UInt(6.W)
  val stash = Bool()
  val dbid = UInt(chi.dbidBits.W)
  val dbidValid = Bool()
  val resp = UInt(chi.respBits.W)
  val respErr = UInt(chi.respErrBits.W)
  val traceTag = Bool()
  val compId = UInt(chi.downstreamNodeIdBits.W)
  val data = UInt((blockBytes * 8).W)
  val storeData = UInt((blockBytes * 8).W)
  val storeMask = UInt(blockBytes.W)
  val beatValid = UInt(2.W)
  val error = Bool()
  val amoData = UInt(QuadWordBits.W)
  val amoMask = UInt(QuadWordBytes.W)
  val amoCmp = UInt(QuadWordBits.W)
  val wordIdx = UInt(log2Up(DCacheBanks).W)
  val txreqDone = Bool()
  val dataDone = Bool()
  val refillSent = Bool()
  val refillInflight = Bool()
  val refillDone = Bool()
  val installed = Bool()
  val compackDone = Bool()
  val snoopDone = Bool()
  val pendingSnoop = Bool()
  val snoopFinal = UInt(2.W)
  val waitVictim = Bool()
  val waitCnt = UInt(log2Up(MissQueueConst.victimRetry).W)
  val wakeSent = Bool()
  val replaySent = Bool()
  val hintValid = Bool()
  val hintHalf = Bool()
  val clients = Vec(MissQueueConst.nClients, new MissClient)
}

class MissQueueIO(implicit p: DCacheParameters) extends DCacheBundle {
  val missReq = Flipped(DecoupledIO(new MissReq))
  val missResp = Output(new MissResp)
  // 与 missReq 同拍。同地址写回还在 WritebackQueue 时，不能分配也不能合并。
  val wbBlock = Input(Bool())

  val replaceQuery = Input(Valid(UInt(PAddrBits.W)))
  val replaceBlock = Output(Bool())

  val refill = DecoupledIO(new MainPipeReq)
  val refillInfo = Valid(new MainPipeRefillInfo)
  val refillError = Output(Bool())
  val mainpipeInfo = Input(new MainPipeMsInfo)
  val pendingQuery = Input(Valid(UInt(log2Up(nMissEntries).W)))
  val pendingInvalidate = Output(Bool())

  val cmoReq = Flipped(DecoupledIO(new CmoReq))
  val cmoResp = DecoupledIO(new CmoResp)
  val cmoQuery = Output(Valid(UInt(PAddrBits.W)))
  val cmoWbBlock = Input(Bool())
  val wfi = new MissWfi

  // 0、1 给两条 LoadPipe，2 给 MainPipe。
  val occupySet = Input(Vec(3, Valid(UInt(idxBits.W))))
  val occupyWay = Output(Vec(3, UInt(nways.W)))
  val occupyFail = Output(Vec(3, Bool()))

  val txReq = DecoupledIO(new CompactChiReqFlit(chi, chiWayBits))
  val rxDat = Flipped(DecoupledIO(new CompactChiDownDatFlit(chi)))
  val rxRsp = Flipped(DecoupledIO(new CompactChiDownRspFlit(chi)))
  val txRsp = DecoupledIO(new CompactChiUpRspFlit(chi))

  val forwardChi = Output(Valid(new MissForwardBeat))
  val forwardMshr = new MissForwardRead
  val l2Hint = Input(Valid(new MissHint))
  val l2HintSeen = Output(Vec(nMissEntries, Bool()))

  val refillWakeup = DecoupledIO(new MissNotify)
  val loadReplay = DecoupledIO(new MissNotify)
  val storeDone = DecoupledIO(new DCacheLineResp)
  val storeReplay = DecoupledIO(new DCacheLineResp)

  val snoop = Input(Valid(new MissSnoopNotice))
  val bufferTake = Input(Valid(UInt(log2Up(nMissEntries).W)))
  val bufferData = Output(UInt((blockBytes * 8).W))

  val entryValid = Output(Vec(nMissEntries, Bool()))
  val entryAddr = Output(Vec(nMissEntries, UInt(PAddrBits.W)))
  val entryAlias = Output(Vec(nMissEntries, UInt(chi.tagAliasBits.W)))
  val entryError = Output(Vec(nMissEntries, Bool()))
}

class MissReqWithOutStoreData(implicit p: DCacheParameters) extends DCacheBundle {
  val source = UInt(sourceTypeWidth.W)
  val cmd = UInt(M_SZ.W)
  val addr = UInt(PAddrBits.W)
  val vaddr = UInt(VAddrBits.W)
  val pc = UInt(VAddrBits.W)
  val lqIdx = new LqPtr
  val full_overwrite = Bool()
  val word_idx = UInt(log2Up(blockWords).W)
  val amo_data = UInt(QuadWordBits.W)
  val amo_mask = UInt(QuadWordBytes.W)
  val amo_cmp = UInt(QuadWordBits.W)
  val req_coh = new MetaData
  val id = UInt(reqIdWidth.W)
  val isBtoT = Bool()
  val occupy_way = UInt(nways.W)
  val cancel = Bool()

  def isFromLoad = source === LOAD_SOURCE.U
  def isFromStore = source === STORE_SOURCE.U
  def isFromAMO = source === AMO_SOURCE.U
}

class MissReqStoreData(implicit p: DCacheParameters) extends DCacheBundle {
  val store_data = UInt((blockBytes * 8).W)
  val store_mask = UInt(blockBytes.W)
}

class MissReq(implicit p: DCacheParameters) extends MissReqWithOutStoreData {
  val store_data = UInt((blockBytes * 8).W)
  val store_mask = UInt(blockBytes.W)

  def toMissReqStoreData(): MissReqStoreData = {
    val out = Wire(new MissReqStoreData)
    out.store_data := store_data
    out.store_mask := store_mask
    out
  }
}

class MissResp(implicit p: DCacheParameters) extends DCacheBundle {
  val id = UInt(log2Up(nMissEntries).W)
  val handled = Bool()
  val merged = Bool()
  // 同地址已经有 MSHR，而且这次不能合并。原子看到它就 replay，不能停在 s2。
  val sameAddr = Bool()
}

class MissQueue(implicit p: DCacheParameters) extends DCacheModule with MemoryOpConstants {
  val io = IO(new MissQueueIO)

  val nCli = MissQueueConst.nClients
  val entries = RegInit(0.U.asTypeOf(Vec(nMissEntries, new MissEntry)))

  def lineOf(addr: UInt): UInt =
    Cat(addr(PAddrBits - 1, blockOffBits), 0.U(blockOffBits.W))

  def aliasOf(vaddr: UInt): UInt = vaddr(13, 12)

  def setOf(addr: UInt, alias: UInt): UInt = Cat(alias, addr(11, 6))

  def overlay(base: UInt, neu: UInt, mask: UInt, nbytes: Int): UInt = {
    val bytes = Wire(Vec(nbytes, UInt(8.W)))
    for (b <- 0 until nbytes) {
      bytes(b) := Mux(mask(b), neu(8 * b + 7, 8 * b), base(8 * b + 7, 8 * b))
    }
    bytes.asUInt
  }

  def replaceHalf(line: UInt, high: Bool, half: UInt): UInt = {
    val low = line(chi.dataBits - 1, 0)
    val highBits = line(blockBytes * 8 - 1, chi.dataBits)
    Mux(high, Cat(half, low), Cat(highBits, half))
  }

  def hasLoad(e: MissEntry): Bool =
    e.clients.map(c => c.valid && c.source === LOAD_SOURCE.U).reduce(_ || _)

  def reqFlit(txn: UInt, opcode: UInt, addr: UInt, alias: UInt,
      expData: Bool, expStash: Bool): CompactChiReqFlit = {
    val f = Wire(new CompactChiReqFlit(chi, chiWayBits))
    f := 0.U.asTypeOf(new CompactChiReqFlit(chi, chiWayBits))
    f.txnID := txn
    f.srcID := p.dcacheNodeId.U
    f.tgtID := p.l2NodeId.U
    f.opcode := opcode
    f.size := 6.U
    f.addr := addr
    f.tagAlias := alias
    f.expCompData := expData
    f.expCompStash := expStash
    f
  }

  // 这一拍刚到达的 Snoop 也算。只看寄存器的话，s2 采样 refillInfo 会晚一拍。
  def snoopNow(e: MissEntry): Bool =
    io.snoop.valid && e.busy && !e.refillDone &&
      lineOf(e.addr) === lineOf(io.snoop.bits.addr) && e.alias === io.snoop.bits.alias

  def refillView(e: MissEntry): MainPipeRefillInfo = {
    val view = Wire(new MainPipeRefillInfo)
    val rawUnique = e.resp(1, 0) === 2.U
    val hitNow = snoopNow(e)
    val finalNow = Mux(hitNow, io.snoop.bits.finalCoh, e.snoopFinal)
    val forceSc = (e.pendingSnoop || hitNow) && finalNow === MetaState.SC
    val suppress = forceSc && e.storeMask.orR
    view.retUnique := rawUnique && !forceSc
    view.passDirty := Mux(suppress, true.B, e.resp(2))
    view.storeMask := Mux(suppress, 0.U, e.storeMask)
    view.storeData := e.storeData
    view.data := Mux(suppress, overlay(e.data, e.storeData, e.storeMask, blockBytes), e.data)
    view.error := e.error
    view
  }

  def pipeReq(e: MissEntry, id: UInt): MainPipeReq = {
    val req = Wire(new MainPipeReq)
    req.cmd := e.cmd
    req.vaddr := e.vaddr
    req.addr := e.addr
    req.tagAlias := e.alias
    req.id := e.clients(0).id
    req.missId := id
    req.pc := e.pc
    req.wordIdx := e.wordIdx
    req.amoData := e.amoData
    req.amoMask := e.amoMask
    req.amoCmp := e.amoCmp
    req.probeOp := 0.U
    req.needData := false.B
    req.snpTxnId := 0.U
    req.replaceWay := Mux(e.isUpgrade, e.way, 0.U)
    req
  }

  val req = io.missReq.bits
  val reqLine = lineOf(req.addr)
  val reqAlias = aliasOf(req.vaddr)
  val isPrefetchReq = req.source === SOFT_PREFETCH.U || req.source === DCACHE_PREFETCH_SOURCE.U
  val isPfr = isPrefetchReq && req.cmd === M_PFR
  val isPfw = isPrefetchReq && req.cmd === M_PFW

  val matchVec = VecInit(entries.map { e =>
    e.busy && lineOf(e.addr) === reqLine && e.alias === reqAlias
  })
  val matched = matchVec.asUInt.orR
  val matchId = PriorityEncoder(matchVec.asUInt)
  val freeVec = VecInit(entries.map(!_.busy))
  val hasFree = freeVec.asUInt.orR
  val allocId = PriorityEncoder(freeVec.asUInt)
  val matchedEntry = entries(matchId)

  val txWant = VecInit(entries.map(e => e.busy && !e.txreqDone))
  val txValid = txWant.asUInt.orR
  val txId = PriorityEncoder(txWant.asUInt)
  val opcodeFrozen = txValid && txId === matchId

  val eligible = VecInit(entries.map { e =>
    e.busy && e.dataDone && !e.refillDone && !e.refillInflight && !e.waitVictim
  })
  val anyInflight = entries.map(_.refillInflight).reduce(_ || _)
  val refillValid = eligible.asUInt.orR && !anyInflight
  val refillId = PriorityEncoder(eligible.asUInt)
  val sendingRefill = refillValid && refillId === matchId
  val mergeWindow = matched && !matchedEntry.refillSent && !matchedEntry.refillInflight &&
    !matchedEntry.refillDone && !matchedEntry.waitVictim && !sendingRefill
  val hasSlot = matchedEntry.clients.map(!_.valid).reduce(_ || _)
  val mergeSlot = PriorityEncoder(VecInit(matchedEntry.clients.map(!_.valid)).asUInt)
  val isRs = matchedEntry.opcode === CompactChiOpcode.Req.ReadShared
  val isRu = matchedEntry.opcode === CompactChiOpcode.Req.ReadUnique
  val isMu = matchedEntry.opcode === CompactChiOpcode.Req.MakeUnique
  val canUpgrade = isRs && !matchedEntry.txreqDone && !opcodeFrozen
  val allowLoad = (req.isFromLoad || isPfr) && mergeWindow && hasSlot
  val allowStore = req.isFromStore && mergeWindow && hasSlot && ((isRu || isMu) || canUpgrade)
  val allowPfw = isPfw && mergeWindow && hasSlot && ((isRu || isMu) || canUpgrade)
  val allowMerge = io.missReq.valid && matched && !io.wbBlock && !req.cancel &&
    (allowLoad || allowStore || allowPfw)
  val allowAlloc = io.missReq.valid && !matched && hasFree && !io.wbBlock && !req.cancel

  io.missReq.ready := true.B
  io.missResp.handled := allowMerge || allowAlloc
  io.missResp.merged := allowMerge
  io.missResp.id := Mux(allowMerge, matchId, allocId)
  io.missResp.sameAddr := io.missReq.valid && matched && !allowMerge

  val allocOp = Mux(req.isFromStore && req.full_overwrite, CompactChiOpcode.Req.MakeUnique,
    Mux(req.isFromStore || req.isFromAMO || isPfw || req.isBtoT,
      CompactChiOpcode.Req.ReadUnique, CompactChiOpcode.Req.ReadShared))

  val dat = io.rxDat.bits
  val rsp = io.rxRsp.bits
  val datIn = io.rxDat.fire && dat.txnID < nMissEntries.U
  val datIdx = dat.txnID(log2Up(nMissEntries) - 1, 0)
  val rspIn = io.rxRsp.fire && rsp.txnID < nMissEntries.U
  val rspIdx = rsp.txnID(log2Up(nMissEntries) - 1, 0)
  val rspDone = rsp.opcode === CompactChiOpcode.Rsp.Comp ||
    rsp.opcode === CompactChiOpcode.Rsp.DBIDResp ||
    rsp.opcode === CompactChiOpcode.Rsp.CompDBIDResp
  val rspStash = rsp.opcode === CompactChiOpcode.Rsp.CompStash

  io.rxDat.ready := true.B

  val storeHits = Wire(Vec(nMissEntries * nCli, Bool()))
  for (i <- 0 until nMissEntries) {
    for (j <- 0 until nCli) {
      val client = entries(i).clients(j)
      storeHits(i * nCli + j) := entries(i).busy && entries(i).refillDone &&
        client.valid && client.source === STORE_SOURCE.U && !client.sent
    }
  }
  val storeAny = storeHits.asUInt.orR
  val storeSel = PriorityEncoder(storeHits.asUInt)
  val storeEnt = storeSel(log2Up(nCli) + log2Up(nMissEntries) - 1, log2Up(nCli))
  val storeSlot = storeSel(log2Up(nCli) - 1, 0)
  val storeFail = !entries(storeEnt).installed
  io.storeDone.valid := storeAny && !storeFail
  io.storeReplay.valid := storeAny && storeFail
  io.storeDone.bits.miss := false.B
  io.storeDone.bits.replay := false.B
  io.storeDone.bits.id := entries(storeEnt).clients(storeSlot).id
  io.storeReplay.bits.miss := true.B
  io.storeReplay.bits.replay := true.B
  io.storeReplay.bits.id := entries(storeEnt).clients(storeSlot).id
  val storeGo = io.storeDone.fire || io.storeReplay.fire

  val wakeVec = VecInit(entries.map(e =>
    e.busy && e.refillDone && e.installed && !e.wakeSent && hasLoad(e)))
  val wakeAny = wakeVec.asUInt.orR
  val wakeId = PriorityEncoder(wakeVec.asUInt)
  io.refillWakeup.valid := wakeAny
  io.refillWakeup.bits.id := wakeId
  io.refillWakeup.bits.addr := entries(wakeId).addr
  io.refillWakeup.bits.alias := entries(wakeId).alias

  val replayVec = VecInit(entries.map(e =>
    e.busy && e.refillDone && !e.installed && !e.replaySent && hasLoad(e)))
  val replayAny = replayVec.asUInt.orR
  val replayId = PriorityEncoder(replayVec.asUInt)
  io.loadReplay.valid := replayAny
  io.loadReplay.bits.id := replayId
  io.loadReplay.bits.addr := entries(replayId).addr
  io.loadReplay.bits.alias := entries(replayId).alias

  val ackWant = VecInit(entries.map(e => e.busy && e.dataDone && e.dbidValid && !e.compackDone))
  val ackValid = ackWant.asUInt.orR
  val ackId = PriorityEncoder(ackWant.asUInt)

  val beatOut = Wire(Vec(nMissEntries, UInt(chi.dataBits.W)))

  for (i <- 0 until nMissEntries) {
    val e = entries(i)
    val mine = i.U(log2Up(nMissEntries).W)
    val doAlloc = allowAlloc && allocId === mine
    val doMerge = allowMerge && matchId === mine
    val rxd = datIn && datIdx === mine && e.busy && e.opcode =/= CompactChiOpcode.Req.MakeUnique && !e.dataDone
    val rxr = rspIn && rspIdx === mine && e.busy && rspDone
    val rxStash = rspIn && rspIdx === mine && e.busy && rspStash
    val doRefillFire = io.refill.fire && refillValid && refillId === mine
    val doS3 = io.mainpipeInfo.s3Done && e.refillInflight && io.mainpipeInfo.s3MissId === mine
    val snoopHit = io.snoop.valid && e.busy && !e.refillDone && !doS3 &&
      lineOf(e.addr) === lineOf(io.snoop.bits.addr) && e.alias === io.snoop.bits.alias
    val beatBit = UIntToOH(dat.dataID, 2)
    val dupBeat = (e.beatValid & beatBit).orR
    val halfHigh = dat.dataID === 1.U
    val oldHalf = Mux(halfHigh, e.data(blockBytes * 8 - 1, chi.dataBits), e.data(chi.dataBits - 1, 0))
    val storeHalf = Mux(halfHigh, e.storeData(blockBytes * 8 - 1, chi.dataBits), e.storeData(chi.dataBits - 1, 0))
    val maskHalf = Mux(halfHigh, e.storeMask(blockBytes - 1, chi.dataBytes), e.storeMask(chi.dataBytes - 1, 0))
    val mergedBeat = overlay(dat.data, storeHalf, maskHalf, chi.dataBytes)
    val writtenHalf = Mux(dupBeat, oldHalf, mergedBeat)
    beatOut(i) := writtenHalf

    val step0 = Mux(doAlloc,
      Mux(allocOp === CompactChiOpcode.Req.MakeUnique, req.store_data,
        overlay(0.U((blockBytes * 8).W), req.store_data, req.store_mask, blockBytes)),
      e.data)
    val step1 = Mux(rxd && !dupBeat, replaceHalf(step0, halfHigh, mergedBeat), step0)
    val dataNext = Mux(doMerge && req.isFromStore,
      overlay(step1, req.store_data, req.store_mask, blockBytes), step1)

    val snoopDoneNext = Wire(Bool())
    snoopDoneNext := e.snoopDone
    when(doAlloc) { snoopDoneNext := true.B }
    when(io.bufferTake.valid && io.bufferTake.bits === mine) { snoopDoneNext := true.B }
    when(snoopHit && io.snoop.bits.takeBuffer) { snoopDoneNext := false.B }

    val storeLeft = e.clients.map(c => c.valid && c.source === STORE_SOURCE.U && !c.sent).reduce(_ || _)
    val loadPending = hasLoad(e) && Mux(e.installed, !e.wakeSent, e.refillDone && !e.replaySent)
    val canFree = e.busy && e.dataDone && e.refillDone && e.compackDone && snoopDoneNext &&
      !storeLeft && !loadPending && !e.refillInflight && !doS3

    val busyNext = Wire(Bool())
    busyNext := e.busy
    when(canFree) { busyNext := false.B }
    when(doAlloc) { busyNext := true.B }

    val errorNext = Wire(Bool())
    errorNext := e.error
    when(doAlloc) { errorNext := false.B }
    when(rxd && dupBeat) { errorNext := true.B }
    when(rxd && dat.opcode =/= CompactChiOpcode.Dat.CompData) { errorNext := true.B }
    when(datIn && datIdx === mine && e.busy && e.opcode === CompactChiOpcode.Req.MakeUnique) {
      errorNext := true.B
    }
    when(datIn && datIdx === mine && e.busy && e.dataDone) { errorNext := true.B }

    val dbidNext = Wire(UInt(chi.dbidBits.W))
    val respNext = Wire(UInt(chi.respBits.W))
    val respErrNext = Wire(UInt(chi.respErrBits.W))
    val dbidValidNext = Wire(Bool())
    val traceNext = Wire(Bool())
    val compNext = Wire(UInt(chi.downstreamNodeIdBits.W))
    dbidNext := e.dbid
    respNext := e.resp
    respErrNext := e.respErr
    dbidValidNext := e.dbidValid
    traceNext := e.traceTag
    compNext := e.compId
    when(doAlloc) { dbidValidNext := false.B }

    when(rxr) {
      when(!e.dbidValid) {
        dbidNext := rsp.dbID
        respNext := rsp.resp
        respErrNext := rsp.respErr
        traceNext := rsp.traceTag
        compNext := rsp.srcID
        dbidValidNext := true.B
        when(rsp.respErr =/= 0.U) { errorNext := true.B }
      }.otherwise {
        when(e.dbid =/= rsp.dbID || e.resp =/= rsp.resp || e.respErr =/= rsp.respErr) {
          errorNext := true.B
        }
      }
    }
    when(rxd) {
      val seen = e.dbidValid || rxr
      val seenDbid = Mux(e.dbidValid, e.dbid, rsp.dbID)
      val seenResp = Mux(e.dbidValid, e.resp, rsp.resp)
      val seenErr = Mux(e.dbidValid, e.respErr, rsp.respErr)
      when(!seen) {
        dbidNext := dat.dbID
        respNext := dat.resp
        respErrNext := dat.respErr
        traceNext := dat.traceTag
        compNext := dat.srcID
        dbidValidNext := true.B
        when(dat.respErr =/= 0.U) { errorNext := true.B }
      }.otherwise {
        when(seenDbid =/= dat.dbID || seenResp =/= dat.resp || seenErr =/= dat.respErr) {
          errorNext := true.B
        }
      }
    }

    val dataDoneNext = Wire(Bool())
    dataDoneNext := e.dataDone
    val beatAfter = Mux(rxd && !dupBeat, e.beatValid | beatBit, e.beatValid)
    when(doAlloc) { dataDoneNext := false.B }
    when(rxd && beatAfter.andR) { dataDoneNext := true.B }
    when(rxr && e.opcode === CompactChiOpcode.Req.MakeUnique) { dataDoneNext := true.B }

    val beatNext = Wire(UInt(2.W))
    beatNext := e.beatValid
    when(doAlloc) { beatNext := 0.U }
    when(rxd && !dupBeat) { beatNext := e.beatValid | beatBit }

    val opNext = Wire(UInt(6.W))
    opNext := e.opcode
    when(doAlloc) { opNext := allocOp }
    when(doMerge && (req.isFromStore || isPfw) && e.opcode === CompactChiOpcode.Req.ReadShared) {
      opNext := CompactChiOpcode.Req.ReadUnique
    }

    val maskNext = Wire(UInt(blockBytes.W))
    val storeDataNext = Wire(UInt((blockBytes * 8).W))
    maskNext := e.storeMask
    storeDataNext := e.storeData
    when(doAlloc) {
      maskNext := Mux(req.isFromStore, req.store_mask, 0.U)
      storeDataNext := Mux(req.isFromStore, req.store_data, 0.U)
    }
    when(doMerge && req.isFromStore) {
      maskNext := e.storeMask | req.store_mask
      storeDataNext := overlay(e.storeData, req.store_data, req.store_mask, blockBytes)
    }

    val txreqNext = Wire(Bool())
    txreqNext := e.txreqDone
    when(doAlloc) { txreqNext := false.B }
    when(io.txReq.fire && txValid && txId === mine) { txreqNext := true.B }

    val refillSentNext = Wire(Bool())
    val inflightNext = Wire(Bool())
    val refillDoneNext = Wire(Bool())
    val installedNext = Wire(Bool())
    refillSentNext := e.refillSent
    inflightNext := e.refillInflight
    refillDoneNext := e.refillDone
    installedNext := e.installed
    when(doAlloc) {
      refillSentNext := false.B
      inflightNext := false.B
      refillDoneNext := false.B
      installedNext := false.B
    }
    when(doRefillFire) {
      refillSentNext := true.B
      inflightNext := true.B
    }
    val installOk = io.mainpipeInfo.installed || io.mainpipeInfo.finalCoh === MetaState.I
    when(doS3) {
      inflightNext := false.B
      installedNext := io.mainpipeInfo.installed
      when(installOk) { refillDoneNext := true.B }
    }

    val compackNext = Wire(Bool())
    compackNext := e.compackDone
    when(doAlloc) { compackNext := false.B }
    when(io.txRsp.fire && ackValid && ackId === mine) { compackNext := true.B }

    val pendNext = Wire(Bool())
    val finalNext = Wire(UInt(2.W))
    pendNext := e.pendingSnoop
    finalNext := e.snoopFinal
    when(doAlloc) {
      pendNext := false.B
      finalNext := MetaState.I
    }
    when(snoopHit) {
      pendNext := true.B
      finalNext := io.snoop.bits.finalCoh
    }

    val waitNext = Wire(Bool())
    val cntNext = Wire(UInt(log2Up(MissQueueConst.victimRetry).W))
    waitNext := e.waitVictim
    cntNext := e.waitCnt
    when(doAlloc) {
      waitNext := false.B
      cntNext := 0.U
    }
    when(doS3) {
      when(installOk) {
        waitNext := false.B
      }.otherwise {
        waitNext := true.B
        cntNext := 0.U
      }
    }
    when(e.waitVictim && !doS3 && !doAlloc) {
      when(e.waitCnt === (MissQueueConst.victimRetry - 1).U) {
        waitNext := false.B
      }.otherwise {
        cntNext := e.waitCnt + 1.U
      }
    }

    val wakeNext = Wire(Bool())
    val replayNext = Wire(Bool())
    wakeNext := e.wakeSent
    replayNext := e.replaySent
    when(doAlloc) {
      wakeNext := false.B
      replayNext := false.B
    }
    when(io.refillWakeup.fire && wakeId === mine) { wakeNext := true.B }
    when(io.loadReplay.fire && replayId === mine) { replayNext := true.B }

    val hintNext = Wire(Bool())
    val hintHalfNext = Wire(Bool())
    hintNext := e.hintValid
    hintHalfNext := e.hintHalf
    when(doAlloc) { hintNext := false.B }
    when(rxStash) { hintNext := true.B }
    when(io.l2Hint.valid && io.l2Hint.bits.id === mine) {
      hintNext := true.B
      hintHalfNext := io.l2Hint.bits.half
    }

    e.busy := busyNext
    e.data := dataNext
    e.error := errorNext
    e.dbid := dbidNext
    e.resp := respNext
    e.respErr := respErrNext
    e.dbidValid := dbidValidNext
    e.traceTag := traceNext
    e.compId := compNext
    e.dataDone := dataDoneNext
    e.beatValid := beatNext
    e.opcode := opNext
    e.storeMask := maskNext
    e.storeData := storeDataNext
    e.txreqDone := txreqNext
    e.refillSent := refillSentNext
    e.refillInflight := inflightNext
    e.refillDone := refillDoneNext
    e.installed := installedNext
    e.compackDone := compackNext
    e.snoopDone := snoopDoneNext
    e.pendingSnoop := pendNext
    e.snoopFinal := finalNext
    e.waitVictim := waitNext
    e.waitCnt := cntNext
    e.wakeSent := wakeNext
    e.replaySent := replayNext
    e.hintValid := hintNext
    e.hintHalf := hintHalfNext

    when(doAlloc) {
      e.source := req.source
      e.cmd := req.cmd
      e.addr := reqLine
      e.vaddr := req.vaddr
      e.pc := req.pc
      e.alias := reqAlias
      e.isUpgrade := req.isBtoT
      e.way := Mux(req.isBtoT, req.occupy_way, 0.U)
      e.stash := isPrefetchReq
      e.amoData := req.amo_data
      e.amoMask := req.amo_mask
      e.amoCmp := req.amo_cmp
      e.wordIdx := req.word_idx
    }

    for (j <- 0 until nCli) {
      val c = e.clients(j)
      val validNext = Wire(Bool())
      val idNext = Wire(UInt(reqIdWidth.W))
      val sourceNext = Wire(UInt(sourceTypeWidth.W))
      val halfNext = Wire(Bool())
      val sentNext = Wire(Bool())
      validNext := c.valid
      idNext := c.id
      sourceNext := c.source
      halfNext := c.half
      sentNext := c.sent
      when(doAlloc) {
        validNext := (j == 0).B
        idNext := req.id
        sourceNext := req.source
        halfNext := req.vaddr(5)
        sentNext := false.B
      }
      when(doMerge && hasSlot && mergeSlot === j.U) {
        validNext := true.B
        idNext := req.id
        sourceNext := req.source
        halfNext := req.vaddr(5)
        sentNext := false.B
      }
      when(storeGo && storeEnt === mine && storeSlot === j.U) { sentNext := true.B }
      when(canFree) { validNext := false.B }
      c.valid := validNext
      c.id := idNext
      c.source := sourceNext
      c.half := halfNext
      c.sent := sentNext
    }
  }

  val txEntry = entries(txId)
  val missTxn = Cat(0.U((chi.txnIdBits - log2Up(nMissEntries)).W), txId)
  val missFlit = reqFlit(
    missTxn, txEntry.opcode, txEntry.addr, txEntry.alias,
    txEntry.opcode === CompactChiOpcode.Req.ReadShared ||
      txEntry.opcode === CompactChiOpcode.Req.ReadUnique,
    txEntry.stash)

  val s_idle :: s_sreq :: s_wresp :: s_lsq_resp :: Nil = Enum(4)
  val cmoState = RegInit(s_idle)
  val cmoId = Reg(UInt(reqIdWidth.W))
  val cmoOp = Reg(UInt(6.W))
  val cmoAddr = Reg(UInt(PAddrBits.W))
  val cmoAlias = Reg(UInt(chi.tagAliasBits.W))
  val cmoErr = RegInit(false.B)

  val cmoLine = lineOf(cmoAddr)
  val cmoBlocked = entries.map(e => e.busy && lineOf(e.addr) === cmoLine).reduce(_ || _)
  val cmoSend = cmoState === s_sreq && !txValid && !cmoBlocked && !io.cmoWbBlock
  val cmoTxn = cmoTxnIdInt.U(chi.txnIdBits.W)
  val cmoFlit = reqFlit(cmoTxn, cmoOp, cmoLine, cmoAlias, false.B, false.B)

  io.txReq.valid := txValid || cmoSend
  io.txReq.bits := Mux(txValid, missFlit, cmoFlit)

  io.cmoReq.ready := cmoState === s_idle
  io.cmoResp.valid := cmoState === s_lsq_resp
  io.cmoResp.bits.id := cmoId
  io.cmoResp.bits.done := true.B
  io.cmoResp.bits.error := cmoErr
  io.cmoQuery.valid := cmoState === s_sreq
  io.cmoQuery.bits := cmoLine

  val cmoRsp = io.rxRsp.fire && rsp.txnID === cmoTxn && rsp.opcode === CompactChiOpcode.Rsp.CompCMO
  // 17～34 是 WritebackQueue 的号。这里不接收，避免把写回完成吃掉。
  io.rxRsp.ready := rsp.txnID < nMissEntries.U || (rsp.txnID === cmoTxn && cmoState === s_wresp)

  switch(cmoState) {
    is(s_idle) {
      when(io.cmoReq.fire) {
        cmoState := s_sreq
        cmoId := io.cmoReq.bits.id
        cmoOp := io.cmoReq.bits.opcode
        cmoAddr := lineOf(io.cmoReq.bits.addr)
        cmoAlias := io.cmoReq.bits.alias
        cmoErr := false.B
      }
    }
    is(s_sreq) {
      when(io.txReq.fire && !txValid) { cmoState := s_wresp }
    }
    is(s_wresp) {
      when(cmoRsp) {
        cmoState := s_lsq_resp
        cmoErr := rsp.respErr =/= CompactChiRespErr.NoError
      }
    }
    is(s_lsq_resp) {
      when(io.cmoResp.fire) { cmoState := s_idle }
    }
  }

  val ackEntry = entries(ackId)
  io.txRsp.valid := ackValid
  io.txRsp.bits := 0.U.asTypeOf(new CompactChiUpRspFlit(chi))
  io.txRsp.bits.txnID := ackEntry.dbid
  io.txRsp.bits.srcID := p.dcacheNodeId.U
  io.txRsp.bits.tgtID := ackEntry.compId
  io.txRsp.bits.opcode := CompactChiOpcode.Rsp.CompAck
  io.txRsp.bits.traceTag := ackEntry.traceTag

  io.refill.valid := refillValid
  io.refill.bits := pipeReq(entries(refillId), refillId)
  val infoEntry = entries(Mux(anyInflight, PriorityEncoder(VecInit(entries.map(_.refillInflight)).asUInt), refillId))
  io.refillInfo.valid := anyInflight
  io.refillInfo.bits := refillView(infoEntry)
  io.refillError := infoEntry.error

  // 只看已经记进项里的 Snoop。当拍的 snoop 由 refillView 带给还在 s2 的 refill。
  // 若这里再看当拍 snoop，会和 MainPipe s3 的完成条件绕成组合环。
  val pendingEntry = entries(io.pendingQuery.bits)
  io.pendingInvalidate := io.pendingQuery.valid && pendingEntry.busy &&
    pendingEntry.pendingSnoop && pendingEntry.snoopFinal === MetaState.I

  for (pidx <- 0 until 3) {
    val hit = entries.map { e =>
      e.busy && e.isUpgrade && !e.refillDone &&
        setOf(e.addr, e.alias) === io.occupySet(pidx).bits
    }
    val ways = entries.zip(hit).map { case (e, h) => Mux(h, e.way, 0.U) }
    io.occupyWay(pidx) := ways.reduce(_ | _)
    io.occupyFail(pidx) := io.occupySet(pidx).valid && PopCount(hit) >= 3.U
  }

  io.replaceBlock := io.replaceQuery.valid && entries.map { e =>
    e.busy && lineOf(e.addr) === lineOf(io.replaceQuery.bits)
  }.reduce(_ || _)

  val fwdIdx = Mux(datIn, datIdx, 0.U)
  val fwdEntry = entries(fwdIdx)
  val fwdHalf = dat.dataID === 1.U
  val fwdWant = fwdEntry.clients.map { c =>
    c.valid && c.source === LOAD_SOURCE.U && c.half === fwdHalf
  }.reduce(_ || _)
  io.forwardChi.valid := datIn && fwdEntry.busy &&
    fwdEntry.opcode =/= CompactChiOpcode.Req.MakeUnique && !fwdEntry.dataDone && fwdWant &&
    !(fwdEntry.beatValid & UIntToOH(dat.dataID, 2)).orR
  io.forwardChi.bits.id := fwdIdx
  io.forwardChi.bits.half := fwdHalf
  io.forwardChi.bits.data := beatOut(fwdIdx)

  val readEntry = entries(io.forwardMshr.id)
  val readHigh = io.forwardMshr.half
  io.forwardMshr.data.valid := readEntry.busy && hasLoad(readEntry) &&
    Mux(readHigh, readEntry.beatValid(1), readEntry.beatValid(0))
  io.forwardMshr.data.bits := Mux(readHigh,
    readEntry.data(blockBytes * 8 - 1, chi.dataBits), readEntry.data(chi.dataBits - 1, 0))

  io.bufferData := entries(io.bufferTake.bits).data
  io.l2HintSeen := entries.map(_.hintValid)
  io.entryValid := entries.map(_.busy)
  io.entryAddr := entries.map(_.addr)
  io.entryAlias := entries.map(_.alias)
  io.entryError := entries.map(_.error)

  io.wfi.safe := !entries.map(_.busy).reduce(_ || _) && cmoState === s_idle
  val _ = io.wfi.req

  assert(!io.missReq.valid || PopCount(matchVec.asUInt) <= 1.U,
    "one in-flight miss per physical line and alias")
  assert(PopCount(entries.map(_.refillInflight)) <= 1.U, "only one refill may be in MainPipe")
  assert(!allowAlloc || !req.isBtoT || PopCount(req.occupy_way) === 1.U,
    "permission upgrade must name exactly one way")
  assert(!io.cmoReq.fire || io.cmoReq.bits.opcode === CmoOpcode.CLEAN ||
    io.cmoReq.bits.opcode === CmoOpcode.FLUSH || io.cmoReq.bits.opcode === CmoOpcode.INVAL,
    "CMO opcode must be CleanShared, CleanInvalid or MakeInvalid")
  assert(!io.txReq.valid || txValid || cmoSend, "TXREQ valid must belong to a miss or a CMO")
}

// 外部仲裁：MainPipe 高于 LoadPipe0，再高于 LoadPipe1。没被选中的一边 ready 为 0，由各自的 pipe 重发。
class MissArb(implicit p: DCacheParameters) extends DCacheModule {
  val io = IO(new Bundle {
    val in = Flipped(Vec(3, DecoupledIO(new MissReq)))
    val out = DecoupledIO(new MissReq)
  })

  val sel = PriorityEncoder(io.in.map(_.valid))
  io.out.valid := io.in.map(_.valid).reduce(_ || _)
  io.out.bits := PriorityMux(io.in.map(_.valid), io.in.map(_.bits))
  for (i <- 0 until 3) {
    io.in(i).ready := io.out.ready && io.out.valid && sel === i.U
  }
}
