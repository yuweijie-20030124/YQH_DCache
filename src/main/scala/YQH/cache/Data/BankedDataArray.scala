package YQH.cache

import chisel3._
import chisel3.util._

import YQH.YQHBundle

// utils
class L1BankedDataReadReq(implicit p: DCacheParameters) extends DCacheBundle
{
  val way_en = Bits(p.nways.W)
  val addr = Bits(p.PAddrBits.W)
}

// class L1BankedDataReadReqWithMask(implicit p: DCacheParameters) extends DCacheBundle
// {
//   val way_en = Bits(DCacheWays.W)
//   val addr = Bits(PAddrBits.W)
//   val addr_dup = Bits(PAddrBits.W)
//   val bankMask = Bits(DCacheBanks.W)
//   val kill = Bool()
//   val lqIdx = new LqPtr
// }

// class L1BankedDataReadLineReq(implicit p: DCacheParameters) extends L1BankedDataReadReq
// {
//   val rmask = Bits(DCacheBanks.W)
// }

// shixian

class BankedDataArrayIO(implicit p:DCacheParameters) extends DCacheBundle{
  // val read = Vec(p.LoadPipelineWidth, Flipped(DecoupledIO(new YQHBundle)))
}

class  BankedDataArray()(implicit p:DCacheParameters) {
    val io = IO(new BankedDataArrayIO)
    
}