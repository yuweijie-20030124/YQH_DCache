package YQH.cache

import chisel3._
import chisel3.util._

//引入WPU的class
import YQH.cache.wpu._

class LoadPipeIO (implicit p:DCacheParameters) extends DCacheBundle{
    val lsu = Flipped(new DCacheLoadIO)
    val wpu = Flipped(new wpuBaseIO(nWays = nways, nPorts = 1))
    val load128 = Input(Bool())
    val nack    = Input(Bool()) //not ack拒绝接收，DCache不真正处理它，而是回一个replay ?

    // meta tag and data array read
    
    // meta array
    val meta_read = DecoupledIO(new MetaReadReq) // 读meta请求
    val meta_resp = Input(Vec(nways, new MetaData))  // meta响应，其实就回一个set中所有way的一致性状态 I SC UC UD

    val tag_read = DecoupledIO(new TagReadReq)          // 读tag请求
    val tag_resp = Input(Vec(nways,UInt(tagBits.W)))    // 返回所有way的tag的值
    val vtag_update = Flipped(DecoupledIO(new TagWriteReq)) //用来更新wpu预测信息的

    val banked_data_read = DecoupledIO(new L1BankedDataReadReqWithMask) //loadpipe -> data array
    val is128_req = Output(Bool()) // 读
    val banked_data_resp = Input(Vec(2,new L1BankedDataReadResult)) // dataarray -> loadpipe

    // banked data read conflict
    val bank_conflict_slow = Input(Bool())

    // send miss request to miss queue
    val miss_req    = DecoupledIO(new MissReq)
    val miss_resp   = Input(new MissResp)

    // send miss request to wbq
    val wbq_conflict_check = Valid(UInt())
    val wbq_block_miss_req = Input(Bool())

    // 替换way
    // update state vec in replacement algo 更新替换算法
    val replace_access = ValidIO(new ReplacementAccessBundle)
    // find the way to be replaced 查询哪一个way要被替换
    val replace_way = new ReplacementWayReqIO

    // 权限升级检查
    val occupy_set = Output(UInt()) // LoadPipe -> MissQueue：检查set
    // 保证了每个 set 至少保留 1 个 way 不被 权限升级 占用，可以保证有一路被替换
    val occupy_fail = Input(Bool()) // 这个set占用太多way了，不让升级权限

    // bank冲突就不允许快速replay
    val disable_ld_fast_wakeup = Input(Bool())

}

class LoadPipe(id:Int) (implicit p:DCacheParameters) extends DCacheModule{
    val io = IO(new LoadPipeIO)

    //assert
    assert(RegNext(io.meta_read.ready)) //meta的读端口永远就绪，因为是寄存器构建

    val s1_ready = Wire(Bool())
    val s2_ready = Wire(Bool())

    val acked_ready = io.tag_read.ready && s1_ready 
    val nacked_ready = true.B

/******************************LOAD PIPE**********************************/
// stage 0 —— send tag/meta read require && way predict req
    io.lsu.req.ready := (!io.nack && acked_ready) || (io.nack && nacked_ready)
    io.meta_read.valid := io.lsu.req.fire && !io.nack 
    io.tag_read.valid  := io.lsu.req.fire && !io.nack 

    val s0_valid = io.lsu.req.fire
    val s0_req   = WireInit(io.lsu.req.bits)
    val s0_fire = s0_valid && s1_ready
    val s0_vaddr = s0_req.vaddr
    val s0_replayCarry = s0_req.replayCarry
    val s0_load128Req = io.is128_req
    val s0_bank_oh_64 = UIntToOH(addr_to_dcache_bank(s0_vaddr))
    val s0_bank_oh_128 = (s0_bank_oh_64 << 1.U).asUInt | s0_bank_oh_64.asUInt
    val s0_bank_oh = Mux(s0_load128Req, s0_bank_oh_128, s0_bank_oh_64)
    
    // wpu
    io.wpu.req(0).bits.vaddr := s0_vaddr
    io.wpu.req(0).bits.replayCarry := s0_replayCarry
    io.wpu.req(0).valid := s0_valid

    // meta/tag read
    val meta_read = io.meta_read.bits
    val tag_read  = io.tag_read.bits

    meta_read.idx := get_idx(io.lsu.req.bits.vaddr) //读set的idx
    meta_read.way_en := ~0.U(nways.W)

    tag_read.idx := get_idx(io.lsu.req.bits.vaddr) 
    tag_read.way_en := ~0.U(nways.W)


// stage 1 —— get tag/meta data && check replacer && send data read require
    val s1_valid = RegInit(false.B)
  val s1_req = RegEnable(s0_req, s0_fire)
  // in stage 1, load unit gets the physical address
  val s1_paddr_dup_lsu = io.lsu.s1_paddr_dup_lsu
  val s1_paddr_dup_dcache = io.lsu.s1_paddr_dup_dcache
  val s1_load128Req = RegEnable(s0_load128Req, s0_fire)
  // LSU may update the address from io.lsu.s1_paddr, which affects the bank read enable only.
  val s1_vaddr_update = Cat(s1_req.vaddr(VAddrBits - 1, blockOffBits), io.lsu.s1_paddr_dup_lsu(blockOffBits - 1, 0))
  val s1_vaddr_update_dup = Cat(s1_req.vaddr_dup(VAddrBits - 1, blockOffBits), io.lsu.s1_paddr_dup_dcache(blockOffBits - 1, 0))
  val s1_vaddr = Mux(s1_load128Req, Cat(s1_vaddr_update(VAddrBits - 1, 4), 0.U(4.W)), s1_vaddr_update)
  val s1_vaddr_dup = Mux(s1_load128Req, Cat(s1_vaddr_update_dup(VAddrBits - 1, 4), 0.U(4.W)), s1_vaddr_update_dup)
  val s1_bank_oh = RegEnable(s0_bank_oh, s0_fire)
  val s1_nack = RegNext(io.nack)
  val s1_fire = s1_valid && s2_ready
  s1_ready := !s1_valid || s1_fire

  when (s0_fire) { s1_valid := true.B }
  .elsewhen (s1_fire) { s1_valid := false.B }

  // tag check
  def wayMap[T <: Data](f: Int => T) = VecInit((0 until nways).map(f))
  val meta_resp = io.meta_resp

  // resp in s1
  val s1_tag_resp = io.tag_resp
  // 当前 TagArray 传输的是原始 tag，还没有接入 ECC 编码和解码器。
  // 保留与每个 way 对齐的错误向量，后续接入 ECC 时只需替换这里。
  val s1_tag_errors = 0.U(nways.W)
  val s1_tag_match_way_dup_dc = wayMap(
    (w: Int) => s1_tag_resp(w) === get_tag(s1_paddr_dup_dcache) && meta_resp(w).isValid
  ).asUInt
  val s1_tag_match_way_dup_lsu = wayMap(
    (w: Int) => s1_tag_resp(w) === get_tag(s1_paddr_dup_lsu) && meta_resp(w).isValid
  ).asUInt
  val s1_wpu_pred_valid = RegEnable(io.wpu.resp(0).valid, s0_fire)
  val s1_wpu_pred_way_en = RegEnable(io.wpu.resp(0).bits.s0_pred_way_en, s0_fire)

  // lookup update
  io.wpu.lookup_upd(0).valid := s1_valid
  io.wpu.lookup_upd(0).bits.vaddr := s1_vaddr
  io.wpu.lookup_upd(0).bits.s1_real_way_en := s1_tag_match_way_dup_dc
  io.wpu.lookup_upd(0).bits.s1_pred_way_en := s1_wpu_pred_way_en
  // replace / tag write
  io.vtag_update.ready := true.B // 这里的wpu预测逻辑还没写呢
//   wpu.io.tagwrite_upd.valid := io.vtag_update.valid
//   wpu.io.tagwrite_upd.bits.vaddr := io.vtag_update.bits.vaddr
//   wpu.io.tagwrite_upd.bits.s1_real_way_en := io.vtag_update.bits.way_en

// stage 2 —— get dataarrar's data . if miss,send missreq to MissQueue and tell lsu to ?

// stage 3 —— renew the replacement state
}




