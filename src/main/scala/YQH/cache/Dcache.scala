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
  // val data   = UInt((cfg.blockBytes * 8).W)
  // val mask   = UInt(cfg.blockBytes.W)
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
  val is128Req = Bool()
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
class DCacheToSbufferIO(implicit p:DCacheParameters) extends DCacheBundle{
  // sbuffer will directly send request to dcache main pipe
  val req = Flipped(Decoupled(new DCacheLineReq))

  val main_pipe_hit_resp = ValidIO(new DCacheLineResp)
  //val refill_hit_resp = ValidIO(new DCacheLineResp)

  val replay_resp = ValidIO(new DCacheLineResp)

  //def hit_resps: Seq[ValidIO[DCacheLineResp]] = Seq(main_pipe_hit_resp, refill_hit_resp)
  def hit_resps: Seq[ValidIO[DCacheLineResp]] = Seq(main_pipe_hit_resp)
}

// atomics interface for atomicunit 
class AtomicWordIO(implicit p:DCacheParameters) extends DCacheBundle{

}

// L2Cache Data channel forward to LSU
class DcacheToLduForwardIO(implicit p:DCacheParameters) extends DCacheBundle{

}

// MSHR forward to LSU
class LduToMissqueueForwardIO(implicit p:DCacheParameters) extends DCacheBundle{

}

// 

// 

/**
  * L2Cache to Compact Chi
  */

// 通道定义在 anserl2.compactchi，源码位于 /home/ywj/Compact-CHI。
// req=TXREQ，evt=TXEVT，txRsp=TXRSP，txDat=TXDAT，rxRsp=RXRSP，rxDat=RXDAT，rxSnp=RXSNP。
class L2CacheIO(implicit p: DCacheParameters)
    extends CompactChiRequesterIO(p.chi, p.chiWayBits)

/**
  * full DCacheIO interface

  */
class DCacheIO(implicit p:DCacheParameters) extends DCacheBundle{
  val req = Input(Bool())
  val write = Input(Bool())
  val addr = Input(UInt(32.W))
  val wdata = Input(UInt(32.W))
  val ready = Output(Bool())
  val rdata = Output(UInt(32.W))
  val memReq = Output(Bool())
  val memWrite = Output(Bool())
  val memAddr = Output(UInt(32.W))
  val memWdata = Output(UInt(32.W))
  val memReady = Input(Bool())
  val memRdata = Input(UInt(32.W))
}
/**
  * DCacheBundle 
  */

class DCache(implicit p:DCacheParameters) extends Module {
  val io = IO(new DCacheIO)

  // Sixteen one-word lines; the caller supplies word-aligned addresses.
  val valid = RegInit(VecInit(Seq.fill(16)(false.B)))
  val tags = Reg(Vec(16, UInt(26.W)))
  val data = Reg(Vec(16, UInt(32.W)))

  val index = io.addr(5, 2)
  val tag = io.addr(31, 6)
  val hit = valid(index) && tags(index) === tag

  // A read hit completes locally; misses and all writes wait for memory.
  io.memReq := io.req && (io.write || !hit)
  io.memWrite := io.req && io.write
  io.memAddr := io.addr
  io.memWdata := io.wdata
  io.ready := io.req && Mux(io.write || !hit, io.memReady, true.B)
  io.rdata := Mux(hit, data(index), io.memRdata)

  when(io.ready) {
    when(io.write) {
      // Write-through, without allocating a line on a write miss.
      when(hit) { data(index) := io.wdata }
    }.elsewhen(!hit) {
      valid(index) := true.B
      tags(index) := tag
      data(index) := io.memRdata
    }
  }
}


object topMain extends App {
  // DCache 的构造参数是 implicit 的，emit 前必须在这里给一个具体配置
  implicit val p: DCacheParameters = DCacheParameters()
  (new ChiselStage).emitVerilog(new DCache, args)
}
