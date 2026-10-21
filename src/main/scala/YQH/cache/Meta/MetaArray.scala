// 用触发器/寄存器堆实现的 Meta Array，读要为了满足tag时序去延迟一拍
package YQH.cache

import chisel3._
import chisel3.util._

// read meta class
class MetaReadReq(implicit p: DCacheParameters) extends DCacheBundle {
  val idx = UInt(idxBits.W)
  val way_en = UInt(nways.W)
}

// Meta stae

object MetaData {
  def INVALID      = 0.U(2.W)
  def SHARED_CLEAN = 1.U(2.W)
  def UNIQUE_CLEAN = 2.U(2.W)
  def UNIQUE_DIRTY = 3.U(2.W)
}
class MetaData(implicit p: DCacheParameters) extends DCacheBundle {
  val coh = UInt(2.W) // I0 SC1 UC2 UD3

  def isValid: Bool = coh =/= MetaData.INVALID
  def isDirty: Bool = coh === MetaData.UNIQUE_DIRTY
}
 
