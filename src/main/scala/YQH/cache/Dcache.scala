package YQH.cache

import chisel3._
import chisel3.stage.ChiselStage
import chisel3.util._

import YQH.{YQHBundle,YQHModule}
import anserl2.compactchi.CompactChiRequesterIO

/**
  * DCacheBundle
  */
  abstract class DCacheBundle(implicit val p: DCacheParameters) extends YQHBundle with HasDCacheParameters with MemoryOpConstants
  abstract class DCacheModule(implicit val p: DCacheParameters) extends YQHModule with HasDCacheParameters

/***********************************chisel sub class***********************************/ 
// replaycarry
class ReplayCarry(nWays: Int)(implicit p: DCacheParameters) extends DCacheBundle {
  val real_way_en = UInt(nways.W)
  val valid = Bool()
}

class LqPtr(implicit p: DCacheParameters) extends DCacheBundle{
  //empty
  val PTR_WIDTH = log2Up(nLQEntries)
  val flag = Bool()
  val value = UInt(PTR_WIDTH.W)

  // 环形队列年龄。flag 相同则 value 小的更老；flag 不同则 value 大的更老。
  def isOlderThan(that: LqPtr): Bool = {
    Mux(flag === that.flag, value < that.value, value > that.value)
  }
}

class DCacheWordReq(implicit p:DCacheParameters) extends DCacheBundle{
  val cmd    = UInt(M_SZ.W)
  val vaddr  = UInt(VAddrBits.W)
  val vaddr_dup = UInt(VAddrBits.W)
  val data   = UInt(VLEN.W)
  val mask   = UInt((VLEN/8).W)
  val id     = UInt(reqIdWidth.W) //Dcache请求/响应的id字段位宽 暂时不知道多少先填一个6
  val instrtype   = UInt(sourceTypeWidth.W)
  val isFirstIssue = Bool()
  val replayCarry = new ReplayCarry(nways)
  val lqIdx = new LqPtr //年龄判断bank conflict的时候可以选择老load。
}

/****************************meta relative****************************/
class DCacheExtraMeta(implicit p:DCacheParameters) extends DCacheBundle{
  val access = Bool()
}

class DCacheWordResp(implicit p:DCacheParameters) extends DCacheBundle{
  val data = UInt(VLEN.W) //标量data，没有向量。128bit
  val id     = UInt(reqIdWidth.W) //Dcache请求/响应的id字段位宽 暂时不知道多少先填一个6
  val miss   = Bool()
  val replay = Bool()
  val replayCarry = new ReplayCarry(nways)
  // val tag_error = Bool() // ECC检查tag 
  val mshr_id = UInt(log2Up(nMissEntries).W)
  val handled = Bool()
  val real_miss = Bool()
  val replacementUpdated = Bool()
}

class DcacheStoreRequestIO(implicit p: DCacheParameters) extends DCacheBundle {
  val cmd = UInt(M_SZ.W)
  val vaddr = UInt(VAddrBits.W)
  val instrtype   = UInt(sourceTypeWidth.W)
}

class DCacheLineResp(implicit p: DCacheParameters) extends DCacheBundle {
  // val data   = UInt((cfg.blockBytes * 8).W)
  // cache req missed, send it to miss queue
  val miss   = Bool()
  // cache req nacked, replay it later
  val replay = Bool()
  val id     = UInt(reqIdWidth.W)
}

class DCacheLineReq(implicit p: DCacheParameters) extends DCacheBundle {
  val cmd    = UInt(M_SZ.W)
  val vaddr  = UInt(VAddrBits.W)
  val addr   = UInt(PAddrBits.W)
  // Sbuffer 提交整行。mask 的 1 表示这个字节要写。
  val data   = UInt((blockBytes * 8).W)
  val mask   = UInt(blockBytes.W)
  val id     = UInt(reqIdWidth.W)
}

class DCacheWordIO(implicit p:DCacheParameters) extends DCacheBundle{
  val req  = DecoupledIO(new DCacheWordReq)
  val resp = Flipped(DecoupledIO(new DCacheWordResp))
}

// Replacement
class ReplacementAccessBundle(implicit p: DCacheParameters) extends DCacheBundle {
  val set = UInt(log2Up(nsets).W)
  val way = UInt(log2Up(nways).W)
}

class ReplacementWayReqIO(implicit p: DCacheParameters) extends DCacheBundle {
  val set = ValidIO(UInt(log2Up(nsets).W))
  val dmWay = Output(UInt(log2Up(nways).W))
  val way = Input(UInt(log2Up(nways).W))
}

/***********************************interface definition***********************************/ 
  
/**
  * L2Cache to LSU
  */

// loadpipe interface for whole store
class DCacheLoadIO(implicit p: DCacheParameters) extends DCacheWordIO
{
  val s1_kill_data_read = Output(Bool()) 
  val s1_kill           = Output(Bool()) 
  val s2_kill           = Output(Bool())
  val s0_pc             = Output(UInt(VAddrBits.W))
  val s1_pc             = Output(UInt(VAddrBits.W))
  val s2_pc             = Output(UInt(VAddrBits.W))
  val replacementUpdated = Output(Bool())
  val is128Req = Output(Bool())
  val s1_paddr_dup_lsu = Output(UInt(PAddrBits.W)) 
  val s1_paddr_dup_dcache = Output(UInt(PAddrBits.W)) 
  val s1_disable_fast_wakeup = Input(Bool())
  val s2_hit = Input(Bool()) 
  val s2_first_hit = Input(Bool())
  val s2_bank_conflict = Input(Bool())
  val s2_wpu_pred_fail = Input(Bool())
  val s2_mq_nack = Input(Bool())
}

// storepipe interface for store address check
class DCacheStoreIO(implicit p:DCacheParameters) extends DCacheBundle{
  // Paddr in STA s1, used for hit check
  val s1_paddr = Output(UInt(PAddrBits.W))
  // TLB miss or Exception in STA s1, kill Dcache req
  val s1_kill = Output(Bool())
  // Access Fault or MMIO in STA s2, kill Dcache req
  val s2_kill = Output(Bool())
  // Debug PC
  val s2_pc = Output(UInt(VAddrBits.W))

  val req = DecoupledIO(new DcacheStoreRequestIO)
  val resp = Flipped(DecoupledIO(new DCacheBundle() {
    // this store misses (for now, not used)
    val miss = Bool()
    // this store needs replay (for now, not used)
    val replay = Bool()
    // tag error TODO: add logic
    val tag_error = Bool()
  }))
}

// storebuffer to DCache interface for store(date + address)
// hit 和 replay 都要握手。对端没接住，MainPipe 或 MissQueue 就不离开当前项。
class DCacheToSbufferIO(implicit p:DCacheParameters) extends DCacheBundle{
  val req = Flipped(DecoupledIO(new DCacheLineReq))

  // 命中写在 MainPipe s3 完成。
  val main_pipe_hit_resp = DecoupledIO(new DCacheLineResp)
  // miss 的 store 要等 refill 安装或放弃之后，由 MissQueue 逐个客户送出。
  val refill_hit_resp = DecoupledIO(new DCacheLineResp)
  // MainPipe s2 的 replay 和 MissQueue 放弃安装的 replay 合成这一条。s2 优先。
  val replay_resp = DecoupledIO(new DCacheLineResp)

  def hit_resps: Seq[DecoupledIO[DCacheLineResp]] = Seq(main_pipe_hit_resp, refill_hit_resp)
}

// LR、SC、AMO、AMOCAS。req 用 MainPipeReq，probe 相关字段保持 0。
// resp 是做完的旧值；replay 是没做成，AtomicsUnit 以后重发。
class AtomicWordIO(implicit p:DCacheParameters) extends DCacheBundle{
  val req = Flipped(DecoupledIO(new MainPipeReq))
  val resp = DecoupledIO(new MainPipeAtomicResp)
  val replay = DecoupledIO(new DCacheLineResp)
}

// 通道定义在 anserl2.compactchi，源码位于 /home/ywj/Compact-CHI。
// req=TXREQ，evt=TXEVT，txRsp=TXRSP，txDat=TXDAT，rxRsp=RXRSP，rxDat=RXDAT，rxSnp=RXSNP。
class L2CacheIO(implicit p: DCacheParameters)
    extends CompactChiRequesterIO(p.chi, p.chiWayBits)

class DCacheWfi(implicit p:DCacheParameters) extends DCacheBundle{
  val req = Input(Bool())
  val safe = Output(Bool())
}

/**
  * full DCacheIO interface
  * load 的方向和 LoadPipe 内部的 lsu 一致：DCache 接收请求，送出响应。
  */
class DCacheIO(implicit p:DCacheParameters) extends DCacheBundle{
  val load = Vec(loadPipelineWidth, Flipped(new DCacheLoadIO))
  val store = new DCacheToSbufferIO
  val atomics = new AtomicWordIO
  val cmoReq = Flipped(DecoupledIO(new CmoReq))
  val cmoResp = DecoupledIO(new CmoResp)
  val wfi = new DCacheWfi
  val l2 = new L2CacheIO

  // RXDAT 当拍的半行。LSU 没接到也没关系，数据还在 MSHR 里。
  val forwardChi = Output(Valid(new MissForwardBeat))
  val forwardMshr = new MissForwardRead
  val refillWakeup = DecoupledIO(new MissNotify)
  val loadReplay = DecoupledIO(new MissNotify)
}

class DCache(implicit p:DCacheParameters) extends DCacheModule {
  val io = IO(new DCacheIO)

  val tags = Module(new DuplicatedTagArray)
  val meta = Module(new MetaArray)
  val data = Module(new BankedDataArray)
  val loads = Seq.tabulate(loadPipelineWidth)(i => Module(new LoadPipe(i)))
  val pipe = Module(new MainPipe)
  val miss = Module(new MissQueue)
  val arb = Module(new MissArb)
  val wb = Module(new WriteBackQueue)
  val probe = Module(new ProbeQueue)

  for (i <- 0 until loadPipelineWidth) {
    val ld = loads(i).io
    ld.lsu <> io.load(i)
    tags.io.read(i) <> ld.tag_read
    meta.io.read(i) <> ld.meta_read
    ld.tag_resp := tags.io.resp(i)
    ld.meta_resp := meta.io.resp(i)
    data.io.load(i) <> ld.banked_data_read
    ld.banked_data_resp := data.io.loadResp(i)
    ld.bank_conflict := data.io.bankConflict(i)
    ld.disable_ld_fast_wakeup := false.B
    ld.unique_occupy_fail := miss.io.occupyFail(i)
    miss.io.occupySet(i).valid := ld.unique_occupy_valid
    miss.io.occupySet(i).bits := ld.unique_occupy_set
    wb.io.blockQuery(i) := ld.wbq_conflict_check
    ld.wbq_block_miss_req := wb.io.block(i)
    pipe.io.replaceAccess(i) := ld.replace_access
    ld.miss_resp := miss.io.missResp
  }

  val mp = pipe.io
  tags.io.read(loadPipelineWidth) <> mp.tagRead
  meta.io.read(loadPipelineWidth) <> mp.metaRead
  mp.tagResp := tags.io.resp(loadPipelineWidth)
  mp.metaResp := meta.io.resp(loadPipelineWidth)
  tags.io.write <> mp.tagWrite
  meta.io.write <> mp.metaWrite
  data.io.line <> mp.dataRead
  mp.dataResp := data.io.lineResp
  data.io.write <> mp.dataWrite

  arb.io.in(0) <> mp.missReq
  arb.io.in(1) <> loads(0).io.miss_req
  arb.io.in(2) <> loads(1).io.miss_req
  miss.io.missReq <> arb.io.out
  // MainPipe 是仲裁口 0，发出去的那拍 missResp 一定是它自己的。
  mp.missResp := miss.io.missResp
  // 两条 Load 在自己的口里已经挡住 WritebackQueue。这里不再挡一次。
  miss.io.wbBlock := false.B

  mp.refill <> miss.io.refill
  mp.refillInfo := miss.io.refillInfo
  miss.io.mainpipeInfo := mp.mainpipeInfo
  miss.io.pendingQuery := mp.pendingSnoop
  mp.pendingInvalidate := miss.io.pendingInvalidate
  miss.io.snoop := mp.snoopNotice
  miss.io.bufferTake.valid := false.B
  miss.io.bufferTake.bits := 0.U
  miss.io.l2Hint.valid := false.B
  miss.io.l2Hint.bits := 0.U.asTypeOf(new MissHint)

  miss.io.occupySet(2) := mp.occupySet
  mp.occupyWay := miss.io.occupyWay(2)
  mp.occupyFail := miss.io.occupyFail(2)
  miss.io.replaceQuery := mp.replaceQuery
  mp.replaceBlock := miss.io.replaceBlock

  wb.io.req <> mp.wbReq
  wb.io.blockQuery(2) := mp.wbQuery
  mp.wbBlock := wb.io.block(2)
  wb.io.blockQuery(3) := miss.io.cmoQuery
  miss.io.cmoWbBlock := wb.io.block(3)

  probe.io.pipeReq <> mp.probe
  probe.io.probeResp <> mp.probeResp
  probe.io.lrscLockedBlock := mp.lrsc_blocked_block
  probe.io.updateResvSet := mp.update_resv_set
  // 同地址 Probe 走到 s3 时，MainPipe 自己清 reservation。
  mp.invalid_resv_set := false.B

  mp.store <> io.store.req
  io.store.main_pipe_hit_resp <> mp.storeHit
  io.store.refill_hit_resp <> miss.io.storeDone
  val replay = io.store.replay_resp
  replay.valid := mp.storeReplay.valid || miss.io.storeReplay.valid
  replay.bits := Mux(mp.storeReplay.valid, mp.storeReplay.bits, miss.io.storeReplay.bits)
  mp.storeReplay.ready := replay.ready
  miss.io.storeReplay.ready := replay.ready && !mp.storeReplay.valid

  mp.atomic <> io.atomics.req
  io.atomics.resp <> mp.atomicResp
  io.atomics.replay <> mp.atomicReplay

  miss.io.cmoReq <> io.cmoReq
  io.cmoResp <> miss.io.cmoResp
  io.forwardChi := miss.io.forwardChi
  io.forwardMshr <> miss.io.forwardMshr
  io.refillWakeup <> miss.io.refillWakeup
  io.loadReplay <> miss.io.loadReplay

  // txnId：0～15 MSHR，16 CMO，17～34 WritebackQueue。没有 Credit。
  io.l2.req <> miss.io.txReq
  io.l2.evt <> wb.io.txEvt
  io.l2.txDat <> wb.io.txDat
  io.l2.rxDat <> miss.io.rxDat
  io.l2.rxSnp <> probe.io.rxSnp

  val rspId = io.l2.rxRsp.bits.txnID
  val rspToMiss = rspId <= cmoTxnIdInt.U
  val rspToWb = rspId >= wbTxnIdBaseInt.U && rspId < (wbTxnIdBaseInt + nReleaseEntries).U
  miss.io.rxRsp.valid := io.l2.rxRsp.valid && rspToMiss
  miss.io.rxRsp.bits := io.l2.rxRsp.bits
  wb.io.rxRsp.valid := io.l2.rxRsp.valid && rspToWb
  wb.io.rxRsp.bits := io.l2.rxRsp.bits
  io.l2.rxRsp.ready := Mux(rspToWb, wb.io.rxRsp.ready, Mux(rspToMiss, miss.io.rxRsp.ready, false.B))

  // Snoop 的无数据应答先走。CompAck 晚一拍不影响正确性，Snoop 堵住会拖住 L2。
  val snpRsp = wb.io.txRsp
  val ackRsp = miss.io.txRsp
  io.l2.txRsp.valid := snpRsp.valid || ackRsp.valid
  io.l2.txRsp.bits := Mux(snpRsp.valid, snpRsp.bits, ackRsp.bits)
  snpRsp.ready := io.l2.txRsp.ready
  ackRsp.ready := io.l2.txRsp.ready && !snpRsp.valid

  miss.io.wfi.req := io.wfi.req
  wb.io.wfi.req := io.wfi.req
  probe.io.wfi.req := io.wfi.req
  val loadBusy = loads.map(_.io.busy).reduce(_ || _)
  io.wfi.safe := miss.io.wfi.safe && wb.io.wfi.safe && probe.io.wfi.safe && !mp.busy && !loadBusy

  assert(!io.l2.rxRsp.valid || rspToMiss || rspToWb,
    "RXRSP txnId is not a miss, CMO, or writeback id")
  assert(!io.l2.rxDat.fire || io.l2.rxDat.bits.txnID < nMissEntries.U,
    "RXDAT txnId must be an MSHR")
  assert(PopCount(Seq(snpRsp.fire, ackRsp.fire)) <= 1.U,
    "TXRSP sends one response per cycle")
}

object topMain extends App {
  // DCache 的构造参数是 implicit 的，emit 前必须在这里给一个具体配置
  implicit val p: DCacheParameters = DCacheParameters()
  (new ChiselStage).emitVerilog(new DCache, args)
}
