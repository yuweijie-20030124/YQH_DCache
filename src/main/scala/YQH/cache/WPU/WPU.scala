package YQH.cache.wpu

import chisel3._
import chisel3.util._
import YQH.cache.{DCacheParameters,DCacheBundle}

// utils

/* 
 * ReplayCarry
 * for load not need to predict
 * can use real way
 */ 

class ReplayCarry(nWays: Int)(implicit p: DCacheParameters) extends DCacheBundle {
  val real_way_en = UInt(nWays.W)
  val valid = Bool()
}

/*
 * 
 *  
 */
class WPUBaseReq(implicit p: DCacheParameters) extends DCacheBundle{
  val vaddr = UInt(p.VAddrBits.W)
}

class WPUReplayedReq(nWays: Int)(implicit p: DCacheParameters) extends WPUBaseReq {
  val replayCarry = new ReplayCarry(nWays)
}

class WPUResp(nWays:Int)(implicit p:DCacheParameters) extends DCacheBundle{
  val s0_pred_way_en = UInt(nWays.W)
}

class WPUUpdate(nWays:Int)(implicit p:DCacheParameters) extends DCacheBundle{
  val vaddr = UInt(VAddrBits.W)
  val s1_real_way_en = UInt(nWays.W)
}

class WPUUpdateLookup(nWays:Int)(implicit p:DCacheParameters) extends WPUUpdate(nWays){
  val s1_pred_way_en = UInt(nWays.W)
}

class ConflictPredictIO(nWays:Int)(implicit p:DCacheParameters) extends DCacheBundle{
  // pred
  val s0_vaddr = Input(UInt(p.VAddrBits.W))
  // update
  val s1_vaddr = Input(UInt(p.VAddrBits.W))
  val s1_dm_hit = Input(Bool())
}

class wpuBaseIO(nWays:Int, nPorts: Int)(implicit p:DCacheParameters) extends DCacheBundle{
  val req = Vec(nPorts, Flipped(Decoupled(new WPUReplayedReq(nWays))))
  val resp = Vec(nPorts, ValidIO(new WPUResp(nWays)))
  val lookup_upd = Vec(nPorts, Flipped(ValidIO(new WPUUpdateLookup(nWays))))
  val cfpred = Vec(nPorts, new ConflictPredictIO(nWays))
}

// true WPUIO
class WPUIO (nWays:Int, nPorts:Int)(implicit p:DCacheParameters) extends wpuBaseIO(nWays, nPorts){
    val tagwrite_upd = Flipped(ValidIO(new WPUUpdate(nWays)))
}


class WPU (nPorts: Int = 1)(implicit p:DCacheParameters){
  
}
