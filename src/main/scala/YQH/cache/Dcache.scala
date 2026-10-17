package YQH.cache

import chisel3._
import chisel3.stage.ChiselStage
import chisel3.util._

import YQH.YQHBundle

/**
  * DCacheBundle
  */
  abstract class DCacheBundle(implicit val p: DCacheParameters) extends YQHBundle with HasDCacheParameters

/**
  * DCacheIO 
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
  * DCacheBundel 
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
