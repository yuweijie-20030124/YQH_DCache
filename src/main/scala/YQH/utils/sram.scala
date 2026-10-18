package YQH.utils

import chisel3._
import chisel3.util._

/**
  * SRAM 的读端口。
  *
  * 在 SRAMTemplate 里通过 Flipped 使用：
  *   - r.en / r.addr 是 SRAM 的输入
  *   - r.data / r.valid 是 SRAM 的输出
  */
class SRAMReadBus[T <: Data](gen: T, set: Int, way: Int) extends Bundle {
  require(set > 0, s"SRAM set 必须 > 0，当前是 $set")
  require(way > 0, s"SRAM way 必须 > 0，当前是 $way")

  private val addrWidth = math.max(1, log2Ceil(set))

  val en    = Output(Bool())
  val addr  = Output(UInt(addrWidth.W))
  val data  = Input(Vec(way, gen.cloneType))
  val valid = Input(Bool())
}

/**
  * SRAM 的写端口。
  *
  * 在 SRAMTemplate 里通过 Flipped 使用：
  *   - w.en / w.addr / w.data 是 SRAM 的输入
  */
class SRAMWriteBus[T <: Data](gen: T, set: Int, way: Int, useBitmask: Boolean = false) extends Bundle {
  require(set > 0, s"SRAM set 必须 > 0，当前是 $set")
  require(way > 0, s"SRAM way 必须 > 0，当前是 $way")

  private val addrWidth = math.max(1, log2Ceil(set))

  val en   = Output(Bool())
  val addr = Output(UInt(addrWidth.W))
  val data = Output(Vec(way, gen.cloneType))
  val mask = if (useBitmask) Some(Output(Vec(way, Bool()))) else None
}

/**
  * 单端口 SRAM 模板。
  *
  * 端口形状参考 Rocket-Chip：
  *
  *   val sram = Module(new SRAMTemplate(
  *     UInt(p.tagBits.W), p.nSets, way = 2, useBitmask = true
  *   ))
  *
  *   // 读：当前周期给 r.en/r.addr，下一周期看 r.valid/r.data
  *   sram.io.r.en   := readEnable
  *   sram.io.r.addr := readAddr
  *   val readData   = sram.io.r.data
  *   val readValid  = sram.io.r.valid
  *
  *   // 写：当前周期给 w.en/w.addr/w.data
  *   sram.io.w.en   := writeEnable
  *   sram.io.w.addr := writeAddr
  *   sram.io.w.data := writeData
  *   sram.io.w.mask.get(0) := writeWay0
  *   sram.io.w.mask.get(1) := writeWay1
  *
  * 一个地址对应一个 Vec(way, gen)：
  *   - way = 1：普通单路 SRAM
  *   - way = 2：一次读出一个 set 的两路数据
  *
  * 这里实现的是单端口 SRAM：
  *   - r.en = 1, w.en = 0：读
  *   - r.en = 0, w.en = 1：写
  *   - r.en = 1, w.en = 1：写优先，本周期读无效
  */
class SRAMTemplate[T <: Data](
    gen: T,
    set: Int,
    way: Int = 1,
    singlePort: Boolean = true,
    useBitmask: Boolean = false,
) extends Module {
  require(set > 0, s"SRAM set 必须 > 0，当前是 $set")
  require(way > 0, s"SRAM way 必须 > 0，当前是 $way")
  require(singlePort, "当前 SRAMTemplate 只实现单端口模式")

  val io = IO(new Bundle {
    val r = Flipped(new SRAMReadBus(gen, set, way))
    val w = Flipped(new SRAMWriteBus(gen, set, way, useBitmask))
  })

  // 每个地址保存 way 个 gen。
  val mem = SyncReadMem(set, Vec(way, gen.cloneType))

  // 单端口仲裁：写优先，读写同时请求时不发起读。
  val readEnable = io.r.en && !io.w.en

  io.r.data  := mem.read(io.r.addr, readEnable)
  io.r.valid := RegNext(readEnable, false.B)

  when(io.w.en) {
    if (useBitmask) {
      mem.write(io.w.addr, io.w.data, io.w.mask.get)
    } else {
      mem.write(io.w.addr, io.w.data)
    }
  }
}
