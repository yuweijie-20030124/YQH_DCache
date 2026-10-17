// 用sram构建的Tag，打一拍才能输出
package YQH.cache

import chisel3._
import chisel3.util._

class TagReadReq(implicit p: DCacheParameters) extends DCacheBundle {
    val idx = UInt(idxBits.W)        // idxBits 来自 HasDCacheParameters
    val way_en = UInt(p.nways.W)     // 每路 1 bit
}