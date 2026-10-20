package YQH.cache

import chisel3._
import chisel3.stage.ChiselStage
import chisel3.util._

import YQH.{YQHBundle,YQHModule}

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
  val PTR_WIDTH = log2Up(lqentries)
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

/***********************************interface definition***********************************/ 
  
/**
  * L2Cache to LSU
  */

// loadpipe interface for whole store
class DCacheLoadIO(implicit p:DCacheParameters) extends DCacheBundle{
  val req  = DecoupledIO(new DCacheWordReq)
  val resp = Flipped(DecoupledIO(new DCacheWordResp))
}

// storepipe interface for store address check
class DCacheStoreIO(implicit p:DCacheParameters) extends DCacheBundle{

}

// storebuffer to DCache interface for store(date + address)
class DCacheToSbufferIO(implicit p:DCacheParameters) extends DCacheBundle{

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

// TXEVT interface
class TXEVTIO(implicit p:DCacheParameters) extends DCacheBundle{
  
}

// TXREQ interface
class TXREQIO(implicit p:DCacheParameters) extends DCacheBundle{
  
}

// RXSNP interface
class RXSNPIO(implicit p:DCacheParameters) extends DCacheBundle{
  
}

// TXRSP interface
class TXRSPIO(implicit p:DCacheParameters) extends DCacheBundle{
  
}

// TXDAT interface
class TXDATIO(implicit p:DCacheParameters) extends DCacheBundle{
  
}

// RXRSP interface
class RXRSPIO(implicit p:DCacheParameters) extends DCacheBundle{
  
}

// RXDAT interface
class RXDATIO(implicit p:DCacheParameters) extends DCacheBundle{
  
}

// L2Cache interface
class L2CacheIO(implicit p:DCacheParameters) extends DCacheBundle{
  val txevt = DecoupledIO(new TXEVTIO)
  val txreq = DecoupledIO(new TXREQIO)
  val rxsnp = DecoupledIO(new RXSNPIO)
  val txrsp = DecoupledIO(new TXRSPIO)
  val txdat = DecoupledIO(new TXDATIO)
  val rxrsp = DecoupledIO(new RXRSPIO)
  val rxdat = DecoupledIO(new RXDATIO)
}

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
