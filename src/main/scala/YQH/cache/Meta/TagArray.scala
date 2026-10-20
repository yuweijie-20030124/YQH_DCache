// 用sram构建的Tag，打一拍才能输出
package YQH.cache

import chisel3._
import chisel3.util._

// myself
import YQH.utils.SRAMTemplate

// read tag
class TagReadReq(implicit p: DCacheParameters) extends DCacheBundle {
    val idx = UInt(idxBits.W)        // idxBits 来自 HasDCacheParameters
    val way_en = UInt(p.nways.W)     // 每路 1 bit
}

// write tag
class TagWriteReq(implicit p: DCacheParameters) extends TagReadReq { //写的话不仅要上面两个
  val vaddr = UInt(p.vtagBits.W) //48-13 训练WPU
  val tag = UInt(p.tagBits.W)    //48-12
}

// Bank的SRAM小单位
class TagSRAMBank(implicit p: DCacheParameters) extends DCacheModule{  
    val io = IO(new Bundle(){
        val read = Flipped(DecoupledIO(new TagReadReq{
        override val way_en = UInt(2.W) //一个bank管2way。
    }))
    val write = Flipped(DecoupledIO(new TagWriteReq{
        override val way_en = UInt(2.W) //一个bank管2way。
    }))
    val resp = Output(Vec(2, UInt(p.tagBits.W)))
    })

    val waddr = io.write.bits.idx
    val wdata = io.write.bits.tag
    val wmask = io.write.bits.way_en
    val rmask = io.read.bits.way_en

    // 一个 bank 保存两路 tag；每个 index 对应 Vec(2, UInt(p.tagBits.W))。
    val tag_array = Module(
      new SRAMTemplate(
        gen = UInt(p.tagBits.W),
        set = p.nSets,
        way = 2,
        singlePort = true,
        useBitmask = true,
      )
    )

    // 单端口仲裁：写优先；写有效时不接受读请求。
    io.write.ready := true.B
    io.read.ready := !io.write.valid

    val readFire = io.read.fire && rmask.orR
    val writeFire = io.write.fire

    // tag read：SRAM 是同步读，tag_array.io.r.valid 在下一拍有效。
    tag_array.io.r.en := readFire
    tag_array.io.r.addr := io.read.bits.idx

    // tag write：way_en 作为 SRAM 的按 way 写 mask。
    tag_array.io.w.en := writeFire
    tag_array.io.w.addr := waddr

    for (way <- 0 until 2) {
      tag_array.io.w.data(way) := wdata
      tag_array.io.w.mask.get(way) := wmask(way)
      io.resp(way) := tag_array.io.r.data(way)
    }

}

class TagBank(implicit p: DCacheParameters) extends DCacheModule{
    val io = IO(new Bundle(){
        val read  = Vec(4,Flipped(DecoupledIO(new TagReadReq)))
        val resp  = Output(Vec(4,Vec(8,UInt(36.W))))
        val write = Flipped(DecoupledIO(new TagWriteReq))
    })

    val tagarray = Seq.fill(4) {Module(new TagSRAMBank)}

}