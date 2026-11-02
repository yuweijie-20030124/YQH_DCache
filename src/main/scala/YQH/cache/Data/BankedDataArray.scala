// 没有 WPU。一个 bank 一次读出该 set 的 4 路，s1 再用 tag 命中选择。
// 8 个 bank，每个 bank 一块单端口 SRAM，深度 256，数据 64 bit × 4 way。
// 两条 LoadPipe 读不同 bank 可以同拍完成。
// 同一个 bank 且 set 不同：LQ 更老的留下，后一条 replay。
// 同一个 bank 且 set 相同：一次读同时给两条，不 replay。
// 写优先。MainPipe 整行读优先于 Load。
package YQH.cache

import chisel3._
import chisel3.util._

import YQH.utils.SRAMTemplate

class L1BankedDataReadReq(implicit p: DCacheParameters) extends DCacheBundle {
  val way_en = Bits(nways.W)
  val addr = Bits(p.PAddrBits.W)
}

class L1BankedDataReadReqWithMask(implicit p: DCacheParameters) extends DCacheBundle {
  // 无 WPU，读的时候不看 way_en，该 bank 的 4 路都会出来。
  val way_en = Bits(nways.W)
  // addr(13, 6) 必须是 VIPT 的 set，也就是 vaddr 的 index，不能换成丢掉别名的 paddr。
  val addr = Bits(PAddrBits.W)
  val addr_dup = Bits(PAddrBits.W)
  val bankMask = Bits(DCacheBanks.W)
  val kill = Bool()
  val lqIdx = new LqPtr
}

// 一个 bank 的 4 路数据。Load 响应里第 0 拍是低 bank，第 1 拍是 128 bit 的高 bank。
class L1BankedDataReadResult(implicit p: DCacheParameters) extends DCacheBundle {
  val data = Vec(nways, UInt(DCacheWordBits.W))
}

class DataLineReadReq(implicit p: DCacheParameters) extends DCacheBundle {
  val addr = UInt(PAddrBits.W)
  val bankMask = UInt(DCacheBanks.W)
}

class DataLineReadResp(implicit p: DCacheParameters) extends DCacheBundle {
  val bankMask = UInt(DCacheBanks.W)
  val data = Vec(DCacheBanks, Vec(nways, UInt(DCacheWordBits.W)))
}

class DataWriteReq(implicit p: DCacheParameters) extends DCacheBundle {
  val addr = UInt(PAddrBits.W)
  val wayEn = UInt(nways.W)
  val bankMask = UInt(DCacheBanks.W)
  val data = Vec(DCacheBanks, UInt(DCacheWordBits.W))
}

class BankedDataArray(implicit p: DCacheParameters) extends DCacheModule {
  val nLoad = loadPipelineWidth

  val io = IO(new Bundle {
    val load = Vec(nLoad, Flipped(DecoupledIO(new L1BankedDataReadReqWithMask)))
    // 同拍不能读时拉高。调用方应 replay，不要干等 ready。
    val bankConflict = Output(Vec(nLoad, Bool()))
    val bankConflictSlow = Output(Vec(nLoad, Bool()))
    // (load)(bank拍)。下一拍有效，前提是上一拍 fire 且没有 conflict。
    val loadResp = Output(Vec(nLoad, Vec(2, new L1BankedDataReadResult)))
    val loadRespValid = Output(Vec(nLoad, Bool()))

    val line = Flipped(DecoupledIO(new DataLineReadReq))
    val lineResp = ValidIO(new DataLineReadResp)

    val write = Flipped(DecoupledIO(new DataWriteReq))
  })

  val banks = Seq.fill(DCacheBanks) {
    Module(new SRAMTemplate(
      gen = UInt(DCacheWordBits.W),
      set = nsets,
      way = nways,
      singlePort = true,
      useBitmask = true,
    ))
  }

  val loadGo = Wire(Vec(nLoad, Bool()))
  val loadIdx = Wire(Vec(nLoad, UInt(idxBits.W)))
  val loadMask = Wire(Vec(nLoad, UInt(DCacheBanks.W)))
  val loadBank0 = Wire(Vec(nLoad, UInt(DCacheBankBits.W)))
  for (i <- 0 until nLoad) {
    loadGo(i) := io.load(i).valid && !io.load(i).bits.kill
    loadIdx(i) := get_idx(io.load(i).bits.addr)
    loadMask(i) := io.load(i).bits.bankMask
    loadBank0(i) := addr_to_dcache_bank(io.load(i).bits.addr)
  }

  val writeMask = Mux(io.write.valid, io.write.bits.bankMask, 0.U)
  val lineIdx = get_idx(io.line.bits.addr)
  val lineMask = Mux(io.line.valid, io.line.bits.bankMask, 0.U)

  def overlap(a: UInt, b: UInt): Bool = (a & b) =/= 0.U

  val writeBlock = Wire(Vec(nLoad, Bool()))
  val lineBlock = Wire(Vec(nLoad, Bool()))
  val loadBlock = Wire(Vec(nLoad, Bool()))
  for (i <- 0 until nLoad) {
    writeBlock(i) := loadGo(i) && overlap(loadMask(i), writeMask)
    lineBlock(i) := loadGo(i) && overlap(loadMask(i), lineMask) && loadIdx(i) =/= lineIdx
  }

  // 两条 Load 抢同一个 bank。set 相同则共享这一次读。年龄相同则端口 0 留下。
  val both = loadGo(0) && loadGo(1) && overlap(loadMask(0), loadMask(1)) && loadIdx(0) =/= loadIdx(1)
  val port1Older = io.load(1).bits.lqIdx.isOlderThan(io.load(0).bits.lqIdx)
  loadBlock(0) := both && port1Older
  loadBlock(1) := both && !port1Older

  val conflict = Wire(Vec(nLoad, Bool()))
  for (i <- 0 until nLoad) {
    val kill = io.load(i).bits.kill
    conflict(i) := loadGo(i) && (lineBlock(i) || loadBlock(i))
    io.bankConflict(i) := conflict(i)
    io.load(i).ready := kill || (!writeBlock(i) && !lineBlock(i) && !loadBlock(i))
  }
  io.bankConflictSlow := RegNext(io.bankConflict)

  io.write.ready := true.B
  io.line.ready := !overlap(io.line.bits.bankMask, writeMask)

  val writeIdx = get_idx(io.write.bits.addr)
  for (b <- 0 until DCacheBanks) {
    val sram = banks(b)
    val writeThis = io.write.valid && io.write.bits.bankMask(b)
    sram.io.w.en := writeThis
    sram.io.w.addr := writeIdx
    for (w <- 0 until nways) {
      sram.io.w.data(w) := io.write.bits.data(b)
      sram.io.w.mask.get(w) := io.write.bits.wayEn(w)
    }

    val lineThis = io.line.fire && io.line.bits.bankMask(b)
    val loadThis = Wire(Vec(nLoad, Bool()))
    for (i <- 0 until nLoad) {
      loadThis(i) := io.load(i).fire && !io.load(i).bits.kill && !conflict(i) && loadMask(i)(b)
    }
    val loadRead = loadThis.asUInt.orR
    sram.io.r.en := !writeThis && (lineThis || loadRead)
    sram.io.r.addr := Mux(lineThis, lineIdx, Mux(loadThis(0), loadIdx(0), loadIdx(1)))
  }

  val readData = VecInit(banks.map(_.io.r.data))
  for (i <- 0 until nLoad) {
    val issue = io.load(i).fire && !io.load(i).bits.kill && !conflict(i)
    val bank0 = RegEnable(loadBank0(i), issue)
    val is128 = RegEnable(PopCount(loadMask(i)) > 1.U, issue)
    io.loadRespValid(i) := RegNext(issue, false.B)
    io.loadResp(i)(0).data := readData(bank0)
    io.loadResp(i)(1).data := readData(bank0 + 1.U)
    when(!is128) {
      io.loadResp(i)(1).data.foreach(_ := 0.U)
    }
  }

  val lineIssue = io.line.fire
  io.lineResp.valid := RegNext(lineIssue, false.B)
  io.lineResp.bits.bankMask := RegEnable(io.line.bits.bankMask, lineIssue)
  io.lineResp.bits.data := readData

  assert(!io.write.valid || PopCount(io.write.bits.wayEn) <= 1.U,
    "data write must select at most one way")
  for (i <- 0 until nLoad) {
    val is128 = io.load(i).valid && PopCount(io.load(i).bits.bankMask) > 1.U
    assert(!is128 || !loadBank0(i)(0),
      "128-bit data read must start on an even bank")
  }
}
