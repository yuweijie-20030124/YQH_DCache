package sim

import chisel3._
import chisel3.stage.ChiselStage
import chisel3.util._
import YQH.cache._

// 只给 DCache 的 storebuffer 口打一笔 store。
// Load、原子、CMO 都不发。L2 的 RX 通道保持 valid=0，不接 L2Cache。
// TXREQ 的 ready 置 1，只为了让这一拍握手留在波形里，后面没有 Comp/CompData。
//
// 这一笔是整行写，mask 全 1。缓存复位后是 I，预期 miss，
// TXREQ opcode 应为 MakeUnique(0x12)，txnId=0，addr=0x80001000，tagAlias=vaddr[13:12]=1。
class StoreOnlyTb(implicit p: DCacheParameters) extends Module {
  val io = IO(new Bundle {
    val storeValid = Output(Bool())
    val storeReady = Output(Bool())
    val storeFire = Output(Bool())
    val txreqValid = Output(Bool())
    val txreqReady = Output(Bool())
    val txreqFire = Output(Bool())
    val txreqOpcode = Output(UInt(6.W))
    val txreqAddr = Output(UInt(48.W))
    val txreqTxnId = Output(UInt(8.W))
    val txreqTagAlias = Output(UInt(2.W))
    val txreqSeen = Output(Bool())
  })

  val dut = Module(new DCache)

  val cycle = RegInit(0.U(8.W))
  val sent = RegInit(false.B)
  cycle := cycle + 1.U

  val storeAddr = "h80001000".U(48.W)
  val storeGo = cycle >= 4.U && !sent
  dut.io.store.req.valid := storeGo
  dut.io.store.req.bits.cmd := "b00001".U
  dut.io.store.req.bits.vaddr := storeAddr
  dut.io.store.req.bits.addr := storeAddr
  dut.io.store.req.bits.data := "h0123456789abcdef".U
  dut.io.store.req.bits.mask := Fill(64, 1.U(1.W))
  dut.io.store.req.bits.id := 7.U
  when(dut.io.store.req.fire) {
    sent := true.B
  }
  dut.io.store.main_pipe_hit_resp.ready := true.B
  dut.io.store.refill_hit_resp.ready := true.B
  dut.io.store.replay_resp.ready := true.B

  for (i <- 0 until 2) {
    val ld = dut.io.load(i)
    ld.req.valid := false.B
    ld.req.bits := 0.U.asTypeOf(new DCacheWordReq)
    ld.resp.ready := true.B
    ld.s1_kill_data_read := false.B
    ld.s1_kill := false.B
    ld.s2_kill := false.B
    ld.s0_pc := 0.U
    ld.s1_pc := 0.U
    ld.s2_pc := 0.U
    ld.replacementUpdated := false.B
    ld.is128Req := false.B
    ld.s1_paddr_dup_lsu := 0.U
    ld.s1_paddr_dup_dcache := 0.U
  }

  dut.io.atomics.req.valid := false.B
  dut.io.atomics.req.bits := 0.U.asTypeOf(new MainPipeReq)
  dut.io.atomics.resp.ready := true.B
  dut.io.atomics.replay.ready := true.B

  dut.io.cmoReq.valid := false.B
  dut.io.cmoReq.bits := 0.U.asTypeOf(new CmoReq)
  dut.io.cmoResp.ready := true.B
  dut.io.wfi.req := false.B

  dut.io.l2.req.ready := true.B
  dut.io.l2.evt.ready := true.B
  dut.io.l2.txRsp.ready := true.B
  dut.io.l2.txDat.ready := true.B
  dut.io.l2.rxRsp.valid := false.B
  dut.io.l2.rxRsp.bits := 0.U.asTypeOf(dut.io.l2.rxRsp.bits)
  dut.io.l2.rxDat.valid := false.B
  dut.io.l2.rxDat.bits := 0.U.asTypeOf(dut.io.l2.rxDat.bits)
  dut.io.l2.rxSnp.valid := false.B
  dut.io.l2.rxSnp.bits := 0.U.asTypeOf(dut.io.l2.rxSnp.bits)

  dut.io.forwardMshr.id := 0.U
  dut.io.forwardMshr.half := false.B
  dut.io.refillWakeup.ready := true.B
  dut.io.loadReplay.ready := true.B

  val txreqSeen = RegInit(false.B)
  when(dut.io.l2.req.fire) {
    txreqSeen := true.B
  }

  io.storeValid := dut.io.store.req.valid
  io.storeReady := dut.io.store.req.ready
  io.storeFire := dut.io.store.req.fire
  io.txreqValid := dut.io.l2.req.valid
  io.txreqReady := dut.io.l2.req.ready
  io.txreqFire := dut.io.l2.req.fire
  io.txreqOpcode := dut.io.l2.req.bits.opcode
  io.txreqAddr := dut.io.l2.req.bits.addr
  io.txreqTxnId := dut.io.l2.req.bits.txnID
  io.txreqTagAlias := dut.io.l2.req.bits.tagAlias
  io.txreqSeen := txreqSeen
}

object storeTbMain extends App {
  implicit val p: DCacheParameters = DCacheParameters()
  (new ChiselStage).emitVerilog(new StoreOnlyTb, args)
}
