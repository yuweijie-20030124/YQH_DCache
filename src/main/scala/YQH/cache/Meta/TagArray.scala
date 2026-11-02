// Tag 复制 3 份，对应 2 条 LoadPipe 和 1 条 MainPipe。
// 每份内部再把 4 路拆成 2 个 SRAM bank，每个 bank 存 2 个相邻 tag：
//   bank0 = way0、way1，bank1 = way2、way3。
// 读出一个 set 时两个 bank 都读。写只打开命中 way 所在的 bank，bank 内用 2 bit 掩码。
// 写的那一拍，所有复制体都不再普通读。同 bank 还有一个没被写的 tag，单端口 SRAM 读不出来，
// 所以不能只转发刚写入的那一个 tag。整次读停一拍，下一拍再读，看到的是新值。
package YQH.cache

import chisel3._
import chisel3.util._

import YQH.utils.SRAMTemplate

class TagReadReq(implicit p: DCacheParameters) extends DCacheBundle {
  val idx = UInt(idxBits.W)
  val way_en = UInt(nways.W)
}

class TagWriteReq(implicit p: DCacheParameters) extends TagReadReq {
  // WPU 已取消，Tag SRAM 不保存这个字段。写请求类型仍留着它，避免改端口。
  val vaddr = UInt(p.vtagBits.W)
  val tag = UInt(p.tagBits.W)
}

// 一个 bank：256 set，每个地址 2 个 tag。
class TagSRAMBank(implicit p: DCacheParameters) extends DCacheModule {
  val io = IO(new Bundle {
    val read = Input(Valid(UInt(idxBits.W)))
    val resp = Output(Vec(2, UInt(tagBits.W)))
    val respValid = Output(Bool())
    val write = Flipped(DecoupledIO(new Bundle {
      val idx = UInt(idxBits.W)
      val wayMask = UInt(2.W)
      val tag = UInt(tagBits.W)
    }))
  })

  val tagSram = Module(new SRAMTemplate(
    gen = UInt(tagBits.W),
    set = nsets,
    way = 2,
    singlePort = true,
    useBitmask = true,
  ))

  io.write.ready := true.B
  tagSram.io.w.en := io.write.valid
  tagSram.io.w.addr := io.write.bits.idx
  for (w <- 0 until 2) {
    tagSram.io.w.data(w) := io.write.bits.tag
    tagSram.io.w.mask.get(w) := io.write.bits.wayMask(w)
  }

  tagSram.io.r.en := io.read.valid && !io.write.valid
  tagSram.io.r.addr := io.read.bits
  io.resp := tagSram.io.r.data
  io.respValid := tagSram.io.r.valid
}

// 一份完整 Tag：2 个 bank，对外仍是 4 路。
class TagArray(implicit p: DCacheParameters) extends DCacheModule {
  val nTagBanks = 2
  require(nways == nTagBanks * 2)

  val io = IO(new Bundle {
    val read = Flipped(DecoupledIO(new TagReadReq))
    val resp = Output(Vec(nways, UInt(tagBits.W)))
    val respValid = Output(Bool())
    val write = Flipped(DecoupledIO(new TagWriteReq))
  })

  val banks = Seq.fill(nTagBanks)(Module(new TagSRAMBank))

  io.write.ready := true.B
  // 任一 bank 在写，这一拍的全 set 读都不能完成。
  io.read.ready := !io.write.valid

  for (b <- 0 until nTagBanks) {
    val wayMask = io.write.bits.way_en(2 * b + 1, 2 * b)
    banks(b).io.write.valid := io.write.valid && wayMask.orR
    banks(b).io.write.bits.idx := io.write.bits.idx
    banks(b).io.write.bits.wayMask := wayMask
    banks(b).io.write.bits.tag := io.write.bits.tag

    banks(b).io.read.valid := io.read.fire
    banks(b).io.read.bits := io.read.bits.idx
    io.resp(2 * b) := banks(b).io.resp(0)
    io.resp(2 * b + 1) := banks(b).io.resp(1)
  }
  io.respValid := RegNext(io.read.fire, false.B)

  assert(!io.write.valid || PopCount(io.write.bits.way_en) === 1.U,
    "tag write must select exactly one way")
}

class DuplicatedTagArray(implicit p: DCacheParameters) extends DCacheModule {
  val nReadPorts = loadPipelineWidth + 1

  val io = IO(new Bundle {
    val read = Vec(nReadPorts, Flipped(DecoupledIO(new TagReadReq)))
    val resp = Output(Vec(nReadPorts, Vec(nways, UInt(tagBits.W))))
    val respValid = Output(Vec(nReadPorts, Bool()))
    val write = Flipped(DecoupledIO(new TagWriteReq))
  })

  val arrays = Seq.fill(nReadPorts)(Module(new TagArray))
  io.write.ready := true.B

  for (i <- 0 until nReadPorts) {
    arrays(i).io.write.valid := io.write.valid
    arrays(i).io.write.bits := io.write.bits
    arrays(i).io.read <> io.read(i)
    io.resp(i) := arrays(i).io.resp
    io.respValid(i) := arrays(i).io.respValid
  }
}
