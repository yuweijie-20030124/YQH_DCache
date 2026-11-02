// Meta 用寄存器。256 set × 4 way，每路 2 bit：I/SC/UC/UD。
// 读打一拍，和 Tag、Data 的同步 SRAM 对齐。一份寄存器供 3 个读口同时读。
package YQH.cache

import chisel3._
import chisel3.util._

// read meta class
class MetaReadReq(implicit p: DCacheParameters) extends DCacheBundle {
  val idx = UInt(idxBits.W)
  val way_en = UInt(nways.W)
}

class MetaWriteReq(implicit p: DCacheParameters) extends MetaReadReq {
  val meta = new MetaData
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

// read(0)、read(1) 给两条 LoadPipe，read(2) 给 MainPipe。
// 读口永远 ready。同一个 set 在写的这一拍，读口打进寄存器的是新值。
class MetaArray(implicit p: DCacheParameters) extends DCacheModule {
  val nReadPorts = loadPipelineWidth + 1

  val io = IO(new Bundle {
    val read = Vec(nReadPorts, Flipped(DecoupledIO(new MetaReadReq)))
    val resp = Output(Vec(nReadPorts, Vec(nways, new MetaData)))
    val respValid = Output(Vec(nReadPorts, Bool()))
    val write = Flipped(DecoupledIO(new MetaWriteReq))
  })

  val meta = RegInit(0.U.asTypeOf(Vec(nsets, Vec(nways, new MetaData))))

  io.write.ready := true.B
  when(io.write.fire) {
    for (w <- 0 until nways) {
      when(io.write.bits.way_en(w)) {
        meta(io.write.bits.idx)(w) := io.write.bits.meta
      }
    }
  }
  assert(!io.write.valid || PopCount(io.write.bits.way_en) <= 1.U,
    "meta write must select at most one way")

  for (i <- 0 until nReadPorts) {
    val req = io.read(i)
    req.ready := true.B
    // 同 set 同拍写要 forward。读仍打一拍，下一拍看到的是新 Meta。
    val readData = Wire(Vec(nways, new MetaData))
    readData := meta(req.bits.idx)
    when(io.write.fire && io.write.bits.idx === req.bits.idx) {
      for (w <- 0 until nways) {
        when(io.write.bits.way_en(w)) {
          readData(w) := io.write.bits.meta
        }
      }
    }
    io.resp(i) := RegEnable(readData, req.fire)
    io.respValid(i) := RegNext(req.fire, false.B)
  }
}
