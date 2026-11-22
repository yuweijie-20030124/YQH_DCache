module DCache(
  input          clock,
  input          reset,
  output         io_load_0_req_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_load_0_req_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [4:0]   io_load_0_req_bits_cmd, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [47:0]  io_load_0_req_bits_vaddr, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [47:0]  io_load_0_req_bits_vaddr_dup, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [127:0] io_load_0_req_bits_data, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [15:0]  io_load_0_req_bits_mask, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [5:0]   io_load_0_req_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [3:0]   io_load_0_req_bits_instrtype, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_load_0_req_bits_isFirstIssue, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [3:0]   io_load_0_req_bits_replayCarry_real_way_en, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_load_0_req_bits_replayCarry_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_load_0_req_bits_lqIdx_flag, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [3:0]   io_load_0_req_bits_lqIdx_value, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_load_0_resp_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_0_resp_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [127:0] io_load_0_resp_bits_data, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [5:0]   io_load_0_resp_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_0_resp_bits_miss, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_0_resp_bits_replay, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [3:0]   io_load_0_resp_bits_replayCarry_real_way_en, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_0_resp_bits_replayCarry_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [3:0]   io_load_0_resp_bits_mshr_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_0_resp_bits_handled, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_0_resp_bits_real_miss, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_0_resp_bits_replacementUpdated, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_load_0_s1_kill_data_read, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_load_0_s1_kill, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_load_0_s2_kill, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [47:0]  io_load_0_s0_pc, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [47:0]  io_load_0_s1_pc, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [47:0]  io_load_0_s2_pc, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_load_0_replacementUpdated, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_load_0_is128Req, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [47:0]  io_load_0_s1_paddr_dup_lsu, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [47:0]  io_load_0_s1_paddr_dup_dcache, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_0_s1_disable_fast_wakeup, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_0_s2_hit, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_0_s2_first_hit, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_0_s2_bank_conflict, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_0_s2_wpu_pred_fail, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_0_s2_mq_nack, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_1_req_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_load_1_req_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [4:0]   io_load_1_req_bits_cmd, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [47:0]  io_load_1_req_bits_vaddr, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [47:0]  io_load_1_req_bits_vaddr_dup, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [127:0] io_load_1_req_bits_data, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [15:0]  io_load_1_req_bits_mask, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [5:0]   io_load_1_req_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [3:0]   io_load_1_req_bits_instrtype, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_load_1_req_bits_isFirstIssue, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [3:0]   io_load_1_req_bits_replayCarry_real_way_en, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_load_1_req_bits_replayCarry_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_load_1_req_bits_lqIdx_flag, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [3:0]   io_load_1_req_bits_lqIdx_value, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_load_1_resp_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_1_resp_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [127:0] io_load_1_resp_bits_data, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [5:0]   io_load_1_resp_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_1_resp_bits_miss, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_1_resp_bits_replay, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [3:0]   io_load_1_resp_bits_replayCarry_real_way_en, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_1_resp_bits_replayCarry_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [3:0]   io_load_1_resp_bits_mshr_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_1_resp_bits_handled, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_1_resp_bits_real_miss, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_1_resp_bits_replacementUpdated, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_load_1_s1_kill_data_read, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_load_1_s1_kill, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_load_1_s2_kill, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [47:0]  io_load_1_s0_pc, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [47:0]  io_load_1_s1_pc, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [47:0]  io_load_1_s2_pc, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_load_1_replacementUpdated, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_load_1_is128Req, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [47:0]  io_load_1_s1_paddr_dup_lsu, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [47:0]  io_load_1_s1_paddr_dup_dcache, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_1_s1_disable_fast_wakeup, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_1_s2_hit, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_1_s2_first_hit, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_1_s2_bank_conflict, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_1_s2_wpu_pred_fail, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_load_1_s2_mq_nack, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_store_req_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_store_req_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [4:0]   io_store_req_bits_cmd, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [47:0]  io_store_req_bits_vaddr, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [47:0]  io_store_req_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [511:0] io_store_req_bits_data, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [63:0]  io_store_req_bits_mask, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [5:0]   io_store_req_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_store_main_pipe_hit_resp_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_store_main_pipe_hit_resp_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_store_main_pipe_hit_resp_bits_miss, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_store_main_pipe_hit_resp_bits_replay, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [5:0]   io_store_main_pipe_hit_resp_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_store_refill_hit_resp_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_store_refill_hit_resp_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_store_refill_hit_resp_bits_miss, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_store_refill_hit_resp_bits_replay, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [5:0]   io_store_refill_hit_resp_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_store_replay_resp_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_store_replay_resp_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_store_replay_resp_bits_miss, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_store_replay_resp_bits_replay, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [5:0]   io_store_replay_resp_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_atomics_req_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_atomics_req_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [4:0]   io_atomics_req_bits_cmd, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [47:0]  io_atomics_req_bits_vaddr, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [47:0]  io_atomics_req_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [1:0]   io_atomics_req_bits_tagAlias, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [5:0]   io_atomics_req_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [3:0]   io_atomics_req_bits_missId, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [47:0]  io_atomics_req_bits_pc, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [2:0]   io_atomics_req_bits_wordIdx, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [127:0] io_atomics_req_bits_amoData, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [15:0]  io_atomics_req_bits_amoMask, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [127:0] io_atomics_req_bits_amoCmp, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [1:0]   io_atomics_req_bits_probeOp, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_atomics_req_bits_needData, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [7:0]   io_atomics_req_bits_snpTxnId, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [3:0]   io_atomics_req_bits_replaceWay, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_atomics_resp_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_atomics_resp_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [5:0]   io_atomics_resp_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [4:0]   io_atomics_resp_bits_cmd, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [127:0] io_atomics_resp_bits_data, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_atomics_resp_bits_success, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_atomics_replay_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_atomics_replay_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_atomics_replay_bits_miss, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_atomics_replay_bits_replay, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [5:0]   io_atomics_replay_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_cmoReq_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_cmoReq_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [5:0]   io_cmoReq_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [5:0]   io_cmoReq_bits_opcode, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [47:0]  io_cmoReq_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [1:0]   io_cmoReq_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_cmoResp_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_cmoResp_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [5:0]   io_cmoResp_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_cmoResp_bits_done, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_cmoResp_bits_error, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_wfi_req, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_wfi_safe, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_l2_req_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_l2_req_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [7:0]   io_l2_req_bits_txnID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [6:0]   io_l2_req_bits_srcID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [6:0]   io_l2_req_bits_tgtID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [5:0]   io_l2_req_bits_opcode, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [2:0]   io_l2_req_bits_size, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [47:0]  io_l2_req_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [1:0]   io_l2_req_bits_tagAlias, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_l2_req_bits_ns, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [1:0]   io_l2_req_bits_order, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [3:0]   io_l2_req_bits_memAttr, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_l2_req_bits_excl, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_l2_req_bits_expCompData, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_l2_req_bits_expCompStash, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_l2_req_bits_wayValid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [1:0]   io_l2_req_bits_way, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_l2_req_bits_traceTag, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_l2_evt_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_l2_evt_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [7:0]   io_l2_evt_bits_txnID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [6:0]   io_l2_evt_bits_srcID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [6:0]   io_l2_evt_bits_tgtID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_l2_evt_bits_opcode, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [47:0]  io_l2_evt_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_l2_evt_bits_ns, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_l2_evt_bits_memAttr, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_l2_evt_bits_wayValid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [1:0]   io_l2_evt_bits_way, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_l2_evt_bits_traceTag, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_l2_txRsp_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_l2_txRsp_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [7:0]   io_l2_txRsp_bits_txnID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [6:0]   io_l2_txRsp_bits_srcID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [6:0]   io_l2_txRsp_bits_tgtID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_l2_txRsp_bits_opcode, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [1:0]   io_l2_txRsp_bits_respErr, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [2:0]   io_l2_txRsp_bits_resp, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_l2_txRsp_bits_traceTag, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_l2_txDat_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_l2_txDat_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [7:0]   io_l2_txDat_bits_txnID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [6:0]   io_l2_txDat_bits_srcID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [6:0]   io_l2_txDat_bits_tgtID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [1:0]   io_l2_txDat_bits_opcode, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [1:0]   io_l2_txDat_bits_respErr, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [2:0]   io_l2_txDat_bits_resp, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_l2_txDat_bits_dataID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [255:0] io_l2_txDat_bits_data, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [31:0]  io_l2_txDat_bits_byteEnable, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_l2_txDat_bits_traceTag, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_l2_rxRsp_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_l2_rxRsp_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [7:0]   io_l2_rxRsp_bits_txnID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [6:0]   io_l2_rxRsp_bits_srcID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [6:0]   io_l2_rxRsp_bits_tgtID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [2:0]   io_l2_rxRsp_bits_opcode, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [7:0]   io_l2_rxRsp_bits_dbID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [1:0]   io_l2_rxRsp_bits_respErr, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [2:0]   io_l2_rxRsp_bits_resp, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [2:0]   io_l2_rxRsp_bits_cBusy, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_l2_rxRsp_bits_traceTag, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_l2_rxDat_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_l2_rxDat_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [7:0]   io_l2_rxDat_bits_txnID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [6:0]   io_l2_rxDat_bits_srcID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [6:0]   io_l2_rxDat_bits_tgtID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_l2_rxDat_bits_opcode, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [7:0]   io_l2_rxDat_bits_dbID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [1:0]   io_l2_rxDat_bits_respErr, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [2:0]   io_l2_rxDat_bits_resp, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [4:0]   io_l2_rxDat_bits_dataSource, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [2:0]   io_l2_rxDat_bits_cBusy, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_l2_rxDat_bits_dataID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [255:0] io_l2_rxDat_bits_data, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_l2_rxDat_bits_traceTag, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_l2_rxSnp_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_l2_rxSnp_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [7:0]   io_l2_rxSnp_bits_txnID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [6:0]   io_l2_rxSnp_bits_srcID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [6:0]   io_l2_rxSnp_bits_tgtID, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [1:0]   io_l2_rxSnp_bits_opcode, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [44:0]  io_l2_rxSnp_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [1:0]   io_l2_rxSnp_bits_tagAlias, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_l2_rxSnp_bits_ns, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_l2_rxSnp_bits_traceTag, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_forwardChi_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [3:0]   io_forwardChi_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_forwardChi_bits_half, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [255:0] io_forwardChi_bits_data, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input  [3:0]   io_forwardMshr_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_forwardMshr_half, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_forwardMshr_data_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [255:0] io_forwardMshr_data_bits, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_refillWakeup_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_refillWakeup_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [3:0]   io_refillWakeup_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [47:0]  io_refillWakeup_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [1:0]   io_refillWakeup_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  input          io_loadReplay_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output         io_loadReplay_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [3:0]   io_loadReplay_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [47:0]  io_loadReplay_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
  output [1:0]   io_loadReplay_bits_alias // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 211:14]
);
  wire  tags_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire  tags_reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire  tags_io_read_0_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire  tags_io_read_0_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire [7:0] tags_io_read_0_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire  tags_io_read_1_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire  tags_io_read_1_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire [7:0] tags_io_read_1_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire  tags_io_read_2_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire  tags_io_read_2_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire [7:0] tags_io_read_2_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire [35:0] tags_io_resp_0_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire [35:0] tags_io_resp_0_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire [35:0] tags_io_resp_0_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire [35:0] tags_io_resp_0_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire [35:0] tags_io_resp_1_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire [35:0] tags_io_resp_1_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire [35:0] tags_io_resp_1_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire [35:0] tags_io_resp_1_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire [35:0] tags_io_resp_2_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire [35:0] tags_io_resp_2_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire [35:0] tags_io_resp_2_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire [35:0] tags_io_resp_2_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire  tags_io_write_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire [7:0] tags_io_write_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire [3:0] tags_io_write_bits_way_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire [35:0] tags_io_write_bits_tag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
  wire  meta_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire  meta_reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire  meta_io_read_0_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire  meta_io_read_0_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire [7:0] meta_io_read_0_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire  meta_io_read_1_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire  meta_io_read_1_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire [7:0] meta_io_read_1_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire  meta_io_read_2_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire  meta_io_read_2_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire [7:0] meta_io_read_2_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire [1:0] meta_io_resp_0_0_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire [1:0] meta_io_resp_0_1_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire [1:0] meta_io_resp_0_2_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire [1:0] meta_io_resp_0_3_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire [1:0] meta_io_resp_1_0_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire [1:0] meta_io_resp_1_1_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire [1:0] meta_io_resp_1_2_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire [1:0] meta_io_resp_1_3_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire [1:0] meta_io_resp_2_0_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire [1:0] meta_io_resp_2_1_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire [1:0] meta_io_resp_2_2_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire [1:0] meta_io_resp_2_3_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire  meta_io_write_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire  meta_io_write_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire [7:0] meta_io_write_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire [3:0] meta_io_write_bits_way_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire [1:0] meta_io_write_bits_meta_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
  wire  data_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire  data_reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire  data_io_load_0_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire  data_io_load_0_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [47:0] data_io_load_0_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [7:0] data_io_load_0_bits_bankMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire  data_io_load_0_bits_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire  data_io_load_0_bits_lqIdx_flag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [3:0] data_io_load_0_bits_lqIdx_value; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire  data_io_load_1_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire  data_io_load_1_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [47:0] data_io_load_1_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [7:0] data_io_load_1_bits_bankMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire  data_io_load_1_bits_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire  data_io_load_1_bits_lqIdx_flag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [3:0] data_io_load_1_bits_lqIdx_value; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire  data_io_bankConflict_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire  data_io_bankConflict_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_loadResp_0_0_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_loadResp_0_0_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_loadResp_0_0_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_loadResp_0_0_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_loadResp_0_1_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_loadResp_0_1_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_loadResp_0_1_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_loadResp_0_1_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_loadResp_1_0_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_loadResp_1_0_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_loadResp_1_0_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_loadResp_1_0_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_loadResp_1_1_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_loadResp_1_1_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_loadResp_1_1_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_loadResp_1_1_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire  data_io_line_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire  data_io_line_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [47:0] data_io_line_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [7:0] data_io_line_bits_bankMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire  data_io_lineResp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_0_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_0_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_0_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_0_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_1_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_1_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_1_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_1_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_2_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_2_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_2_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_2_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_3_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_3_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_3_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_3_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_4_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_4_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_4_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_4_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_5_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_5_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_5_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_5_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_6_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_6_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_6_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_6_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_7_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_7_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_7_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_lineResp_bits_data_7_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire  data_io_write_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [47:0] data_io_write_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [3:0] data_io_write_bits_wayEn; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [7:0] data_io_write_bits_bankMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_write_bits_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_write_bits_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_write_bits_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_write_bits_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_write_bits_data_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_write_bits_data_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_write_bits_data_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire [63:0] data_io_write_bits_data_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
  wire  loads_0_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_lsu_req_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_lsu_req_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [4:0] loads_0_io_lsu_req_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [47:0] loads_0_io_lsu_req_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [5:0] loads_0_io_lsu_req_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_lsu_req_bits_isFirstIssue; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_lsu_req_bits_lqIdx_flag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [3:0] loads_0_io_lsu_req_bits_lqIdx_value; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_lsu_resp_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_lsu_resp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [127:0] loads_0_io_lsu_resp_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [5:0] loads_0_io_lsu_resp_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_lsu_resp_bits_miss; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_lsu_resp_bits_replay; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [3:0] loads_0_io_lsu_resp_bits_replayCarry_real_way_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_lsu_resp_bits_replayCarry_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [3:0] loads_0_io_lsu_resp_bits_mshr_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_lsu_resp_bits_handled; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_lsu_resp_bits_real_miss; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_lsu_resp_bits_replacementUpdated; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_lsu_s1_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_lsu_s2_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_lsu_is128Req; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [47:0] loads_0_io_lsu_s1_paddr_dup_lsu; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [47:0] loads_0_io_lsu_s1_paddr_dup_dcache; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_lsu_s1_disable_fast_wakeup; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_lsu_s2_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_lsu_s2_first_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_lsu_s2_bank_conflict; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_lsu_s2_mq_nack; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_meta_read_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [7:0] loads_0_io_meta_read_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [1:0] loads_0_io_meta_resp_0_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [1:0] loads_0_io_meta_resp_1_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [1:0] loads_0_io_meta_resp_2_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [1:0] loads_0_io_meta_resp_3_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_tag_read_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_tag_read_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [7:0] loads_0_io_tag_read_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [35:0] loads_0_io_tag_resp_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [35:0] loads_0_io_tag_resp_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [35:0] loads_0_io_tag_resp_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [35:0] loads_0_io_tag_resp_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_banked_data_read_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_banked_data_read_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [47:0] loads_0_io_banked_data_read_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [7:0] loads_0_io_banked_data_read_bits_bankMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_banked_data_read_bits_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_banked_data_read_bits_lqIdx_flag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [3:0] loads_0_io_banked_data_read_bits_lqIdx_value; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [63:0] loads_0_io_banked_data_resp_0_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [63:0] loads_0_io_banked_data_resp_0_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [63:0] loads_0_io_banked_data_resp_0_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [63:0] loads_0_io_banked_data_resp_0_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [63:0] loads_0_io_banked_data_resp_1_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [63:0] loads_0_io_banked_data_resp_1_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [63:0] loads_0_io_banked_data_resp_1_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [63:0] loads_0_io_banked_data_resp_1_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_bank_conflict; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_miss_req_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_miss_req_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [3:0] loads_0_io_miss_req_bits_source; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [4:0] loads_0_io_miss_req_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [47:0] loads_0_io_miss_req_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [47:0] loads_0_io_miss_req_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [5:0] loads_0_io_miss_req_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_miss_req_bits_scToUnique; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [3:0] loads_0_io_miss_req_bits_occupy_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [3:0] loads_0_io_miss_resp_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_miss_resp_handled; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_wbq_conflict_check_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [47:0] loads_0_io_wbq_conflict_check_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_wbq_block_miss_req; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_replace_access_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [7:0] loads_0_io_replace_access_bits_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [1:0] loads_0_io_replace_access_bits_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_unique_occupy_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [7:0] loads_0_io_unique_occupy_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_unique_occupy_fail; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_0_io_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_lsu_req_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_lsu_req_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [4:0] loads_1_io_lsu_req_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [47:0] loads_1_io_lsu_req_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [5:0] loads_1_io_lsu_req_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_lsu_req_bits_isFirstIssue; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_lsu_req_bits_lqIdx_flag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [3:0] loads_1_io_lsu_req_bits_lqIdx_value; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_lsu_resp_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_lsu_resp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [127:0] loads_1_io_lsu_resp_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [5:0] loads_1_io_lsu_resp_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_lsu_resp_bits_miss; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_lsu_resp_bits_replay; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [3:0] loads_1_io_lsu_resp_bits_replayCarry_real_way_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_lsu_resp_bits_replayCarry_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [3:0] loads_1_io_lsu_resp_bits_mshr_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_lsu_resp_bits_handled; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_lsu_resp_bits_real_miss; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_lsu_resp_bits_replacementUpdated; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_lsu_s1_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_lsu_s2_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_lsu_is128Req; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [47:0] loads_1_io_lsu_s1_paddr_dup_lsu; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [47:0] loads_1_io_lsu_s1_paddr_dup_dcache; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_lsu_s1_disable_fast_wakeup; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_lsu_s2_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_lsu_s2_first_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_lsu_s2_bank_conflict; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_lsu_s2_mq_nack; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_meta_read_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [7:0] loads_1_io_meta_read_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [1:0] loads_1_io_meta_resp_0_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [1:0] loads_1_io_meta_resp_1_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [1:0] loads_1_io_meta_resp_2_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [1:0] loads_1_io_meta_resp_3_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_tag_read_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_tag_read_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [7:0] loads_1_io_tag_read_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [35:0] loads_1_io_tag_resp_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [35:0] loads_1_io_tag_resp_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [35:0] loads_1_io_tag_resp_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [35:0] loads_1_io_tag_resp_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_banked_data_read_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_banked_data_read_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [47:0] loads_1_io_banked_data_read_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [7:0] loads_1_io_banked_data_read_bits_bankMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_banked_data_read_bits_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_banked_data_read_bits_lqIdx_flag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [3:0] loads_1_io_banked_data_read_bits_lqIdx_value; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [63:0] loads_1_io_banked_data_resp_0_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [63:0] loads_1_io_banked_data_resp_0_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [63:0] loads_1_io_banked_data_resp_0_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [63:0] loads_1_io_banked_data_resp_0_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [63:0] loads_1_io_banked_data_resp_1_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [63:0] loads_1_io_banked_data_resp_1_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [63:0] loads_1_io_banked_data_resp_1_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [63:0] loads_1_io_banked_data_resp_1_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_bank_conflict; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_miss_req_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_miss_req_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [3:0] loads_1_io_miss_req_bits_source; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [4:0] loads_1_io_miss_req_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [47:0] loads_1_io_miss_req_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [47:0] loads_1_io_miss_req_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [5:0] loads_1_io_miss_req_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_miss_req_bits_scToUnique; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [3:0] loads_1_io_miss_req_bits_occupy_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [3:0] loads_1_io_miss_resp_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_miss_resp_handled; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_wbq_conflict_check_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [47:0] loads_1_io_wbq_conflict_check_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_wbq_block_miss_req; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_replace_access_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [7:0] loads_1_io_replace_access_bits_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [1:0] loads_1_io_replace_access_bits_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_unique_occupy_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire [7:0] loads_1_io_unique_occupy_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_unique_occupy_fail; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  loads_1_io_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
  wire  pipe_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_probe_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_probe_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [47:0] pipe_io_probe_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [47:0] pipe_io_probe_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [1:0] pipe_io_probe_bits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [5:0] pipe_io_probe_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [1:0] pipe_io_probe_bits_probeOp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [7:0] pipe_io_probe_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_refill_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_refill_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [4:0] pipe_io_refill_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [47:0] pipe_io_refill_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [47:0] pipe_io_refill_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [5:0] pipe_io_refill_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [3:0] pipe_io_refill_bits_missId; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [2:0] pipe_io_refill_bits_wordIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [127:0] pipe_io_refill_bits_amoData; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [15:0] pipe_io_refill_bits_amoMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [127:0] pipe_io_refill_bits_amoCmp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [3:0] pipe_io_refill_bits_replaceWay; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_store_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_store_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [4:0] pipe_io_store_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [47:0] pipe_io_store_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [47:0] pipe_io_store_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [511:0] pipe_io_store_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_store_bits_mask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [5:0] pipe_io_store_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_atomic_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_atomic_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [4:0] pipe_io_atomic_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [47:0] pipe_io_atomic_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [47:0] pipe_io_atomic_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [5:0] pipe_io_atomic_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [3:0] pipe_io_atomic_bits_missId; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [2:0] pipe_io_atomic_bits_wordIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [127:0] pipe_io_atomic_bits_amoData; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [15:0] pipe_io_atomic_bits_amoMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [127:0] pipe_io_atomic_bits_amoCmp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [1:0] pipe_io_atomic_bits_probeOp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_atomic_bits_needData; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [7:0] pipe_io_atomic_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [3:0] pipe_io_atomic_bits_replaceWay; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_tagRead_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_tagRead_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [7:0] pipe_io_tagRead_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [35:0] pipe_io_tagResp_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [35:0] pipe_io_tagResp_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [35:0] pipe_io_tagResp_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [35:0] pipe_io_tagResp_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_metaRead_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [7:0] pipe_io_metaRead_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [1:0] pipe_io_metaResp_0_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [1:0] pipe_io_metaResp_1_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [1:0] pipe_io_metaResp_2_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [1:0] pipe_io_metaResp_3_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_dataRead_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_dataRead_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [47:0] pipe_io_dataRead_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [7:0] pipe_io_dataRead_bits_bankMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_dataResp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_0_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_0_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_0_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_0_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_1_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_1_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_1_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_1_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_2_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_2_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_2_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_2_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_3_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_3_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_3_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_3_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_4_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_4_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_4_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_4_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_5_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_5_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_5_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_5_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_6_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_6_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_6_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_6_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_7_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_7_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_7_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataResp_bits_data_7_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_tagWrite_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [7:0] pipe_io_tagWrite_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [3:0] pipe_io_tagWrite_bits_way_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [35:0] pipe_io_tagWrite_bits_tag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_metaWrite_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [7:0] pipe_io_metaWrite_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [3:0] pipe_io_metaWrite_bits_way_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [1:0] pipe_io_metaWrite_bits_meta_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_dataWrite_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [47:0] pipe_io_dataWrite_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [3:0] pipe_io_dataWrite_bits_wayEn; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [7:0] pipe_io_dataWrite_bits_bankMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataWrite_bits_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataWrite_bits_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataWrite_bits_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataWrite_bits_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataWrite_bits_data_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataWrite_bits_data_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataWrite_bits_data_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_dataWrite_bits_data_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_missReq_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_missReq_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [3:0] pipe_io_missReq_bits_source; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [4:0] pipe_io_missReq_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [47:0] pipe_io_missReq_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [47:0] pipe_io_missReq_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_missReq_bits_full_overwrite; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [2:0] pipe_io_missReq_bits_word_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [127:0] pipe_io_missReq_bits_amo_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [15:0] pipe_io_missReq_bits_amo_mask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [127:0] pipe_io_missReq_bits_amo_cmp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [5:0] pipe_io_missReq_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_missReq_bits_scToUnique; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [3:0] pipe_io_missReq_bits_occupy_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [511:0] pipe_io_missReq_bits_store_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_missReq_bits_store_mask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_missResp_handled; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_missResp_sameAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_refillInfo_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [511:0] pipe_io_refillInfo_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_refillInfo_bits_retUnique; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_refillInfo_bits_passDirty; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [511:0] pipe_io_refillInfo_bits_storeData; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [63:0] pipe_io_refillInfo_bits_storeMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_refillInfo_bits_error; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_mainpipeInfo_s2Refill; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [3:0] pipe_io_mainpipeInfo_s2MissId; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_mainpipeInfo_s3Done; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [3:0] pipe_io_mainpipeInfo_s3MissId; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_mainpipeInfo_installed; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [1:0] pipe_io_mainpipeInfo_finalCoh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_pendingSnoop_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [3:0] pipe_io_pendingSnoop_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_pendingInvalidate; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_occupySet_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [7:0] pipe_io_occupySet_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [3:0] pipe_io_occupyWay; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_occupyFail; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_replaceQuery_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [47:0] pipe_io_replaceQuery_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_replaceBlock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_wbQuery_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [47:0] pipe_io_wbQuery_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_wbBlock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_wbReq_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_wbReq_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [511:0] pipe_io_wbReq_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [47:0] pipe_io_wbReq_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [2:0] pipe_io_wbReq_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [2:0] pipe_io_wbReq_bits_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_wbReq_bits_passDirty; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [7:0] pipe_io_wbReq_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_probeResp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [5:0] pipe_io_probeResp_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_atomicResp_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_atomicResp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [5:0] pipe_io_atomicResp_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [4:0] pipe_io_atomicResp_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [127:0] pipe_io_atomicResp_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_atomicResp_bits_success; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_atomicReplay_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_atomicReplay_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [5:0] pipe_io_atomicReplay_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_storeHit_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_storeHit_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [5:0] pipe_io_storeHit_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_storeReplay_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_storeReplay_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [5:0] pipe_io_storeReplay_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_lrsc_blocked_block_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [47:0] pipe_io_lrsc_blocked_block_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_update_resv_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_replaceAccess_0_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [7:0] pipe_io_replaceAccess_0_bits_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [1:0] pipe_io_replaceAccess_0_bits_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_replaceAccess_1_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [7:0] pipe_io_replaceAccess_1_bits_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [1:0] pipe_io_replaceAccess_1_bits_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_snoopNotice_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [47:0] pipe_io_snoopNotice_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire [1:0] pipe_io_snoopNotice_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  pipe_io_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
  wire  miss_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_missReq_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [3:0] miss_io_missReq_bits_source; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [4:0] miss_io_missReq_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_missReq_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_missReq_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_missReq_bits_full_overwrite; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [2:0] miss_io_missReq_bits_word_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [127:0] miss_io_missReq_bits_amo_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [15:0] miss_io_missReq_bits_amo_mask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [127:0] miss_io_missReq_bits_amo_cmp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [5:0] miss_io_missReq_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_missReq_bits_scToUnique; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [3:0] miss_io_missReq_bits_occupy_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [511:0] miss_io_missReq_bits_store_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [63:0] miss_io_missReq_bits_store_mask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [3:0] miss_io_missResp_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_missResp_handled; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_missResp_sameAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_replaceQuery_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_replaceQuery_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_replaceBlock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_refill_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_refill_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [4:0] miss_io_refill_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_refill_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_refill_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [5:0] miss_io_refill_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [3:0] miss_io_refill_bits_missId; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [2:0] miss_io_refill_bits_wordIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [127:0] miss_io_refill_bits_amoData; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [15:0] miss_io_refill_bits_amoMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [127:0] miss_io_refill_bits_amoCmp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [3:0] miss_io_refill_bits_replaceWay; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_refillInfo_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [511:0] miss_io_refillInfo_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_refillInfo_bits_retUnique; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_refillInfo_bits_passDirty; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [511:0] miss_io_refillInfo_bits_storeData; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [63:0] miss_io_refillInfo_bits_storeMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_refillInfo_bits_error; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_mainpipeInfo_s2Refill; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [3:0] miss_io_mainpipeInfo_s2MissId; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_mainpipeInfo_s3Done; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [3:0] miss_io_mainpipeInfo_s3MissId; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_mainpipeInfo_installed; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_mainpipeInfo_finalCoh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_pendingQuery_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [3:0] miss_io_pendingQuery_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_pendingInvalidate; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_cmoReq_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_cmoReq_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [5:0] miss_io_cmoReq_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [5:0] miss_io_cmoReq_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_cmoReq_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_cmoReq_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_cmoResp_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_cmoResp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [5:0] miss_io_cmoResp_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_cmoResp_bits_error; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_cmoQuery_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_cmoQuery_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_cmoWbBlock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_wfi_safe; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_occupySet_0_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [7:0] miss_io_occupySet_0_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_occupySet_1_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [7:0] miss_io_occupySet_1_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_occupySet_2_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [7:0] miss_io_occupySet_2_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [3:0] miss_io_occupyWay_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_occupyFail_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_occupyFail_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_occupyFail_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_txReq_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_txReq_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [7:0] miss_io_txReq_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [5:0] miss_io_txReq_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_txReq_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_txReq_bits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_txReq_bits_expCompData; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_txReq_bits_expCompStash; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_rxDat_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_rxDat_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [7:0] miss_io_rxDat_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [6:0] miss_io_rxDat_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_rxDat_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [7:0] miss_io_rxDat_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_rxDat_bits_respErr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [2:0] miss_io_rxDat_bits_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_rxDat_bits_dataID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [255:0] miss_io_rxDat_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_rxDat_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_rxRsp_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_rxRsp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [7:0] miss_io_rxRsp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [6:0] miss_io_rxRsp_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [2:0] miss_io_rxRsp_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [7:0] miss_io_rxRsp_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_rxRsp_bits_respErr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [2:0] miss_io_rxRsp_bits_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_rxRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_txRsp_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_txRsp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [7:0] miss_io_txRsp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [6:0] miss_io_txRsp_bits_tgtID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_txRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_forwardChi_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [3:0] miss_io_forwardChi_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_forwardChi_bits_half; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [255:0] miss_io_forwardChi_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [3:0] miss_io_forwardMshr_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_forwardMshr_half; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_forwardMshr_data_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [255:0] miss_io_forwardMshr_data_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_refillWakeup_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_refillWakeup_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [3:0] miss_io_refillWakeup_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_refillWakeup_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_refillWakeup_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_loadReplay_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_loadReplay_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [3:0] miss_io_loadReplay_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_loadReplay_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_loadReplay_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_storeDone_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_storeDone_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [5:0] miss_io_storeDone_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_storeReplay_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_storeReplay_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [5:0] miss_io_storeReplay_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_snoop_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_snoop_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_snoop_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_probeDrop_0_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_probeDrop_0_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_probeDrop_0_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_probeDrop_1_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_probeDrop_1_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_probeDrop_1_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_probeDrop_2_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_probeDrop_2_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_probeDrop_2_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_probeDrop_3_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_probeDrop_3_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_probeDrop_3_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_probeDrop_4_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_probeDrop_4_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_probeDrop_4_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_probeDrop_5_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_probeDrop_5_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_probeDrop_5_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_probeDrop_6_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_probeDrop_6_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_probeDrop_6_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_probeDrop_7_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_probeDrop_7_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_probeDrop_7_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_probeDrop_8_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_probeDrop_8_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_probeDrop_8_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_probeDrop_9_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_probeDrop_9_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_probeDrop_9_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_probeDrop_10_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_probeDrop_10_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_probeDrop_10_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_probeDrop_11_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_probeDrop_11_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_probeDrop_11_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_probeDrop_12_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_probeDrop_12_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_probeDrop_12_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_probeDrop_13_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_probeDrop_13_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_probeDrop_13_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_probeDrop_14_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_probeDrop_14_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_probeDrop_14_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_probeDrop_15_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_probeDrop_15_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_probeDrop_15_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_snoopHold_0_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_snoopHold_0_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_snoopHold_0_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_snoopHold_1_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_snoopHold_1_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_snoopHold_1_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_snoopHold_2_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_snoopHold_2_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_snoopHold_2_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_snoopHold_3_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_snoopHold_3_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_snoopHold_3_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_snoopHold_4_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_snoopHold_4_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_snoopHold_4_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_snoopHold_5_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_snoopHold_5_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_snoopHold_5_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_snoopHold_6_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_snoopHold_6_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_snoopHold_6_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_snoopHold_7_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_snoopHold_7_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_snoopHold_7_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_snoopHold_8_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_snoopHold_8_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_snoopHold_8_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_snoopHold_9_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_snoopHold_9_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_snoopHold_9_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_snoopHold_10_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_snoopHold_10_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_snoopHold_10_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_snoopHold_11_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_snoopHold_11_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_snoopHold_11_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_snoopHold_12_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_snoopHold_12_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_snoopHold_12_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_snoopHold_13_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_snoopHold_13_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_snoopHold_13_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_snoopHold_14_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_snoopHold_14_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_snoopHold_14_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  miss_io_snoopHold_15_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [47:0] miss_io_snoopHold_15_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire [1:0] miss_io_snoopHold_15_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
  wire  arb_io_in_0_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire  arb_io_in_0_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [3:0] arb_io_in_0_bits_source; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [4:0] arb_io_in_0_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [47:0] arb_io_in_0_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [47:0] arb_io_in_0_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire  arb_io_in_0_bits_full_overwrite; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [2:0] arb_io_in_0_bits_word_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [127:0] arb_io_in_0_bits_amo_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [15:0] arb_io_in_0_bits_amo_mask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [127:0] arb_io_in_0_bits_amo_cmp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [5:0] arb_io_in_0_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire  arb_io_in_0_bits_scToUnique; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [3:0] arb_io_in_0_bits_occupy_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [511:0] arb_io_in_0_bits_store_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [63:0] arb_io_in_0_bits_store_mask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire  arb_io_in_1_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire  arb_io_in_1_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [3:0] arb_io_in_1_bits_source; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [4:0] arb_io_in_1_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [47:0] arb_io_in_1_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [47:0] arb_io_in_1_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [5:0] arb_io_in_1_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire  arb_io_in_1_bits_scToUnique; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [3:0] arb_io_in_1_bits_occupy_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire  arb_io_in_2_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire  arb_io_in_2_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [3:0] arb_io_in_2_bits_source; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [4:0] arb_io_in_2_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [47:0] arb_io_in_2_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [47:0] arb_io_in_2_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [5:0] arb_io_in_2_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire  arb_io_in_2_bits_scToUnique; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [3:0] arb_io_in_2_bits_occupy_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire  arb_io_out_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [3:0] arb_io_out_bits_source; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [4:0] arb_io_out_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [47:0] arb_io_out_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [47:0] arb_io_out_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire  arb_io_out_bits_full_overwrite; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [2:0] arb_io_out_bits_word_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [127:0] arb_io_out_bits_amo_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [15:0] arb_io_out_bits_amo_mask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [127:0] arb_io_out_bits_amo_cmp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [5:0] arb_io_out_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire  arb_io_out_bits_scToUnique; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [3:0] arb_io_out_bits_occupy_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [511:0] arb_io_out_bits_store_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire [63:0] arb_io_out_bits_store_mask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
  wire  wb_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_req_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_req_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire [511:0] wb_io_req_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire [47:0] wb_io_req_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire [2:0] wb_io_req_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire [2:0] wb_io_req_bits_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_req_bits_passDirty; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire [7:0] wb_io_req_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_txEvt_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_txEvt_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire [7:0] wb_io_txEvt_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_txEvt_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire [47:0] wb_io_txEvt_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_txEvt_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_txDat_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_txDat_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire [7:0] wb_io_txDat_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire [6:0] wb_io_txDat_bits_tgtID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire [1:0] wb_io_txDat_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire [2:0] wb_io_txDat_bits_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_txDat_bits_dataID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire [255:0] wb_io_txDat_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_txDat_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_txRsp_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_txRsp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire [7:0] wb_io_txRsp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire [2:0] wb_io_txRsp_bits_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_txRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_rxRsp_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_rxRsp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire [7:0] wb_io_rxRsp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire [6:0] wb_io_rxRsp_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire [2:0] wb_io_rxRsp_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire [7:0] wb_io_rxRsp_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_rxRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_blockQuery_0_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire [47:0] wb_io_blockQuery_0_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_blockQuery_1_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire [47:0] wb_io_blockQuery_1_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_blockQuery_2_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire [47:0] wb_io_blockQuery_2_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_blockQuery_3_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire [47:0] wb_io_blockQuery_3_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_block_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_block_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_block_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_block_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  wb_io_wfi_safe; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
  wire  probe_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_rxSnp_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_rxSnp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [7:0] probe_io_rxSnp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_rxSnp_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [44:0] probe_io_rxSnp_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_rxSnp_bits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_pipeReq_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_pipeReq_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_pipeReq_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_pipeReq_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_pipeReq_bits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [5:0] probe_io_pipeReq_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_pipeReq_bits_probeOp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_pipeReq_bits_needData; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [7:0] probe_io_pipeReq_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_probeResp_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_probeResp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [5:0] probe_io_probeResp_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_lrscLockedBlock_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_lrscLockedBlock_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_updateResvSet; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_missHold_0_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_missHold_0_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_missHold_0_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_missHold_1_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_missHold_1_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_missHold_1_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_missHold_2_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_missHold_2_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_missHold_2_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_missHold_3_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_missHold_3_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_missHold_3_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_missHold_4_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_missHold_4_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_missHold_4_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_missHold_5_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_missHold_5_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_missHold_5_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_missHold_6_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_missHold_6_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_missHold_6_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_missHold_7_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_missHold_7_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_missHold_7_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_missHold_8_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_missHold_8_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_missHold_8_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_missHold_9_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_missHold_9_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_missHold_9_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_missHold_10_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_missHold_10_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_missHold_10_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_missHold_11_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_missHold_11_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_missHold_11_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_missHold_12_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_missHold_12_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_missHold_12_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_missHold_13_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_missHold_13_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_missHold_13_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_missHold_14_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_missHold_14_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_missHold_14_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_missHold_15_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_missHold_15_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_missHold_15_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_dropLine_0_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_dropLine_0_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_dropLine_0_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_dropLine_1_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_dropLine_1_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_dropLine_1_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_dropLine_2_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_dropLine_2_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_dropLine_2_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_dropLine_3_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_dropLine_3_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_dropLine_3_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_dropLine_4_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_dropLine_4_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_dropLine_4_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_dropLine_5_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_dropLine_5_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_dropLine_5_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_dropLine_6_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_dropLine_6_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_dropLine_6_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_dropLine_7_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_dropLine_7_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_dropLine_7_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_dropLine_8_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_dropLine_8_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_dropLine_8_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_dropLine_9_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_dropLine_9_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_dropLine_9_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_dropLine_10_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_dropLine_10_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_dropLine_10_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_dropLine_11_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_dropLine_11_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_dropLine_11_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_dropLine_12_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_dropLine_12_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_dropLine_12_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_dropLine_13_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_dropLine_13_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_dropLine_13_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_dropLine_14_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_dropLine_14_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_dropLine_14_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_dropLine_15_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [47:0] probe_io_dropLine_15_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire [1:0] probe_io_dropLine_15_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  probe_io_wfi_safe; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
  wire  rspToMiss = io_l2_rxRsp_bits_txnID <= 8'h10; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 324:25]
  wire  rspToWb = io_l2_rxRsp_bits_txnID >= 8'h11 & io_l2_rxRsp_bits_txnID < 8'h23; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 325:43]
  wire  loadBusy = loads_0_io_busy | loads_1_io_busy; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 343:48]
  wire  _T_3 = ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 346:9]
  wire  _T_5 = io_l2_rxDat_ready & io_l2_rxDat_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire  _T_11 = wb_io_txRsp_ready & wb_io_txRsp_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire  _T_12 = miss_io_txRsp_ready & miss_io_txRsp_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire [1:0] _T_13 = _T_11 + _T_12; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 350:18]
  DuplicatedTagArray tags ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 213:20]
    .clock(tags_clock),
    .reset(tags_reset),
    .io_read_0_ready(tags_io_read_0_ready),
    .io_read_0_valid(tags_io_read_0_valid),
    .io_read_0_bits_idx(tags_io_read_0_bits_idx),
    .io_read_1_ready(tags_io_read_1_ready),
    .io_read_1_valid(tags_io_read_1_valid),
    .io_read_1_bits_idx(tags_io_read_1_bits_idx),
    .io_read_2_ready(tags_io_read_2_ready),
    .io_read_2_valid(tags_io_read_2_valid),
    .io_read_2_bits_idx(tags_io_read_2_bits_idx),
    .io_resp_0_0(tags_io_resp_0_0),
    .io_resp_0_1(tags_io_resp_0_1),
    .io_resp_0_2(tags_io_resp_0_2),
    .io_resp_0_3(tags_io_resp_0_3),
    .io_resp_1_0(tags_io_resp_1_0),
    .io_resp_1_1(tags_io_resp_1_1),
    .io_resp_1_2(tags_io_resp_1_2),
    .io_resp_1_3(tags_io_resp_1_3),
    .io_resp_2_0(tags_io_resp_2_0),
    .io_resp_2_1(tags_io_resp_2_1),
    .io_resp_2_2(tags_io_resp_2_2),
    .io_resp_2_3(tags_io_resp_2_3),
    .io_write_valid(tags_io_write_valid),
    .io_write_bits_idx(tags_io_write_bits_idx),
    .io_write_bits_way_en(tags_io_write_bits_way_en),
    .io_write_bits_tag(tags_io_write_bits_tag)
  );
  MetaArray meta ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 214:20]
    .clock(meta_clock),
    .reset(meta_reset),
    .io_read_0_ready(meta_io_read_0_ready),
    .io_read_0_valid(meta_io_read_0_valid),
    .io_read_0_bits_idx(meta_io_read_0_bits_idx),
    .io_read_1_ready(meta_io_read_1_ready),
    .io_read_1_valid(meta_io_read_1_valid),
    .io_read_1_bits_idx(meta_io_read_1_bits_idx),
    .io_read_2_ready(meta_io_read_2_ready),
    .io_read_2_valid(meta_io_read_2_valid),
    .io_read_2_bits_idx(meta_io_read_2_bits_idx),
    .io_resp_0_0_coh(meta_io_resp_0_0_coh),
    .io_resp_0_1_coh(meta_io_resp_0_1_coh),
    .io_resp_0_2_coh(meta_io_resp_0_2_coh),
    .io_resp_0_3_coh(meta_io_resp_0_3_coh),
    .io_resp_1_0_coh(meta_io_resp_1_0_coh),
    .io_resp_1_1_coh(meta_io_resp_1_1_coh),
    .io_resp_1_2_coh(meta_io_resp_1_2_coh),
    .io_resp_1_3_coh(meta_io_resp_1_3_coh),
    .io_resp_2_0_coh(meta_io_resp_2_0_coh),
    .io_resp_2_1_coh(meta_io_resp_2_1_coh),
    .io_resp_2_2_coh(meta_io_resp_2_2_coh),
    .io_resp_2_3_coh(meta_io_resp_2_3_coh),
    .io_write_ready(meta_io_write_ready),
    .io_write_valid(meta_io_write_valid),
    .io_write_bits_idx(meta_io_write_bits_idx),
    .io_write_bits_way_en(meta_io_write_bits_way_en),
    .io_write_bits_meta_coh(meta_io_write_bits_meta_coh)
  );
  BankedDataArray data ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 215:20]
    .clock(data_clock),
    .reset(data_reset),
    .io_load_0_ready(data_io_load_0_ready),
    .io_load_0_valid(data_io_load_0_valid),
    .io_load_0_bits_addr(data_io_load_0_bits_addr),
    .io_load_0_bits_bankMask(data_io_load_0_bits_bankMask),
    .io_load_0_bits_kill(data_io_load_0_bits_kill),
    .io_load_0_bits_lqIdx_flag(data_io_load_0_bits_lqIdx_flag),
    .io_load_0_bits_lqIdx_value(data_io_load_0_bits_lqIdx_value),
    .io_load_1_ready(data_io_load_1_ready),
    .io_load_1_valid(data_io_load_1_valid),
    .io_load_1_bits_addr(data_io_load_1_bits_addr),
    .io_load_1_bits_bankMask(data_io_load_1_bits_bankMask),
    .io_load_1_bits_kill(data_io_load_1_bits_kill),
    .io_load_1_bits_lqIdx_flag(data_io_load_1_bits_lqIdx_flag),
    .io_load_1_bits_lqIdx_value(data_io_load_1_bits_lqIdx_value),
    .io_bankConflict_0(data_io_bankConflict_0),
    .io_bankConflict_1(data_io_bankConflict_1),
    .io_loadResp_0_0_data_0(data_io_loadResp_0_0_data_0),
    .io_loadResp_0_0_data_1(data_io_loadResp_0_0_data_1),
    .io_loadResp_0_0_data_2(data_io_loadResp_0_0_data_2),
    .io_loadResp_0_0_data_3(data_io_loadResp_0_0_data_3),
    .io_loadResp_0_1_data_0(data_io_loadResp_0_1_data_0),
    .io_loadResp_0_1_data_1(data_io_loadResp_0_1_data_1),
    .io_loadResp_0_1_data_2(data_io_loadResp_0_1_data_2),
    .io_loadResp_0_1_data_3(data_io_loadResp_0_1_data_3),
    .io_loadResp_1_0_data_0(data_io_loadResp_1_0_data_0),
    .io_loadResp_1_0_data_1(data_io_loadResp_1_0_data_1),
    .io_loadResp_1_0_data_2(data_io_loadResp_1_0_data_2),
    .io_loadResp_1_0_data_3(data_io_loadResp_1_0_data_3),
    .io_loadResp_1_1_data_0(data_io_loadResp_1_1_data_0),
    .io_loadResp_1_1_data_1(data_io_loadResp_1_1_data_1),
    .io_loadResp_1_1_data_2(data_io_loadResp_1_1_data_2),
    .io_loadResp_1_1_data_3(data_io_loadResp_1_1_data_3),
    .io_line_ready(data_io_line_ready),
    .io_line_valid(data_io_line_valid),
    .io_line_bits_addr(data_io_line_bits_addr),
    .io_line_bits_bankMask(data_io_line_bits_bankMask),
    .io_lineResp_valid(data_io_lineResp_valid),
    .io_lineResp_bits_data_0_0(data_io_lineResp_bits_data_0_0),
    .io_lineResp_bits_data_0_1(data_io_lineResp_bits_data_0_1),
    .io_lineResp_bits_data_0_2(data_io_lineResp_bits_data_0_2),
    .io_lineResp_bits_data_0_3(data_io_lineResp_bits_data_0_3),
    .io_lineResp_bits_data_1_0(data_io_lineResp_bits_data_1_0),
    .io_lineResp_bits_data_1_1(data_io_lineResp_bits_data_1_1),
    .io_lineResp_bits_data_1_2(data_io_lineResp_bits_data_1_2),
    .io_lineResp_bits_data_1_3(data_io_lineResp_bits_data_1_3),
    .io_lineResp_bits_data_2_0(data_io_lineResp_bits_data_2_0),
    .io_lineResp_bits_data_2_1(data_io_lineResp_bits_data_2_1),
    .io_lineResp_bits_data_2_2(data_io_lineResp_bits_data_2_2),
    .io_lineResp_bits_data_2_3(data_io_lineResp_bits_data_2_3),
    .io_lineResp_bits_data_3_0(data_io_lineResp_bits_data_3_0),
    .io_lineResp_bits_data_3_1(data_io_lineResp_bits_data_3_1),
    .io_lineResp_bits_data_3_2(data_io_lineResp_bits_data_3_2),
    .io_lineResp_bits_data_3_3(data_io_lineResp_bits_data_3_3),
    .io_lineResp_bits_data_4_0(data_io_lineResp_bits_data_4_0),
    .io_lineResp_bits_data_4_1(data_io_lineResp_bits_data_4_1),
    .io_lineResp_bits_data_4_2(data_io_lineResp_bits_data_4_2),
    .io_lineResp_bits_data_4_3(data_io_lineResp_bits_data_4_3),
    .io_lineResp_bits_data_5_0(data_io_lineResp_bits_data_5_0),
    .io_lineResp_bits_data_5_1(data_io_lineResp_bits_data_5_1),
    .io_lineResp_bits_data_5_2(data_io_lineResp_bits_data_5_2),
    .io_lineResp_bits_data_5_3(data_io_lineResp_bits_data_5_3),
    .io_lineResp_bits_data_6_0(data_io_lineResp_bits_data_6_0),
    .io_lineResp_bits_data_6_1(data_io_lineResp_bits_data_6_1),
    .io_lineResp_bits_data_6_2(data_io_lineResp_bits_data_6_2),
    .io_lineResp_bits_data_6_3(data_io_lineResp_bits_data_6_3),
    .io_lineResp_bits_data_7_0(data_io_lineResp_bits_data_7_0),
    .io_lineResp_bits_data_7_1(data_io_lineResp_bits_data_7_1),
    .io_lineResp_bits_data_7_2(data_io_lineResp_bits_data_7_2),
    .io_lineResp_bits_data_7_3(data_io_lineResp_bits_data_7_3),
    .io_write_valid(data_io_write_valid),
    .io_write_bits_addr(data_io_write_bits_addr),
    .io_write_bits_wayEn(data_io_write_bits_wayEn),
    .io_write_bits_bankMask(data_io_write_bits_bankMask),
    .io_write_bits_data_0(data_io_write_bits_data_0),
    .io_write_bits_data_1(data_io_write_bits_data_1),
    .io_write_bits_data_2(data_io_write_bits_data_2),
    .io_write_bits_data_3(data_io_write_bits_data_3),
    .io_write_bits_data_4(data_io_write_bits_data_4),
    .io_write_bits_data_5(data_io_write_bits_data_5),
    .io_write_bits_data_6(data_io_write_bits_data_6),
    .io_write_bits_data_7(data_io_write_bits_data_7)
  );
  LoadPipe loads_0 ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
    .clock(loads_0_clock),
    .reset(loads_0_reset),
    .io_lsu_req_ready(loads_0_io_lsu_req_ready),
    .io_lsu_req_valid(loads_0_io_lsu_req_valid),
    .io_lsu_req_bits_cmd(loads_0_io_lsu_req_bits_cmd),
    .io_lsu_req_bits_vaddr(loads_0_io_lsu_req_bits_vaddr),
    .io_lsu_req_bits_id(loads_0_io_lsu_req_bits_id),
    .io_lsu_req_bits_isFirstIssue(loads_0_io_lsu_req_bits_isFirstIssue),
    .io_lsu_req_bits_lqIdx_flag(loads_0_io_lsu_req_bits_lqIdx_flag),
    .io_lsu_req_bits_lqIdx_value(loads_0_io_lsu_req_bits_lqIdx_value),
    .io_lsu_resp_ready(loads_0_io_lsu_resp_ready),
    .io_lsu_resp_valid(loads_0_io_lsu_resp_valid),
    .io_lsu_resp_bits_data(loads_0_io_lsu_resp_bits_data),
    .io_lsu_resp_bits_id(loads_0_io_lsu_resp_bits_id),
    .io_lsu_resp_bits_miss(loads_0_io_lsu_resp_bits_miss),
    .io_lsu_resp_bits_replay(loads_0_io_lsu_resp_bits_replay),
    .io_lsu_resp_bits_replayCarry_real_way_en(loads_0_io_lsu_resp_bits_replayCarry_real_way_en),
    .io_lsu_resp_bits_replayCarry_valid(loads_0_io_lsu_resp_bits_replayCarry_valid),
    .io_lsu_resp_bits_mshr_id(loads_0_io_lsu_resp_bits_mshr_id),
    .io_lsu_resp_bits_handled(loads_0_io_lsu_resp_bits_handled),
    .io_lsu_resp_bits_real_miss(loads_0_io_lsu_resp_bits_real_miss),
    .io_lsu_resp_bits_replacementUpdated(loads_0_io_lsu_resp_bits_replacementUpdated),
    .io_lsu_s1_kill(loads_0_io_lsu_s1_kill),
    .io_lsu_s2_kill(loads_0_io_lsu_s2_kill),
    .io_lsu_is128Req(loads_0_io_lsu_is128Req),
    .io_lsu_s1_paddr_dup_lsu(loads_0_io_lsu_s1_paddr_dup_lsu),
    .io_lsu_s1_paddr_dup_dcache(loads_0_io_lsu_s1_paddr_dup_dcache),
    .io_lsu_s1_disable_fast_wakeup(loads_0_io_lsu_s1_disable_fast_wakeup),
    .io_lsu_s2_hit(loads_0_io_lsu_s2_hit),
    .io_lsu_s2_first_hit(loads_0_io_lsu_s2_first_hit),
    .io_lsu_s2_bank_conflict(loads_0_io_lsu_s2_bank_conflict),
    .io_lsu_s2_mq_nack(loads_0_io_lsu_s2_mq_nack),
    .io_meta_read_valid(loads_0_io_meta_read_valid),
    .io_meta_read_bits_idx(loads_0_io_meta_read_bits_idx),
    .io_meta_resp_0_coh(loads_0_io_meta_resp_0_coh),
    .io_meta_resp_1_coh(loads_0_io_meta_resp_1_coh),
    .io_meta_resp_2_coh(loads_0_io_meta_resp_2_coh),
    .io_meta_resp_3_coh(loads_0_io_meta_resp_3_coh),
    .io_tag_read_ready(loads_0_io_tag_read_ready),
    .io_tag_read_valid(loads_0_io_tag_read_valid),
    .io_tag_read_bits_idx(loads_0_io_tag_read_bits_idx),
    .io_tag_resp_0(loads_0_io_tag_resp_0),
    .io_tag_resp_1(loads_0_io_tag_resp_1),
    .io_tag_resp_2(loads_0_io_tag_resp_2),
    .io_tag_resp_3(loads_0_io_tag_resp_3),
    .io_banked_data_read_ready(loads_0_io_banked_data_read_ready),
    .io_banked_data_read_valid(loads_0_io_banked_data_read_valid),
    .io_banked_data_read_bits_addr(loads_0_io_banked_data_read_bits_addr),
    .io_banked_data_read_bits_bankMask(loads_0_io_banked_data_read_bits_bankMask),
    .io_banked_data_read_bits_kill(loads_0_io_banked_data_read_bits_kill),
    .io_banked_data_read_bits_lqIdx_flag(loads_0_io_banked_data_read_bits_lqIdx_flag),
    .io_banked_data_read_bits_lqIdx_value(loads_0_io_banked_data_read_bits_lqIdx_value),
    .io_banked_data_resp_0_data_0(loads_0_io_banked_data_resp_0_data_0),
    .io_banked_data_resp_0_data_1(loads_0_io_banked_data_resp_0_data_1),
    .io_banked_data_resp_0_data_2(loads_0_io_banked_data_resp_0_data_2),
    .io_banked_data_resp_0_data_3(loads_0_io_banked_data_resp_0_data_3),
    .io_banked_data_resp_1_data_0(loads_0_io_banked_data_resp_1_data_0),
    .io_banked_data_resp_1_data_1(loads_0_io_banked_data_resp_1_data_1),
    .io_banked_data_resp_1_data_2(loads_0_io_banked_data_resp_1_data_2),
    .io_banked_data_resp_1_data_3(loads_0_io_banked_data_resp_1_data_3),
    .io_bank_conflict(loads_0_io_bank_conflict),
    .io_miss_req_ready(loads_0_io_miss_req_ready),
    .io_miss_req_valid(loads_0_io_miss_req_valid),
    .io_miss_req_bits_source(loads_0_io_miss_req_bits_source),
    .io_miss_req_bits_cmd(loads_0_io_miss_req_bits_cmd),
    .io_miss_req_bits_addr(loads_0_io_miss_req_bits_addr),
    .io_miss_req_bits_vaddr(loads_0_io_miss_req_bits_vaddr),
    .io_miss_req_bits_id(loads_0_io_miss_req_bits_id),
    .io_miss_req_bits_scToUnique(loads_0_io_miss_req_bits_scToUnique),
    .io_miss_req_bits_occupy_way(loads_0_io_miss_req_bits_occupy_way),
    .io_miss_resp_id(loads_0_io_miss_resp_id),
    .io_miss_resp_handled(loads_0_io_miss_resp_handled),
    .io_wbq_conflict_check_valid(loads_0_io_wbq_conflict_check_valid),
    .io_wbq_conflict_check_bits(loads_0_io_wbq_conflict_check_bits),
    .io_wbq_block_miss_req(loads_0_io_wbq_block_miss_req),
    .io_replace_access_valid(loads_0_io_replace_access_valid),
    .io_replace_access_bits_set(loads_0_io_replace_access_bits_set),
    .io_replace_access_bits_way(loads_0_io_replace_access_bits_way),
    .io_unique_occupy_valid(loads_0_io_unique_occupy_valid),
    .io_unique_occupy_set(loads_0_io_unique_occupy_set),
    .io_unique_occupy_fail(loads_0_io_unique_occupy_fail),
    .io_busy(loads_0_io_busy)
  );
  LoadPipe loads_1 ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 216:58]
    .clock(loads_1_clock),
    .reset(loads_1_reset),
    .io_lsu_req_ready(loads_1_io_lsu_req_ready),
    .io_lsu_req_valid(loads_1_io_lsu_req_valid),
    .io_lsu_req_bits_cmd(loads_1_io_lsu_req_bits_cmd),
    .io_lsu_req_bits_vaddr(loads_1_io_lsu_req_bits_vaddr),
    .io_lsu_req_bits_id(loads_1_io_lsu_req_bits_id),
    .io_lsu_req_bits_isFirstIssue(loads_1_io_lsu_req_bits_isFirstIssue),
    .io_lsu_req_bits_lqIdx_flag(loads_1_io_lsu_req_bits_lqIdx_flag),
    .io_lsu_req_bits_lqIdx_value(loads_1_io_lsu_req_bits_lqIdx_value),
    .io_lsu_resp_ready(loads_1_io_lsu_resp_ready),
    .io_lsu_resp_valid(loads_1_io_lsu_resp_valid),
    .io_lsu_resp_bits_data(loads_1_io_lsu_resp_bits_data),
    .io_lsu_resp_bits_id(loads_1_io_lsu_resp_bits_id),
    .io_lsu_resp_bits_miss(loads_1_io_lsu_resp_bits_miss),
    .io_lsu_resp_bits_replay(loads_1_io_lsu_resp_bits_replay),
    .io_lsu_resp_bits_replayCarry_real_way_en(loads_1_io_lsu_resp_bits_replayCarry_real_way_en),
    .io_lsu_resp_bits_replayCarry_valid(loads_1_io_lsu_resp_bits_replayCarry_valid),
    .io_lsu_resp_bits_mshr_id(loads_1_io_lsu_resp_bits_mshr_id),
    .io_lsu_resp_bits_handled(loads_1_io_lsu_resp_bits_handled),
    .io_lsu_resp_bits_real_miss(loads_1_io_lsu_resp_bits_real_miss),
    .io_lsu_resp_bits_replacementUpdated(loads_1_io_lsu_resp_bits_replacementUpdated),
    .io_lsu_s1_kill(loads_1_io_lsu_s1_kill),
    .io_lsu_s2_kill(loads_1_io_lsu_s2_kill),
    .io_lsu_is128Req(loads_1_io_lsu_is128Req),
    .io_lsu_s1_paddr_dup_lsu(loads_1_io_lsu_s1_paddr_dup_lsu),
    .io_lsu_s1_paddr_dup_dcache(loads_1_io_lsu_s1_paddr_dup_dcache),
    .io_lsu_s1_disable_fast_wakeup(loads_1_io_lsu_s1_disable_fast_wakeup),
    .io_lsu_s2_hit(loads_1_io_lsu_s2_hit),
    .io_lsu_s2_first_hit(loads_1_io_lsu_s2_first_hit),
    .io_lsu_s2_bank_conflict(loads_1_io_lsu_s2_bank_conflict),
    .io_lsu_s2_mq_nack(loads_1_io_lsu_s2_mq_nack),
    .io_meta_read_valid(loads_1_io_meta_read_valid),
    .io_meta_read_bits_idx(loads_1_io_meta_read_bits_idx),
    .io_meta_resp_0_coh(loads_1_io_meta_resp_0_coh),
    .io_meta_resp_1_coh(loads_1_io_meta_resp_1_coh),
    .io_meta_resp_2_coh(loads_1_io_meta_resp_2_coh),
    .io_meta_resp_3_coh(loads_1_io_meta_resp_3_coh),
    .io_tag_read_ready(loads_1_io_tag_read_ready),
    .io_tag_read_valid(loads_1_io_tag_read_valid),
    .io_tag_read_bits_idx(loads_1_io_tag_read_bits_idx),
    .io_tag_resp_0(loads_1_io_tag_resp_0),
    .io_tag_resp_1(loads_1_io_tag_resp_1),
    .io_tag_resp_2(loads_1_io_tag_resp_2),
    .io_tag_resp_3(loads_1_io_tag_resp_3),
    .io_banked_data_read_ready(loads_1_io_banked_data_read_ready),
    .io_banked_data_read_valid(loads_1_io_banked_data_read_valid),
    .io_banked_data_read_bits_addr(loads_1_io_banked_data_read_bits_addr),
    .io_banked_data_read_bits_bankMask(loads_1_io_banked_data_read_bits_bankMask),
    .io_banked_data_read_bits_kill(loads_1_io_banked_data_read_bits_kill),
    .io_banked_data_read_bits_lqIdx_flag(loads_1_io_banked_data_read_bits_lqIdx_flag),
    .io_banked_data_read_bits_lqIdx_value(loads_1_io_banked_data_read_bits_lqIdx_value),
    .io_banked_data_resp_0_data_0(loads_1_io_banked_data_resp_0_data_0),
    .io_banked_data_resp_0_data_1(loads_1_io_banked_data_resp_0_data_1),
    .io_banked_data_resp_0_data_2(loads_1_io_banked_data_resp_0_data_2),
    .io_banked_data_resp_0_data_3(loads_1_io_banked_data_resp_0_data_3),
    .io_banked_data_resp_1_data_0(loads_1_io_banked_data_resp_1_data_0),
    .io_banked_data_resp_1_data_1(loads_1_io_banked_data_resp_1_data_1),
    .io_banked_data_resp_1_data_2(loads_1_io_banked_data_resp_1_data_2),
    .io_banked_data_resp_1_data_3(loads_1_io_banked_data_resp_1_data_3),
    .io_bank_conflict(loads_1_io_bank_conflict),
    .io_miss_req_ready(loads_1_io_miss_req_ready),
    .io_miss_req_valid(loads_1_io_miss_req_valid),
    .io_miss_req_bits_source(loads_1_io_miss_req_bits_source),
    .io_miss_req_bits_cmd(loads_1_io_miss_req_bits_cmd),
    .io_miss_req_bits_addr(loads_1_io_miss_req_bits_addr),
    .io_miss_req_bits_vaddr(loads_1_io_miss_req_bits_vaddr),
    .io_miss_req_bits_id(loads_1_io_miss_req_bits_id),
    .io_miss_req_bits_scToUnique(loads_1_io_miss_req_bits_scToUnique),
    .io_miss_req_bits_occupy_way(loads_1_io_miss_req_bits_occupy_way),
    .io_miss_resp_id(loads_1_io_miss_resp_id),
    .io_miss_resp_handled(loads_1_io_miss_resp_handled),
    .io_wbq_conflict_check_valid(loads_1_io_wbq_conflict_check_valid),
    .io_wbq_conflict_check_bits(loads_1_io_wbq_conflict_check_bits),
    .io_wbq_block_miss_req(loads_1_io_wbq_block_miss_req),
    .io_replace_access_valid(loads_1_io_replace_access_valid),
    .io_replace_access_bits_set(loads_1_io_replace_access_bits_set),
    .io_replace_access_bits_way(loads_1_io_replace_access_bits_way),
    .io_unique_occupy_valid(loads_1_io_unique_occupy_valid),
    .io_unique_occupy_set(loads_1_io_unique_occupy_set),
    .io_unique_occupy_fail(loads_1_io_unique_occupy_fail),
    .io_busy(loads_1_io_busy)
  );
  MainPipe pipe ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 217:20]
    .clock(pipe_clock),
    .reset(pipe_reset),
    .io_probe_ready(pipe_io_probe_ready),
    .io_probe_valid(pipe_io_probe_valid),
    .io_probe_bits_vaddr(pipe_io_probe_bits_vaddr),
    .io_probe_bits_addr(pipe_io_probe_bits_addr),
    .io_probe_bits_tagAlias(pipe_io_probe_bits_tagAlias),
    .io_probe_bits_id(pipe_io_probe_bits_id),
    .io_probe_bits_probeOp(pipe_io_probe_bits_probeOp),
    .io_probe_bits_snpTxnId(pipe_io_probe_bits_snpTxnId),
    .io_refill_ready(pipe_io_refill_ready),
    .io_refill_valid(pipe_io_refill_valid),
    .io_refill_bits_cmd(pipe_io_refill_bits_cmd),
    .io_refill_bits_vaddr(pipe_io_refill_bits_vaddr),
    .io_refill_bits_addr(pipe_io_refill_bits_addr),
    .io_refill_bits_id(pipe_io_refill_bits_id),
    .io_refill_bits_missId(pipe_io_refill_bits_missId),
    .io_refill_bits_wordIdx(pipe_io_refill_bits_wordIdx),
    .io_refill_bits_amoData(pipe_io_refill_bits_amoData),
    .io_refill_bits_amoMask(pipe_io_refill_bits_amoMask),
    .io_refill_bits_amoCmp(pipe_io_refill_bits_amoCmp),
    .io_refill_bits_replaceWay(pipe_io_refill_bits_replaceWay),
    .io_store_ready(pipe_io_store_ready),
    .io_store_valid(pipe_io_store_valid),
    .io_store_bits_cmd(pipe_io_store_bits_cmd),
    .io_store_bits_vaddr(pipe_io_store_bits_vaddr),
    .io_store_bits_addr(pipe_io_store_bits_addr),
    .io_store_bits_data(pipe_io_store_bits_data),
    .io_store_bits_mask(pipe_io_store_bits_mask),
    .io_store_bits_id(pipe_io_store_bits_id),
    .io_atomic_ready(pipe_io_atomic_ready),
    .io_atomic_valid(pipe_io_atomic_valid),
    .io_atomic_bits_cmd(pipe_io_atomic_bits_cmd),
    .io_atomic_bits_vaddr(pipe_io_atomic_bits_vaddr),
    .io_atomic_bits_addr(pipe_io_atomic_bits_addr),
    .io_atomic_bits_id(pipe_io_atomic_bits_id),
    .io_atomic_bits_missId(pipe_io_atomic_bits_missId),
    .io_atomic_bits_wordIdx(pipe_io_atomic_bits_wordIdx),
    .io_atomic_bits_amoData(pipe_io_atomic_bits_amoData),
    .io_atomic_bits_amoMask(pipe_io_atomic_bits_amoMask),
    .io_atomic_bits_amoCmp(pipe_io_atomic_bits_amoCmp),
    .io_atomic_bits_probeOp(pipe_io_atomic_bits_probeOp),
    .io_atomic_bits_needData(pipe_io_atomic_bits_needData),
    .io_atomic_bits_snpTxnId(pipe_io_atomic_bits_snpTxnId),
    .io_atomic_bits_replaceWay(pipe_io_atomic_bits_replaceWay),
    .io_tagRead_ready(pipe_io_tagRead_ready),
    .io_tagRead_valid(pipe_io_tagRead_valid),
    .io_tagRead_bits_idx(pipe_io_tagRead_bits_idx),
    .io_tagResp_0(pipe_io_tagResp_0),
    .io_tagResp_1(pipe_io_tagResp_1),
    .io_tagResp_2(pipe_io_tagResp_2),
    .io_tagResp_3(pipe_io_tagResp_3),
    .io_metaRead_valid(pipe_io_metaRead_valid),
    .io_metaRead_bits_idx(pipe_io_metaRead_bits_idx),
    .io_metaResp_0_coh(pipe_io_metaResp_0_coh),
    .io_metaResp_1_coh(pipe_io_metaResp_1_coh),
    .io_metaResp_2_coh(pipe_io_metaResp_2_coh),
    .io_metaResp_3_coh(pipe_io_metaResp_3_coh),
    .io_dataRead_ready(pipe_io_dataRead_ready),
    .io_dataRead_valid(pipe_io_dataRead_valid),
    .io_dataRead_bits_addr(pipe_io_dataRead_bits_addr),
    .io_dataRead_bits_bankMask(pipe_io_dataRead_bits_bankMask),
    .io_dataResp_valid(pipe_io_dataResp_valid),
    .io_dataResp_bits_data_0_0(pipe_io_dataResp_bits_data_0_0),
    .io_dataResp_bits_data_0_1(pipe_io_dataResp_bits_data_0_1),
    .io_dataResp_bits_data_0_2(pipe_io_dataResp_bits_data_0_2),
    .io_dataResp_bits_data_0_3(pipe_io_dataResp_bits_data_0_3),
    .io_dataResp_bits_data_1_0(pipe_io_dataResp_bits_data_1_0),
    .io_dataResp_bits_data_1_1(pipe_io_dataResp_bits_data_1_1),
    .io_dataResp_bits_data_1_2(pipe_io_dataResp_bits_data_1_2),
    .io_dataResp_bits_data_1_3(pipe_io_dataResp_bits_data_1_3),
    .io_dataResp_bits_data_2_0(pipe_io_dataResp_bits_data_2_0),
    .io_dataResp_bits_data_2_1(pipe_io_dataResp_bits_data_2_1),
    .io_dataResp_bits_data_2_2(pipe_io_dataResp_bits_data_2_2),
    .io_dataResp_bits_data_2_3(pipe_io_dataResp_bits_data_2_3),
    .io_dataResp_bits_data_3_0(pipe_io_dataResp_bits_data_3_0),
    .io_dataResp_bits_data_3_1(pipe_io_dataResp_bits_data_3_1),
    .io_dataResp_bits_data_3_2(pipe_io_dataResp_bits_data_3_2),
    .io_dataResp_bits_data_3_3(pipe_io_dataResp_bits_data_3_3),
    .io_dataResp_bits_data_4_0(pipe_io_dataResp_bits_data_4_0),
    .io_dataResp_bits_data_4_1(pipe_io_dataResp_bits_data_4_1),
    .io_dataResp_bits_data_4_2(pipe_io_dataResp_bits_data_4_2),
    .io_dataResp_bits_data_4_3(pipe_io_dataResp_bits_data_4_3),
    .io_dataResp_bits_data_5_0(pipe_io_dataResp_bits_data_5_0),
    .io_dataResp_bits_data_5_1(pipe_io_dataResp_bits_data_5_1),
    .io_dataResp_bits_data_5_2(pipe_io_dataResp_bits_data_5_2),
    .io_dataResp_bits_data_5_3(pipe_io_dataResp_bits_data_5_3),
    .io_dataResp_bits_data_6_0(pipe_io_dataResp_bits_data_6_0),
    .io_dataResp_bits_data_6_1(pipe_io_dataResp_bits_data_6_1),
    .io_dataResp_bits_data_6_2(pipe_io_dataResp_bits_data_6_2),
    .io_dataResp_bits_data_6_3(pipe_io_dataResp_bits_data_6_3),
    .io_dataResp_bits_data_7_0(pipe_io_dataResp_bits_data_7_0),
    .io_dataResp_bits_data_7_1(pipe_io_dataResp_bits_data_7_1),
    .io_dataResp_bits_data_7_2(pipe_io_dataResp_bits_data_7_2),
    .io_dataResp_bits_data_7_3(pipe_io_dataResp_bits_data_7_3),
    .io_tagWrite_valid(pipe_io_tagWrite_valid),
    .io_tagWrite_bits_idx(pipe_io_tagWrite_bits_idx),
    .io_tagWrite_bits_way_en(pipe_io_tagWrite_bits_way_en),
    .io_tagWrite_bits_tag(pipe_io_tagWrite_bits_tag),
    .io_metaWrite_valid(pipe_io_metaWrite_valid),
    .io_metaWrite_bits_idx(pipe_io_metaWrite_bits_idx),
    .io_metaWrite_bits_way_en(pipe_io_metaWrite_bits_way_en),
    .io_metaWrite_bits_meta_coh(pipe_io_metaWrite_bits_meta_coh),
    .io_dataWrite_valid(pipe_io_dataWrite_valid),
    .io_dataWrite_bits_addr(pipe_io_dataWrite_bits_addr),
    .io_dataWrite_bits_wayEn(pipe_io_dataWrite_bits_wayEn),
    .io_dataWrite_bits_bankMask(pipe_io_dataWrite_bits_bankMask),
    .io_dataWrite_bits_data_0(pipe_io_dataWrite_bits_data_0),
    .io_dataWrite_bits_data_1(pipe_io_dataWrite_bits_data_1),
    .io_dataWrite_bits_data_2(pipe_io_dataWrite_bits_data_2),
    .io_dataWrite_bits_data_3(pipe_io_dataWrite_bits_data_3),
    .io_dataWrite_bits_data_4(pipe_io_dataWrite_bits_data_4),
    .io_dataWrite_bits_data_5(pipe_io_dataWrite_bits_data_5),
    .io_dataWrite_bits_data_6(pipe_io_dataWrite_bits_data_6),
    .io_dataWrite_bits_data_7(pipe_io_dataWrite_bits_data_7),
    .io_missReq_ready(pipe_io_missReq_ready),
    .io_missReq_valid(pipe_io_missReq_valid),
    .io_missReq_bits_source(pipe_io_missReq_bits_source),
    .io_missReq_bits_cmd(pipe_io_missReq_bits_cmd),
    .io_missReq_bits_addr(pipe_io_missReq_bits_addr),
    .io_missReq_bits_vaddr(pipe_io_missReq_bits_vaddr),
    .io_missReq_bits_full_overwrite(pipe_io_missReq_bits_full_overwrite),
    .io_missReq_bits_word_idx(pipe_io_missReq_bits_word_idx),
    .io_missReq_bits_amo_data(pipe_io_missReq_bits_amo_data),
    .io_missReq_bits_amo_mask(pipe_io_missReq_bits_amo_mask),
    .io_missReq_bits_amo_cmp(pipe_io_missReq_bits_amo_cmp),
    .io_missReq_bits_id(pipe_io_missReq_bits_id),
    .io_missReq_bits_scToUnique(pipe_io_missReq_bits_scToUnique),
    .io_missReq_bits_occupy_way(pipe_io_missReq_bits_occupy_way),
    .io_missReq_bits_store_data(pipe_io_missReq_bits_store_data),
    .io_missReq_bits_store_mask(pipe_io_missReq_bits_store_mask),
    .io_missResp_handled(pipe_io_missResp_handled),
    .io_missResp_sameAddr(pipe_io_missResp_sameAddr),
    .io_refillInfo_valid(pipe_io_refillInfo_valid),
    .io_refillInfo_bits_data(pipe_io_refillInfo_bits_data),
    .io_refillInfo_bits_retUnique(pipe_io_refillInfo_bits_retUnique),
    .io_refillInfo_bits_passDirty(pipe_io_refillInfo_bits_passDirty),
    .io_refillInfo_bits_storeData(pipe_io_refillInfo_bits_storeData),
    .io_refillInfo_bits_storeMask(pipe_io_refillInfo_bits_storeMask),
    .io_refillInfo_bits_error(pipe_io_refillInfo_bits_error),
    .io_mainpipeInfo_s2Refill(pipe_io_mainpipeInfo_s2Refill),
    .io_mainpipeInfo_s2MissId(pipe_io_mainpipeInfo_s2MissId),
    .io_mainpipeInfo_s3Done(pipe_io_mainpipeInfo_s3Done),
    .io_mainpipeInfo_s3MissId(pipe_io_mainpipeInfo_s3MissId),
    .io_mainpipeInfo_installed(pipe_io_mainpipeInfo_installed),
    .io_mainpipeInfo_finalCoh(pipe_io_mainpipeInfo_finalCoh),
    .io_pendingSnoop_valid(pipe_io_pendingSnoop_valid),
    .io_pendingSnoop_bits(pipe_io_pendingSnoop_bits),
    .io_pendingInvalidate(pipe_io_pendingInvalidate),
    .io_occupySet_valid(pipe_io_occupySet_valid),
    .io_occupySet_bits(pipe_io_occupySet_bits),
    .io_occupyWay(pipe_io_occupyWay),
    .io_occupyFail(pipe_io_occupyFail),
    .io_replaceQuery_valid(pipe_io_replaceQuery_valid),
    .io_replaceQuery_bits(pipe_io_replaceQuery_bits),
    .io_replaceBlock(pipe_io_replaceBlock),
    .io_wbQuery_valid(pipe_io_wbQuery_valid),
    .io_wbQuery_bits(pipe_io_wbQuery_bits),
    .io_wbBlock(pipe_io_wbBlock),
    .io_wbReq_ready(pipe_io_wbReq_ready),
    .io_wbReq_valid(pipe_io_wbReq_valid),
    .io_wbReq_bits_data(pipe_io_wbReq_bits_data),
    .io_wbReq_bits_addr(pipe_io_wbReq_bits_addr),
    .io_wbReq_bits_opcode(pipe_io_wbReq_bits_opcode),
    .io_wbReq_bits_resp(pipe_io_wbReq_bits_resp),
    .io_wbReq_bits_passDirty(pipe_io_wbReq_bits_passDirty),
    .io_wbReq_bits_snpTxnId(pipe_io_wbReq_bits_snpTxnId),
    .io_probeResp_valid(pipe_io_probeResp_valid),
    .io_probeResp_bits_id(pipe_io_probeResp_bits_id),
    .io_atomicResp_ready(pipe_io_atomicResp_ready),
    .io_atomicResp_valid(pipe_io_atomicResp_valid),
    .io_atomicResp_bits_id(pipe_io_atomicResp_bits_id),
    .io_atomicResp_bits_cmd(pipe_io_atomicResp_bits_cmd),
    .io_atomicResp_bits_data(pipe_io_atomicResp_bits_data),
    .io_atomicResp_bits_success(pipe_io_atomicResp_bits_success),
    .io_atomicReplay_ready(pipe_io_atomicReplay_ready),
    .io_atomicReplay_valid(pipe_io_atomicReplay_valid),
    .io_atomicReplay_bits_id(pipe_io_atomicReplay_bits_id),
    .io_storeHit_ready(pipe_io_storeHit_ready),
    .io_storeHit_valid(pipe_io_storeHit_valid),
    .io_storeHit_bits_id(pipe_io_storeHit_bits_id),
    .io_storeReplay_ready(pipe_io_storeReplay_ready),
    .io_storeReplay_valid(pipe_io_storeReplay_valid),
    .io_storeReplay_bits_id(pipe_io_storeReplay_bits_id),
    .io_lrsc_blocked_block_valid(pipe_io_lrsc_blocked_block_valid),
    .io_lrsc_blocked_block_bits(pipe_io_lrsc_blocked_block_bits),
    .io_update_resv_set(pipe_io_update_resv_set),
    .io_replaceAccess_0_valid(pipe_io_replaceAccess_0_valid),
    .io_replaceAccess_0_bits_set(pipe_io_replaceAccess_0_bits_set),
    .io_replaceAccess_0_bits_way(pipe_io_replaceAccess_0_bits_way),
    .io_replaceAccess_1_valid(pipe_io_replaceAccess_1_valid),
    .io_replaceAccess_1_bits_set(pipe_io_replaceAccess_1_bits_set),
    .io_replaceAccess_1_bits_way(pipe_io_replaceAccess_1_bits_way),
    .io_snoopNotice_valid(pipe_io_snoopNotice_valid),
    .io_snoopNotice_bits_addr(pipe_io_snoopNotice_bits_addr),
    .io_snoopNotice_bits_alias(pipe_io_snoopNotice_bits_alias),
    .io_busy(pipe_io_busy)
  );
  MissQueue miss ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 218:20]
    .clock(miss_clock),
    .reset(miss_reset),
    .io_missReq_valid(miss_io_missReq_valid),
    .io_missReq_bits_source(miss_io_missReq_bits_source),
    .io_missReq_bits_cmd(miss_io_missReq_bits_cmd),
    .io_missReq_bits_addr(miss_io_missReq_bits_addr),
    .io_missReq_bits_vaddr(miss_io_missReq_bits_vaddr),
    .io_missReq_bits_full_overwrite(miss_io_missReq_bits_full_overwrite),
    .io_missReq_bits_word_idx(miss_io_missReq_bits_word_idx),
    .io_missReq_bits_amo_data(miss_io_missReq_bits_amo_data),
    .io_missReq_bits_amo_mask(miss_io_missReq_bits_amo_mask),
    .io_missReq_bits_amo_cmp(miss_io_missReq_bits_amo_cmp),
    .io_missReq_bits_id(miss_io_missReq_bits_id),
    .io_missReq_bits_scToUnique(miss_io_missReq_bits_scToUnique),
    .io_missReq_bits_occupy_way(miss_io_missReq_bits_occupy_way),
    .io_missReq_bits_store_data(miss_io_missReq_bits_store_data),
    .io_missReq_bits_store_mask(miss_io_missReq_bits_store_mask),
    .io_missResp_id(miss_io_missResp_id),
    .io_missResp_handled(miss_io_missResp_handled),
    .io_missResp_sameAddr(miss_io_missResp_sameAddr),
    .io_replaceQuery_valid(miss_io_replaceQuery_valid),
    .io_replaceQuery_bits(miss_io_replaceQuery_bits),
    .io_replaceBlock(miss_io_replaceBlock),
    .io_refill_ready(miss_io_refill_ready),
    .io_refill_valid(miss_io_refill_valid),
    .io_refill_bits_cmd(miss_io_refill_bits_cmd),
    .io_refill_bits_vaddr(miss_io_refill_bits_vaddr),
    .io_refill_bits_addr(miss_io_refill_bits_addr),
    .io_refill_bits_id(miss_io_refill_bits_id),
    .io_refill_bits_missId(miss_io_refill_bits_missId),
    .io_refill_bits_wordIdx(miss_io_refill_bits_wordIdx),
    .io_refill_bits_amoData(miss_io_refill_bits_amoData),
    .io_refill_bits_amoMask(miss_io_refill_bits_amoMask),
    .io_refill_bits_amoCmp(miss_io_refill_bits_amoCmp),
    .io_refill_bits_replaceWay(miss_io_refill_bits_replaceWay),
    .io_refillInfo_valid(miss_io_refillInfo_valid),
    .io_refillInfo_bits_data(miss_io_refillInfo_bits_data),
    .io_refillInfo_bits_retUnique(miss_io_refillInfo_bits_retUnique),
    .io_refillInfo_bits_passDirty(miss_io_refillInfo_bits_passDirty),
    .io_refillInfo_bits_storeData(miss_io_refillInfo_bits_storeData),
    .io_refillInfo_bits_storeMask(miss_io_refillInfo_bits_storeMask),
    .io_refillInfo_bits_error(miss_io_refillInfo_bits_error),
    .io_mainpipeInfo_s2Refill(miss_io_mainpipeInfo_s2Refill),
    .io_mainpipeInfo_s2MissId(miss_io_mainpipeInfo_s2MissId),
    .io_mainpipeInfo_s3Done(miss_io_mainpipeInfo_s3Done),
    .io_mainpipeInfo_s3MissId(miss_io_mainpipeInfo_s3MissId),
    .io_mainpipeInfo_installed(miss_io_mainpipeInfo_installed),
    .io_mainpipeInfo_finalCoh(miss_io_mainpipeInfo_finalCoh),
    .io_pendingQuery_valid(miss_io_pendingQuery_valid),
    .io_pendingQuery_bits(miss_io_pendingQuery_bits),
    .io_pendingInvalidate(miss_io_pendingInvalidate),
    .io_cmoReq_ready(miss_io_cmoReq_ready),
    .io_cmoReq_valid(miss_io_cmoReq_valid),
    .io_cmoReq_bits_id(miss_io_cmoReq_bits_id),
    .io_cmoReq_bits_opcode(miss_io_cmoReq_bits_opcode),
    .io_cmoReq_bits_addr(miss_io_cmoReq_bits_addr),
    .io_cmoReq_bits_alias(miss_io_cmoReq_bits_alias),
    .io_cmoResp_ready(miss_io_cmoResp_ready),
    .io_cmoResp_valid(miss_io_cmoResp_valid),
    .io_cmoResp_bits_id(miss_io_cmoResp_bits_id),
    .io_cmoResp_bits_error(miss_io_cmoResp_bits_error),
    .io_cmoQuery_valid(miss_io_cmoQuery_valid),
    .io_cmoQuery_bits(miss_io_cmoQuery_bits),
    .io_cmoWbBlock(miss_io_cmoWbBlock),
    .io_wfi_safe(miss_io_wfi_safe),
    .io_occupySet_0_valid(miss_io_occupySet_0_valid),
    .io_occupySet_0_bits(miss_io_occupySet_0_bits),
    .io_occupySet_1_valid(miss_io_occupySet_1_valid),
    .io_occupySet_1_bits(miss_io_occupySet_1_bits),
    .io_occupySet_2_valid(miss_io_occupySet_2_valid),
    .io_occupySet_2_bits(miss_io_occupySet_2_bits),
    .io_occupyWay_2(miss_io_occupyWay_2),
    .io_occupyFail_0(miss_io_occupyFail_0),
    .io_occupyFail_1(miss_io_occupyFail_1),
    .io_occupyFail_2(miss_io_occupyFail_2),
    .io_txReq_ready(miss_io_txReq_ready),
    .io_txReq_valid(miss_io_txReq_valid),
    .io_txReq_bits_txnID(miss_io_txReq_bits_txnID),
    .io_txReq_bits_opcode(miss_io_txReq_bits_opcode),
    .io_txReq_bits_addr(miss_io_txReq_bits_addr),
    .io_txReq_bits_tagAlias(miss_io_txReq_bits_tagAlias),
    .io_txReq_bits_expCompData(miss_io_txReq_bits_expCompData),
    .io_txReq_bits_expCompStash(miss_io_txReq_bits_expCompStash),
    .io_rxDat_ready(miss_io_rxDat_ready),
    .io_rxDat_valid(miss_io_rxDat_valid),
    .io_rxDat_bits_txnID(miss_io_rxDat_bits_txnID),
    .io_rxDat_bits_srcID(miss_io_rxDat_bits_srcID),
    .io_rxDat_bits_opcode(miss_io_rxDat_bits_opcode),
    .io_rxDat_bits_dbID(miss_io_rxDat_bits_dbID),
    .io_rxDat_bits_respErr(miss_io_rxDat_bits_respErr),
    .io_rxDat_bits_resp(miss_io_rxDat_bits_resp),
    .io_rxDat_bits_dataID(miss_io_rxDat_bits_dataID),
    .io_rxDat_bits_data(miss_io_rxDat_bits_data),
    .io_rxDat_bits_traceTag(miss_io_rxDat_bits_traceTag),
    .io_rxRsp_ready(miss_io_rxRsp_ready),
    .io_rxRsp_valid(miss_io_rxRsp_valid),
    .io_rxRsp_bits_txnID(miss_io_rxRsp_bits_txnID),
    .io_rxRsp_bits_srcID(miss_io_rxRsp_bits_srcID),
    .io_rxRsp_bits_opcode(miss_io_rxRsp_bits_opcode),
    .io_rxRsp_bits_dbID(miss_io_rxRsp_bits_dbID),
    .io_rxRsp_bits_respErr(miss_io_rxRsp_bits_respErr),
    .io_rxRsp_bits_resp(miss_io_rxRsp_bits_resp),
    .io_rxRsp_bits_traceTag(miss_io_rxRsp_bits_traceTag),
    .io_txRsp_ready(miss_io_txRsp_ready),
    .io_txRsp_valid(miss_io_txRsp_valid),
    .io_txRsp_bits_txnID(miss_io_txRsp_bits_txnID),
    .io_txRsp_bits_tgtID(miss_io_txRsp_bits_tgtID),
    .io_txRsp_bits_traceTag(miss_io_txRsp_bits_traceTag),
    .io_forwardChi_valid(miss_io_forwardChi_valid),
    .io_forwardChi_bits_id(miss_io_forwardChi_bits_id),
    .io_forwardChi_bits_half(miss_io_forwardChi_bits_half),
    .io_forwardChi_bits_data(miss_io_forwardChi_bits_data),
    .io_forwardMshr_id(miss_io_forwardMshr_id),
    .io_forwardMshr_half(miss_io_forwardMshr_half),
    .io_forwardMshr_data_valid(miss_io_forwardMshr_data_valid),
    .io_forwardMshr_data_bits(miss_io_forwardMshr_data_bits),
    .io_refillWakeup_ready(miss_io_refillWakeup_ready),
    .io_refillWakeup_valid(miss_io_refillWakeup_valid),
    .io_refillWakeup_bits_id(miss_io_refillWakeup_bits_id),
    .io_refillWakeup_bits_addr(miss_io_refillWakeup_bits_addr),
    .io_refillWakeup_bits_alias(miss_io_refillWakeup_bits_alias),
    .io_loadReplay_ready(miss_io_loadReplay_ready),
    .io_loadReplay_valid(miss_io_loadReplay_valid),
    .io_loadReplay_bits_id(miss_io_loadReplay_bits_id),
    .io_loadReplay_bits_addr(miss_io_loadReplay_bits_addr),
    .io_loadReplay_bits_alias(miss_io_loadReplay_bits_alias),
    .io_storeDone_ready(miss_io_storeDone_ready),
    .io_storeDone_valid(miss_io_storeDone_valid),
    .io_storeDone_bits_id(miss_io_storeDone_bits_id),
    .io_storeReplay_ready(miss_io_storeReplay_ready),
    .io_storeReplay_valid(miss_io_storeReplay_valid),
    .io_storeReplay_bits_id(miss_io_storeReplay_bits_id),
    .io_snoop_valid(miss_io_snoop_valid),
    .io_snoop_bits_addr(miss_io_snoop_bits_addr),
    .io_snoop_bits_alias(miss_io_snoop_bits_alias),
    .io_probeDrop_0_valid(miss_io_probeDrop_0_valid),
    .io_probeDrop_0_bits_addr(miss_io_probeDrop_0_bits_addr),
    .io_probeDrop_0_bits_alias(miss_io_probeDrop_0_bits_alias),
    .io_probeDrop_1_valid(miss_io_probeDrop_1_valid),
    .io_probeDrop_1_bits_addr(miss_io_probeDrop_1_bits_addr),
    .io_probeDrop_1_bits_alias(miss_io_probeDrop_1_bits_alias),
    .io_probeDrop_2_valid(miss_io_probeDrop_2_valid),
    .io_probeDrop_2_bits_addr(miss_io_probeDrop_2_bits_addr),
    .io_probeDrop_2_bits_alias(miss_io_probeDrop_2_bits_alias),
    .io_probeDrop_3_valid(miss_io_probeDrop_3_valid),
    .io_probeDrop_3_bits_addr(miss_io_probeDrop_3_bits_addr),
    .io_probeDrop_3_bits_alias(miss_io_probeDrop_3_bits_alias),
    .io_probeDrop_4_valid(miss_io_probeDrop_4_valid),
    .io_probeDrop_4_bits_addr(miss_io_probeDrop_4_bits_addr),
    .io_probeDrop_4_bits_alias(miss_io_probeDrop_4_bits_alias),
    .io_probeDrop_5_valid(miss_io_probeDrop_5_valid),
    .io_probeDrop_5_bits_addr(miss_io_probeDrop_5_bits_addr),
    .io_probeDrop_5_bits_alias(miss_io_probeDrop_5_bits_alias),
    .io_probeDrop_6_valid(miss_io_probeDrop_6_valid),
    .io_probeDrop_6_bits_addr(miss_io_probeDrop_6_bits_addr),
    .io_probeDrop_6_bits_alias(miss_io_probeDrop_6_bits_alias),
    .io_probeDrop_7_valid(miss_io_probeDrop_7_valid),
    .io_probeDrop_7_bits_addr(miss_io_probeDrop_7_bits_addr),
    .io_probeDrop_7_bits_alias(miss_io_probeDrop_7_bits_alias),
    .io_probeDrop_8_valid(miss_io_probeDrop_8_valid),
    .io_probeDrop_8_bits_addr(miss_io_probeDrop_8_bits_addr),
    .io_probeDrop_8_bits_alias(miss_io_probeDrop_8_bits_alias),
    .io_probeDrop_9_valid(miss_io_probeDrop_9_valid),
    .io_probeDrop_9_bits_addr(miss_io_probeDrop_9_bits_addr),
    .io_probeDrop_9_bits_alias(miss_io_probeDrop_9_bits_alias),
    .io_probeDrop_10_valid(miss_io_probeDrop_10_valid),
    .io_probeDrop_10_bits_addr(miss_io_probeDrop_10_bits_addr),
    .io_probeDrop_10_bits_alias(miss_io_probeDrop_10_bits_alias),
    .io_probeDrop_11_valid(miss_io_probeDrop_11_valid),
    .io_probeDrop_11_bits_addr(miss_io_probeDrop_11_bits_addr),
    .io_probeDrop_11_bits_alias(miss_io_probeDrop_11_bits_alias),
    .io_probeDrop_12_valid(miss_io_probeDrop_12_valid),
    .io_probeDrop_12_bits_addr(miss_io_probeDrop_12_bits_addr),
    .io_probeDrop_12_bits_alias(miss_io_probeDrop_12_bits_alias),
    .io_probeDrop_13_valid(miss_io_probeDrop_13_valid),
    .io_probeDrop_13_bits_addr(miss_io_probeDrop_13_bits_addr),
    .io_probeDrop_13_bits_alias(miss_io_probeDrop_13_bits_alias),
    .io_probeDrop_14_valid(miss_io_probeDrop_14_valid),
    .io_probeDrop_14_bits_addr(miss_io_probeDrop_14_bits_addr),
    .io_probeDrop_14_bits_alias(miss_io_probeDrop_14_bits_alias),
    .io_probeDrop_15_valid(miss_io_probeDrop_15_valid),
    .io_probeDrop_15_bits_addr(miss_io_probeDrop_15_bits_addr),
    .io_probeDrop_15_bits_alias(miss_io_probeDrop_15_bits_alias),
    .io_snoopHold_0_valid(miss_io_snoopHold_0_valid),
    .io_snoopHold_0_bits_addr(miss_io_snoopHold_0_bits_addr),
    .io_snoopHold_0_bits_alias(miss_io_snoopHold_0_bits_alias),
    .io_snoopHold_1_valid(miss_io_snoopHold_1_valid),
    .io_snoopHold_1_bits_addr(miss_io_snoopHold_1_bits_addr),
    .io_snoopHold_1_bits_alias(miss_io_snoopHold_1_bits_alias),
    .io_snoopHold_2_valid(miss_io_snoopHold_2_valid),
    .io_snoopHold_2_bits_addr(miss_io_snoopHold_2_bits_addr),
    .io_snoopHold_2_bits_alias(miss_io_snoopHold_2_bits_alias),
    .io_snoopHold_3_valid(miss_io_snoopHold_3_valid),
    .io_snoopHold_3_bits_addr(miss_io_snoopHold_3_bits_addr),
    .io_snoopHold_3_bits_alias(miss_io_snoopHold_3_bits_alias),
    .io_snoopHold_4_valid(miss_io_snoopHold_4_valid),
    .io_snoopHold_4_bits_addr(miss_io_snoopHold_4_bits_addr),
    .io_snoopHold_4_bits_alias(miss_io_snoopHold_4_bits_alias),
    .io_snoopHold_5_valid(miss_io_snoopHold_5_valid),
    .io_snoopHold_5_bits_addr(miss_io_snoopHold_5_bits_addr),
    .io_snoopHold_5_bits_alias(miss_io_snoopHold_5_bits_alias),
    .io_snoopHold_6_valid(miss_io_snoopHold_6_valid),
    .io_snoopHold_6_bits_addr(miss_io_snoopHold_6_bits_addr),
    .io_snoopHold_6_bits_alias(miss_io_snoopHold_6_bits_alias),
    .io_snoopHold_7_valid(miss_io_snoopHold_7_valid),
    .io_snoopHold_7_bits_addr(miss_io_snoopHold_7_bits_addr),
    .io_snoopHold_7_bits_alias(miss_io_snoopHold_7_bits_alias),
    .io_snoopHold_8_valid(miss_io_snoopHold_8_valid),
    .io_snoopHold_8_bits_addr(miss_io_snoopHold_8_bits_addr),
    .io_snoopHold_8_bits_alias(miss_io_snoopHold_8_bits_alias),
    .io_snoopHold_9_valid(miss_io_snoopHold_9_valid),
    .io_snoopHold_9_bits_addr(miss_io_snoopHold_9_bits_addr),
    .io_snoopHold_9_bits_alias(miss_io_snoopHold_9_bits_alias),
    .io_snoopHold_10_valid(miss_io_snoopHold_10_valid),
    .io_snoopHold_10_bits_addr(miss_io_snoopHold_10_bits_addr),
    .io_snoopHold_10_bits_alias(miss_io_snoopHold_10_bits_alias),
    .io_snoopHold_11_valid(miss_io_snoopHold_11_valid),
    .io_snoopHold_11_bits_addr(miss_io_snoopHold_11_bits_addr),
    .io_snoopHold_11_bits_alias(miss_io_snoopHold_11_bits_alias),
    .io_snoopHold_12_valid(miss_io_snoopHold_12_valid),
    .io_snoopHold_12_bits_addr(miss_io_snoopHold_12_bits_addr),
    .io_snoopHold_12_bits_alias(miss_io_snoopHold_12_bits_alias),
    .io_snoopHold_13_valid(miss_io_snoopHold_13_valid),
    .io_snoopHold_13_bits_addr(miss_io_snoopHold_13_bits_addr),
    .io_snoopHold_13_bits_alias(miss_io_snoopHold_13_bits_alias),
    .io_snoopHold_14_valid(miss_io_snoopHold_14_valid),
    .io_snoopHold_14_bits_addr(miss_io_snoopHold_14_bits_addr),
    .io_snoopHold_14_bits_alias(miss_io_snoopHold_14_bits_alias),
    .io_snoopHold_15_valid(miss_io_snoopHold_15_valid),
    .io_snoopHold_15_bits_addr(miss_io_snoopHold_15_bits_addr),
    .io_snoopHold_15_bits_alias(miss_io_snoopHold_15_bits_alias)
  );
  MissArb arb ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 219:19]
    .io_in_0_ready(arb_io_in_0_ready),
    .io_in_0_valid(arb_io_in_0_valid),
    .io_in_0_bits_source(arb_io_in_0_bits_source),
    .io_in_0_bits_cmd(arb_io_in_0_bits_cmd),
    .io_in_0_bits_addr(arb_io_in_0_bits_addr),
    .io_in_0_bits_vaddr(arb_io_in_0_bits_vaddr),
    .io_in_0_bits_full_overwrite(arb_io_in_0_bits_full_overwrite),
    .io_in_0_bits_word_idx(arb_io_in_0_bits_word_idx),
    .io_in_0_bits_amo_data(arb_io_in_0_bits_amo_data),
    .io_in_0_bits_amo_mask(arb_io_in_0_bits_amo_mask),
    .io_in_0_bits_amo_cmp(arb_io_in_0_bits_amo_cmp),
    .io_in_0_bits_id(arb_io_in_0_bits_id),
    .io_in_0_bits_scToUnique(arb_io_in_0_bits_scToUnique),
    .io_in_0_bits_occupy_way(arb_io_in_0_bits_occupy_way),
    .io_in_0_bits_store_data(arb_io_in_0_bits_store_data),
    .io_in_0_bits_store_mask(arb_io_in_0_bits_store_mask),
    .io_in_1_ready(arb_io_in_1_ready),
    .io_in_1_valid(arb_io_in_1_valid),
    .io_in_1_bits_source(arb_io_in_1_bits_source),
    .io_in_1_bits_cmd(arb_io_in_1_bits_cmd),
    .io_in_1_bits_addr(arb_io_in_1_bits_addr),
    .io_in_1_bits_vaddr(arb_io_in_1_bits_vaddr),
    .io_in_1_bits_id(arb_io_in_1_bits_id),
    .io_in_1_bits_scToUnique(arb_io_in_1_bits_scToUnique),
    .io_in_1_bits_occupy_way(arb_io_in_1_bits_occupy_way),
    .io_in_2_ready(arb_io_in_2_ready),
    .io_in_2_valid(arb_io_in_2_valid),
    .io_in_2_bits_source(arb_io_in_2_bits_source),
    .io_in_2_bits_cmd(arb_io_in_2_bits_cmd),
    .io_in_2_bits_addr(arb_io_in_2_bits_addr),
    .io_in_2_bits_vaddr(arb_io_in_2_bits_vaddr),
    .io_in_2_bits_id(arb_io_in_2_bits_id),
    .io_in_2_bits_scToUnique(arb_io_in_2_bits_scToUnique),
    .io_in_2_bits_occupy_way(arb_io_in_2_bits_occupy_way),
    .io_out_valid(arb_io_out_valid),
    .io_out_bits_source(arb_io_out_bits_source),
    .io_out_bits_cmd(arb_io_out_bits_cmd),
    .io_out_bits_addr(arb_io_out_bits_addr),
    .io_out_bits_vaddr(arb_io_out_bits_vaddr),
    .io_out_bits_full_overwrite(arb_io_out_bits_full_overwrite),
    .io_out_bits_word_idx(arb_io_out_bits_word_idx),
    .io_out_bits_amo_data(arb_io_out_bits_amo_data),
    .io_out_bits_amo_mask(arb_io_out_bits_amo_mask),
    .io_out_bits_amo_cmp(arb_io_out_bits_amo_cmp),
    .io_out_bits_id(arb_io_out_bits_id),
    .io_out_bits_scToUnique(arb_io_out_bits_scToUnique),
    .io_out_bits_occupy_way(arb_io_out_bits_occupy_way),
    .io_out_bits_store_data(arb_io_out_bits_store_data),
    .io_out_bits_store_mask(arb_io_out_bits_store_mask)
  );
  WriteBackQueue wb ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 220:18]
    .clock(wb_clock),
    .reset(wb_reset),
    .io_req_ready(wb_io_req_ready),
    .io_req_valid(wb_io_req_valid),
    .io_req_bits_data(wb_io_req_bits_data),
    .io_req_bits_addr(wb_io_req_bits_addr),
    .io_req_bits_opcode(wb_io_req_bits_opcode),
    .io_req_bits_resp(wb_io_req_bits_resp),
    .io_req_bits_passDirty(wb_io_req_bits_passDirty),
    .io_req_bits_snpTxnId(wb_io_req_bits_snpTxnId),
    .io_txEvt_ready(wb_io_txEvt_ready),
    .io_txEvt_valid(wb_io_txEvt_valid),
    .io_txEvt_bits_txnID(wb_io_txEvt_bits_txnID),
    .io_txEvt_bits_opcode(wb_io_txEvt_bits_opcode),
    .io_txEvt_bits_addr(wb_io_txEvt_bits_addr),
    .io_txEvt_bits_traceTag(wb_io_txEvt_bits_traceTag),
    .io_txDat_ready(wb_io_txDat_ready),
    .io_txDat_valid(wb_io_txDat_valid),
    .io_txDat_bits_txnID(wb_io_txDat_bits_txnID),
    .io_txDat_bits_tgtID(wb_io_txDat_bits_tgtID),
    .io_txDat_bits_opcode(wb_io_txDat_bits_opcode),
    .io_txDat_bits_resp(wb_io_txDat_bits_resp),
    .io_txDat_bits_dataID(wb_io_txDat_bits_dataID),
    .io_txDat_bits_data(wb_io_txDat_bits_data),
    .io_txDat_bits_traceTag(wb_io_txDat_bits_traceTag),
    .io_txRsp_ready(wb_io_txRsp_ready),
    .io_txRsp_valid(wb_io_txRsp_valid),
    .io_txRsp_bits_txnID(wb_io_txRsp_bits_txnID),
    .io_txRsp_bits_resp(wb_io_txRsp_bits_resp),
    .io_txRsp_bits_traceTag(wb_io_txRsp_bits_traceTag),
    .io_rxRsp_ready(wb_io_rxRsp_ready),
    .io_rxRsp_valid(wb_io_rxRsp_valid),
    .io_rxRsp_bits_txnID(wb_io_rxRsp_bits_txnID),
    .io_rxRsp_bits_srcID(wb_io_rxRsp_bits_srcID),
    .io_rxRsp_bits_opcode(wb_io_rxRsp_bits_opcode),
    .io_rxRsp_bits_dbID(wb_io_rxRsp_bits_dbID),
    .io_rxRsp_bits_traceTag(wb_io_rxRsp_bits_traceTag),
    .io_blockQuery_0_valid(wb_io_blockQuery_0_valid),
    .io_blockQuery_0_bits(wb_io_blockQuery_0_bits),
    .io_blockQuery_1_valid(wb_io_blockQuery_1_valid),
    .io_blockQuery_1_bits(wb_io_blockQuery_1_bits),
    .io_blockQuery_2_valid(wb_io_blockQuery_2_valid),
    .io_blockQuery_2_bits(wb_io_blockQuery_2_bits),
    .io_blockQuery_3_valid(wb_io_blockQuery_3_valid),
    .io_blockQuery_3_bits(wb_io_blockQuery_3_bits),
    .io_block_0(wb_io_block_0),
    .io_block_1(wb_io_block_1),
    .io_block_2(wb_io_block_2),
    .io_block_3(wb_io_block_3),
    .io_wfi_safe(wb_io_wfi_safe)
  );
  ProbeQueue probe ( // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 221:21]
    .clock(probe_clock),
    .reset(probe_reset),
    .io_rxSnp_ready(probe_io_rxSnp_ready),
    .io_rxSnp_valid(probe_io_rxSnp_valid),
    .io_rxSnp_bits_txnID(probe_io_rxSnp_bits_txnID),
    .io_rxSnp_bits_opcode(probe_io_rxSnp_bits_opcode),
    .io_rxSnp_bits_addr(probe_io_rxSnp_bits_addr),
    .io_rxSnp_bits_tagAlias(probe_io_rxSnp_bits_tagAlias),
    .io_pipeReq_ready(probe_io_pipeReq_ready),
    .io_pipeReq_valid(probe_io_pipeReq_valid),
    .io_pipeReq_bits_vaddr(probe_io_pipeReq_bits_vaddr),
    .io_pipeReq_bits_addr(probe_io_pipeReq_bits_addr),
    .io_pipeReq_bits_tagAlias(probe_io_pipeReq_bits_tagAlias),
    .io_pipeReq_bits_id(probe_io_pipeReq_bits_id),
    .io_pipeReq_bits_probeOp(probe_io_pipeReq_bits_probeOp),
    .io_pipeReq_bits_needData(probe_io_pipeReq_bits_needData),
    .io_pipeReq_bits_snpTxnId(probe_io_pipeReq_bits_snpTxnId),
    .io_probeResp_ready(probe_io_probeResp_ready),
    .io_probeResp_valid(probe_io_probeResp_valid),
    .io_probeResp_bits_id(probe_io_probeResp_bits_id),
    .io_lrscLockedBlock_valid(probe_io_lrscLockedBlock_valid),
    .io_lrscLockedBlock_bits(probe_io_lrscLockedBlock_bits),
    .io_updateResvSet(probe_io_updateResvSet),
    .io_missHold_0_valid(probe_io_missHold_0_valid),
    .io_missHold_0_bits_addr(probe_io_missHold_0_bits_addr),
    .io_missHold_0_bits_alias(probe_io_missHold_0_bits_alias),
    .io_missHold_1_valid(probe_io_missHold_1_valid),
    .io_missHold_1_bits_addr(probe_io_missHold_1_bits_addr),
    .io_missHold_1_bits_alias(probe_io_missHold_1_bits_alias),
    .io_missHold_2_valid(probe_io_missHold_2_valid),
    .io_missHold_2_bits_addr(probe_io_missHold_2_bits_addr),
    .io_missHold_2_bits_alias(probe_io_missHold_2_bits_alias),
    .io_missHold_3_valid(probe_io_missHold_3_valid),
    .io_missHold_3_bits_addr(probe_io_missHold_3_bits_addr),
    .io_missHold_3_bits_alias(probe_io_missHold_3_bits_alias),
    .io_missHold_4_valid(probe_io_missHold_4_valid),
    .io_missHold_4_bits_addr(probe_io_missHold_4_bits_addr),
    .io_missHold_4_bits_alias(probe_io_missHold_4_bits_alias),
    .io_missHold_5_valid(probe_io_missHold_5_valid),
    .io_missHold_5_bits_addr(probe_io_missHold_5_bits_addr),
    .io_missHold_5_bits_alias(probe_io_missHold_5_bits_alias),
    .io_missHold_6_valid(probe_io_missHold_6_valid),
    .io_missHold_6_bits_addr(probe_io_missHold_6_bits_addr),
    .io_missHold_6_bits_alias(probe_io_missHold_6_bits_alias),
    .io_missHold_7_valid(probe_io_missHold_7_valid),
    .io_missHold_7_bits_addr(probe_io_missHold_7_bits_addr),
    .io_missHold_7_bits_alias(probe_io_missHold_7_bits_alias),
    .io_missHold_8_valid(probe_io_missHold_8_valid),
    .io_missHold_8_bits_addr(probe_io_missHold_8_bits_addr),
    .io_missHold_8_bits_alias(probe_io_missHold_8_bits_alias),
    .io_missHold_9_valid(probe_io_missHold_9_valid),
    .io_missHold_9_bits_addr(probe_io_missHold_9_bits_addr),
    .io_missHold_9_bits_alias(probe_io_missHold_9_bits_alias),
    .io_missHold_10_valid(probe_io_missHold_10_valid),
    .io_missHold_10_bits_addr(probe_io_missHold_10_bits_addr),
    .io_missHold_10_bits_alias(probe_io_missHold_10_bits_alias),
    .io_missHold_11_valid(probe_io_missHold_11_valid),
    .io_missHold_11_bits_addr(probe_io_missHold_11_bits_addr),
    .io_missHold_11_bits_alias(probe_io_missHold_11_bits_alias),
    .io_missHold_12_valid(probe_io_missHold_12_valid),
    .io_missHold_12_bits_addr(probe_io_missHold_12_bits_addr),
    .io_missHold_12_bits_alias(probe_io_missHold_12_bits_alias),
    .io_missHold_13_valid(probe_io_missHold_13_valid),
    .io_missHold_13_bits_addr(probe_io_missHold_13_bits_addr),
    .io_missHold_13_bits_alias(probe_io_missHold_13_bits_alias),
    .io_missHold_14_valid(probe_io_missHold_14_valid),
    .io_missHold_14_bits_addr(probe_io_missHold_14_bits_addr),
    .io_missHold_14_bits_alias(probe_io_missHold_14_bits_alias),
    .io_missHold_15_valid(probe_io_missHold_15_valid),
    .io_missHold_15_bits_addr(probe_io_missHold_15_bits_addr),
    .io_missHold_15_bits_alias(probe_io_missHold_15_bits_alias),
    .io_dropLine_0_valid(probe_io_dropLine_0_valid),
    .io_dropLine_0_bits_addr(probe_io_dropLine_0_bits_addr),
    .io_dropLine_0_bits_alias(probe_io_dropLine_0_bits_alias),
    .io_dropLine_1_valid(probe_io_dropLine_1_valid),
    .io_dropLine_1_bits_addr(probe_io_dropLine_1_bits_addr),
    .io_dropLine_1_bits_alias(probe_io_dropLine_1_bits_alias),
    .io_dropLine_2_valid(probe_io_dropLine_2_valid),
    .io_dropLine_2_bits_addr(probe_io_dropLine_2_bits_addr),
    .io_dropLine_2_bits_alias(probe_io_dropLine_2_bits_alias),
    .io_dropLine_3_valid(probe_io_dropLine_3_valid),
    .io_dropLine_3_bits_addr(probe_io_dropLine_3_bits_addr),
    .io_dropLine_3_bits_alias(probe_io_dropLine_3_bits_alias),
    .io_dropLine_4_valid(probe_io_dropLine_4_valid),
    .io_dropLine_4_bits_addr(probe_io_dropLine_4_bits_addr),
    .io_dropLine_4_bits_alias(probe_io_dropLine_4_bits_alias),
    .io_dropLine_5_valid(probe_io_dropLine_5_valid),
    .io_dropLine_5_bits_addr(probe_io_dropLine_5_bits_addr),
    .io_dropLine_5_bits_alias(probe_io_dropLine_5_bits_alias),
    .io_dropLine_6_valid(probe_io_dropLine_6_valid),
    .io_dropLine_6_bits_addr(probe_io_dropLine_6_bits_addr),
    .io_dropLine_6_bits_alias(probe_io_dropLine_6_bits_alias),
    .io_dropLine_7_valid(probe_io_dropLine_7_valid),
    .io_dropLine_7_bits_addr(probe_io_dropLine_7_bits_addr),
    .io_dropLine_7_bits_alias(probe_io_dropLine_7_bits_alias),
    .io_dropLine_8_valid(probe_io_dropLine_8_valid),
    .io_dropLine_8_bits_addr(probe_io_dropLine_8_bits_addr),
    .io_dropLine_8_bits_alias(probe_io_dropLine_8_bits_alias),
    .io_dropLine_9_valid(probe_io_dropLine_9_valid),
    .io_dropLine_9_bits_addr(probe_io_dropLine_9_bits_addr),
    .io_dropLine_9_bits_alias(probe_io_dropLine_9_bits_alias),
    .io_dropLine_10_valid(probe_io_dropLine_10_valid),
    .io_dropLine_10_bits_addr(probe_io_dropLine_10_bits_addr),
    .io_dropLine_10_bits_alias(probe_io_dropLine_10_bits_alias),
    .io_dropLine_11_valid(probe_io_dropLine_11_valid),
    .io_dropLine_11_bits_addr(probe_io_dropLine_11_bits_addr),
    .io_dropLine_11_bits_alias(probe_io_dropLine_11_bits_alias),
    .io_dropLine_12_valid(probe_io_dropLine_12_valid),
    .io_dropLine_12_bits_addr(probe_io_dropLine_12_bits_addr),
    .io_dropLine_12_bits_alias(probe_io_dropLine_12_bits_alias),
    .io_dropLine_13_valid(probe_io_dropLine_13_valid),
    .io_dropLine_13_bits_addr(probe_io_dropLine_13_bits_addr),
    .io_dropLine_13_bits_alias(probe_io_dropLine_13_bits_alias),
    .io_dropLine_14_valid(probe_io_dropLine_14_valid),
    .io_dropLine_14_bits_addr(probe_io_dropLine_14_bits_addr),
    .io_dropLine_14_bits_alias(probe_io_dropLine_14_bits_alias),
    .io_dropLine_15_valid(probe_io_dropLine_15_valid),
    .io_dropLine_15_bits_addr(probe_io_dropLine_15_bits_addr),
    .io_dropLine_15_bits_alias(probe_io_dropLine_15_bits_alias),
    .io_wfi_safe(probe_io_wfi_safe)
  );
  assign io_load_0_req_ready = loads_0_io_lsu_req_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_0_resp_valid = loads_0_io_lsu_resp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_0_resp_bits_data = loads_0_io_lsu_resp_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_0_resp_bits_id = loads_0_io_lsu_resp_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_0_resp_bits_miss = loads_0_io_lsu_resp_bits_miss; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_0_resp_bits_replay = loads_0_io_lsu_resp_bits_replay; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_0_resp_bits_replayCarry_real_way_en = loads_0_io_lsu_resp_bits_replayCarry_real_way_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_0_resp_bits_replayCarry_valid = loads_0_io_lsu_resp_bits_replayCarry_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_0_resp_bits_mshr_id = loads_0_io_lsu_resp_bits_mshr_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_0_resp_bits_handled = loads_0_io_lsu_resp_bits_handled; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_0_resp_bits_real_miss = loads_0_io_lsu_resp_bits_real_miss; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_0_resp_bits_replacementUpdated = loads_0_io_lsu_resp_bits_replacementUpdated; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_0_s1_disable_fast_wakeup = loads_0_io_lsu_s1_disable_fast_wakeup; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_0_s2_hit = loads_0_io_lsu_s2_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_0_s2_first_hit = loads_0_io_lsu_s2_first_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_0_s2_bank_conflict = loads_0_io_lsu_s2_bank_conflict; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_0_s2_wpu_pred_fail = 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_0_s2_mq_nack = loads_0_io_lsu_s2_mq_nack; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_1_req_ready = loads_1_io_lsu_req_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_1_resp_valid = loads_1_io_lsu_resp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_1_resp_bits_data = loads_1_io_lsu_resp_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_1_resp_bits_id = loads_1_io_lsu_resp_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_1_resp_bits_miss = loads_1_io_lsu_resp_bits_miss; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_1_resp_bits_replay = loads_1_io_lsu_resp_bits_replay; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_1_resp_bits_replayCarry_real_way_en = loads_1_io_lsu_resp_bits_replayCarry_real_way_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_1_resp_bits_replayCarry_valid = loads_1_io_lsu_resp_bits_replayCarry_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_1_resp_bits_mshr_id = loads_1_io_lsu_resp_bits_mshr_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_1_resp_bits_handled = loads_1_io_lsu_resp_bits_handled; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_1_resp_bits_real_miss = loads_1_io_lsu_resp_bits_real_miss; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_1_resp_bits_replacementUpdated = loads_1_io_lsu_resp_bits_replacementUpdated; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_1_s1_disable_fast_wakeup = loads_1_io_lsu_s1_disable_fast_wakeup; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_1_s2_hit = loads_1_io_lsu_s2_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_1_s2_first_hit = loads_1_io_lsu_s2_first_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_1_s2_bank_conflict = loads_1_io_lsu_s2_bank_conflict; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_1_s2_wpu_pred_fail = 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_load_1_s2_mq_nack = loads_1_io_lsu_s2_mq_nack; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign io_store_req_ready = pipe_io_store_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 296:12]
  assign io_store_main_pipe_hit_resp_valid = pipe_io_storeHit_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 297:31]
  assign io_store_main_pipe_hit_resp_bits_miss = 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 297:31]
  assign io_store_main_pipe_hit_resp_bits_replay = 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 297:31]
  assign io_store_main_pipe_hit_resp_bits_id = pipe_io_storeHit_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 297:31]
  assign io_store_refill_hit_resp_valid = miss_io_storeDone_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 298:28]
  assign io_store_refill_hit_resp_bits_miss = 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 298:28]
  assign io_store_refill_hit_resp_bits_replay = 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 298:28]
  assign io_store_refill_hit_resp_bits_id = miss_io_storeDone_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 298:28]
  assign io_store_replay_resp_valid = pipe_io_storeReplay_valid | miss_io_storeReplay_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 300:40]
  assign io_store_replay_resp_bits_miss = pipe_io_storeReplay_valid ? 1'h0 : 1'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 301:21]
  assign io_store_replay_resp_bits_replay = 1'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 301:21]
  assign io_store_replay_resp_bits_id = pipe_io_storeReplay_valid ? pipe_io_storeReplay_bits_id :
    miss_io_storeReplay_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 301:21]
  assign io_atomics_req_ready = pipe_io_atomic_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 305:13]
  assign io_atomics_resp_valid = pipe_io_atomicResp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 306:19]
  assign io_atomics_resp_bits_id = pipe_io_atomicResp_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 306:19]
  assign io_atomics_resp_bits_cmd = pipe_io_atomicResp_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 306:19]
  assign io_atomics_resp_bits_data = pipe_io_atomicResp_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 306:19]
  assign io_atomics_resp_bits_success = pipe_io_atomicResp_bits_success; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 306:19]
  assign io_atomics_replay_valid = pipe_io_atomicReplay_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 307:21]
  assign io_atomics_replay_bits_miss = 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 307:21]
  assign io_atomics_replay_bits_replay = 1'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 307:21]
  assign io_atomics_replay_bits_id = pipe_io_atomicReplay_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 307:21]
  assign io_cmoReq_ready = miss_io_cmoReq_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 309:18]
  assign io_cmoResp_valid = miss_io_cmoResp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 310:14]
  assign io_cmoResp_bits_id = miss_io_cmoResp_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 310:14]
  assign io_cmoResp_bits_done = 1'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 310:14]
  assign io_cmoResp_bits_error = miss_io_cmoResp_bits_error; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 310:14]
  assign io_wfi_safe = miss_io_wfi_safe & wb_io_wfi_safe & probe_io_wfi_safe & ~pipe_io_busy & ~loadBusy; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 344:86]
  assign io_l2_req_valid = miss_io_txReq_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 317:13]
  assign io_l2_req_bits_txnID = miss_io_txReq_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 317:13]
  assign io_l2_req_bits_srcID = 7'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 317:13]
  assign io_l2_req_bits_tgtID = 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 317:13]
  assign io_l2_req_bits_opcode = miss_io_txReq_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 317:13]
  assign io_l2_req_bits_size = 3'h6; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 317:13]
  assign io_l2_req_bits_addr = miss_io_txReq_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 317:13]
  assign io_l2_req_bits_tagAlias = miss_io_txReq_bits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 317:13]
  assign io_l2_req_bits_ns = 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 317:13]
  assign io_l2_req_bits_order = 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 317:13]
  assign io_l2_req_bits_memAttr = 4'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 317:13]
  assign io_l2_req_bits_excl = 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 317:13]
  assign io_l2_req_bits_expCompData = miss_io_txReq_bits_expCompData; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 317:13]
  assign io_l2_req_bits_expCompStash = miss_io_txReq_bits_expCompStash; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 317:13]
  assign io_l2_req_bits_wayValid = 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 317:13]
  assign io_l2_req_bits_way = 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 317:13]
  assign io_l2_req_bits_traceTag = 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 317:13]
  assign io_l2_evt_valid = wb_io_txEvt_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 318:13]
  assign io_l2_evt_bits_txnID = wb_io_txEvt_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 318:13]
  assign io_l2_evt_bits_srcID = 7'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 318:13]
  assign io_l2_evt_bits_tgtID = 7'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 318:13]
  assign io_l2_evt_bits_opcode = wb_io_txEvt_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 318:13]
  assign io_l2_evt_bits_addr = wb_io_txEvt_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 318:13]
  assign io_l2_evt_bits_ns = 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 318:13]
  assign io_l2_evt_bits_memAttr = 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 318:13]
  assign io_l2_evt_bits_wayValid = 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 318:13]
  assign io_l2_evt_bits_way = 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 318:13]
  assign io_l2_evt_bits_traceTag = wb_io_txEvt_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 318:13]
  assign io_l2_txRsp_valid = wb_io_txRsp_valid | miss_io_txRsp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 335:37]
  assign io_l2_txRsp_bits_txnID = wb_io_txRsp_valid ? wb_io_txRsp_bits_txnID : miss_io_txRsp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 336:26]
  assign io_l2_txRsp_bits_srcID = 7'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 336:26]
  assign io_l2_txRsp_bits_tgtID = wb_io_txRsp_valid ? 7'h0 : miss_io_txRsp_bits_tgtID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 336:26]
  assign io_l2_txRsp_bits_opcode = wb_io_txRsp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 336:26]
  assign io_l2_txRsp_bits_respErr = 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 336:26]
  assign io_l2_txRsp_bits_resp = wb_io_txRsp_valid ? wb_io_txRsp_bits_resp : 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 336:26]
  assign io_l2_txRsp_bits_traceTag = wb_io_txRsp_valid ? wb_io_txRsp_bits_traceTag : miss_io_txRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 336:26]
  assign io_l2_txDat_valid = wb_io_txDat_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 319:15]
  assign io_l2_txDat_bits_txnID = wb_io_txDat_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 319:15]
  assign io_l2_txDat_bits_srcID = 7'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 319:15]
  assign io_l2_txDat_bits_tgtID = wb_io_txDat_bits_tgtID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 319:15]
  assign io_l2_txDat_bits_opcode = wb_io_txDat_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 319:15]
  assign io_l2_txDat_bits_respErr = 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 319:15]
  assign io_l2_txDat_bits_resp = wb_io_txDat_bits_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 319:15]
  assign io_l2_txDat_bits_dataID = wb_io_txDat_bits_dataID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 319:15]
  assign io_l2_txDat_bits_data = wb_io_txDat_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 319:15]
  assign io_l2_txDat_bits_byteEnable = 32'hffffffff; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 319:15]
  assign io_l2_txDat_bits_traceTag = wb_io_txDat_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 319:15]
  assign io_l2_rxRsp_ready = rspToWb ? wb_io_rxRsp_ready : rspToMiss & miss_io_rxRsp_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 330:27]
  assign io_l2_rxDat_ready = 1'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 320:15]
  assign io_l2_rxSnp_ready = probe_io_rxSnp_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 321:15]
  assign io_forwardChi_valid = miss_io_forwardChi_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 311:17]
  assign io_forwardChi_bits_id = miss_io_forwardChi_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 311:17]
  assign io_forwardChi_bits_half = miss_io_forwardChi_bits_half; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 311:17]
  assign io_forwardChi_bits_data = miss_io_forwardChi_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 311:17]
  assign io_forwardMshr_data_valid = miss_io_forwardMshr_data_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 312:18]
  assign io_forwardMshr_data_bits = miss_io_forwardMshr_data_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 312:18]
  assign io_refillWakeup_valid = miss_io_refillWakeup_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 313:19]
  assign io_refillWakeup_bits_id = miss_io_refillWakeup_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 313:19]
  assign io_refillWakeup_bits_addr = miss_io_refillWakeup_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 313:19]
  assign io_refillWakeup_bits_alias = miss_io_refillWakeup_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 313:19]
  assign io_loadReplay_valid = miss_io_loadReplay_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 314:17]
  assign io_loadReplay_bits_id = miss_io_loadReplay_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 314:17]
  assign io_loadReplay_bits_addr = miss_io_loadReplay_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 314:17]
  assign io_loadReplay_bits_alias = miss_io_loadReplay_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 314:17]
  assign tags_clock = clock;
  assign tags_reset = reset;
  assign tags_io_read_0_valid = loads_0_io_tag_read_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 227:21]
  assign tags_io_read_0_bits_idx = loads_0_io_tag_read_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 227:21]
  assign tags_io_read_1_valid = loads_1_io_tag_read_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 227:21]
  assign tags_io_read_1_bits_idx = loads_1_io_tag_read_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 227:21]
  assign tags_io_read_2_valid = pipe_io_tagRead_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 245:35]
  assign tags_io_read_2_bits_idx = pipe_io_tagRead_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 245:35]
  assign tags_io_write_valid = pipe_io_tagWrite_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 249:17]
  assign tags_io_write_bits_idx = pipe_io_tagWrite_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 249:17]
  assign tags_io_write_bits_way_en = pipe_io_tagWrite_bits_way_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 249:17]
  assign tags_io_write_bits_tag = pipe_io_tagWrite_bits_tag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 249:17]
  assign meta_clock = clock;
  assign meta_reset = reset;
  assign meta_io_read_0_valid = loads_0_io_meta_read_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 228:21]
  assign meta_io_read_0_bits_idx = loads_0_io_meta_read_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 228:21]
  assign meta_io_read_1_valid = loads_1_io_meta_read_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 228:21]
  assign meta_io_read_1_bits_idx = loads_1_io_meta_read_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 228:21]
  assign meta_io_read_2_valid = pipe_io_metaRead_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 246:35]
  assign meta_io_read_2_bits_idx = pipe_io_metaRead_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 246:35]
  assign meta_io_write_valid = pipe_io_metaWrite_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 250:17]
  assign meta_io_write_bits_idx = pipe_io_metaWrite_bits_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 250:17]
  assign meta_io_write_bits_way_en = pipe_io_metaWrite_bits_way_en; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 250:17]
  assign meta_io_write_bits_meta_coh = pipe_io_metaWrite_bits_meta_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 250:17]
  assign data_clock = clock;
  assign data_reset = reset;
  assign data_io_load_0_valid = loads_0_io_banked_data_read_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 231:21]
  assign data_io_load_0_bits_addr = loads_0_io_banked_data_read_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 231:21]
  assign data_io_load_0_bits_bankMask = loads_0_io_banked_data_read_bits_bankMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 231:21]
  assign data_io_load_0_bits_kill = loads_0_io_banked_data_read_bits_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 231:21]
  assign data_io_load_0_bits_lqIdx_flag = loads_0_io_banked_data_read_bits_lqIdx_flag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 231:21]
  assign data_io_load_0_bits_lqIdx_value = loads_0_io_banked_data_read_bits_lqIdx_value; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 231:21]
  assign data_io_load_1_valid = loads_1_io_banked_data_read_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 231:21]
  assign data_io_load_1_bits_addr = loads_1_io_banked_data_read_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 231:21]
  assign data_io_load_1_bits_bankMask = loads_1_io_banked_data_read_bits_bankMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 231:21]
  assign data_io_load_1_bits_kill = loads_1_io_banked_data_read_bits_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 231:21]
  assign data_io_load_1_bits_lqIdx_flag = loads_1_io_banked_data_read_bits_lqIdx_flag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 231:21]
  assign data_io_load_1_bits_lqIdx_value = loads_1_io_banked_data_read_bits_lqIdx_value; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 231:21]
  assign data_io_line_valid = pipe_io_dataRead_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 251:16]
  assign data_io_line_bits_addr = pipe_io_dataRead_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 251:16]
  assign data_io_line_bits_bankMask = pipe_io_dataRead_bits_bankMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 251:16]
  assign data_io_write_valid = pipe_io_dataWrite_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 253:17]
  assign data_io_write_bits_addr = pipe_io_dataWrite_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 253:17]
  assign data_io_write_bits_wayEn = pipe_io_dataWrite_bits_wayEn; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 253:17]
  assign data_io_write_bits_bankMask = pipe_io_dataWrite_bits_bankMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 253:17]
  assign data_io_write_bits_data_0 = pipe_io_dataWrite_bits_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 253:17]
  assign data_io_write_bits_data_1 = pipe_io_dataWrite_bits_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 253:17]
  assign data_io_write_bits_data_2 = pipe_io_dataWrite_bits_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 253:17]
  assign data_io_write_bits_data_3 = pipe_io_dataWrite_bits_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 253:17]
  assign data_io_write_bits_data_4 = pipe_io_dataWrite_bits_data_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 253:17]
  assign data_io_write_bits_data_5 = pipe_io_dataWrite_bits_data_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 253:17]
  assign data_io_write_bits_data_6 = pipe_io_dataWrite_bits_data_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 253:17]
  assign data_io_write_bits_data_7 = pipe_io_dataWrite_bits_data_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 253:17]
  assign loads_0_clock = clock;
  assign loads_0_reset = reset;
  assign loads_0_io_lsu_req_valid = io_load_0_req_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_0_io_lsu_req_bits_cmd = io_load_0_req_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_0_io_lsu_req_bits_vaddr = io_load_0_req_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_0_io_lsu_req_bits_id = io_load_0_req_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_0_io_lsu_req_bits_isFirstIssue = io_load_0_req_bits_isFirstIssue; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_0_io_lsu_req_bits_lqIdx_flag = io_load_0_req_bits_lqIdx_flag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_0_io_lsu_req_bits_lqIdx_value = io_load_0_req_bits_lqIdx_value; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_0_io_lsu_resp_ready = io_load_0_resp_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_0_io_lsu_s1_kill = io_load_0_s1_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_0_io_lsu_s2_kill = io_load_0_s2_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_0_io_lsu_is128Req = io_load_0_is128Req; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_0_io_lsu_s1_paddr_dup_lsu = io_load_0_s1_paddr_dup_lsu; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_0_io_lsu_s1_paddr_dup_dcache = io_load_0_s1_paddr_dup_dcache; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_0_io_meta_resp_0_coh = meta_io_resp_0_0_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 230:18]
  assign loads_0_io_meta_resp_1_coh = meta_io_resp_0_1_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 230:18]
  assign loads_0_io_meta_resp_2_coh = meta_io_resp_0_2_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 230:18]
  assign loads_0_io_meta_resp_3_coh = meta_io_resp_0_3_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 230:18]
  assign loads_0_io_tag_read_ready = tags_io_read_0_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 227:21]
  assign loads_0_io_tag_resp_0 = tags_io_resp_0_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 229:17]
  assign loads_0_io_tag_resp_1 = tags_io_resp_0_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 229:17]
  assign loads_0_io_tag_resp_2 = tags_io_resp_0_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 229:17]
  assign loads_0_io_tag_resp_3 = tags_io_resp_0_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 229:17]
  assign loads_0_io_banked_data_read_ready = data_io_load_0_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 231:21]
  assign loads_0_io_banked_data_resp_0_data_0 = data_io_loadResp_0_0_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 232:25]
  assign loads_0_io_banked_data_resp_0_data_1 = data_io_loadResp_0_0_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 232:25]
  assign loads_0_io_banked_data_resp_0_data_2 = data_io_loadResp_0_0_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 232:25]
  assign loads_0_io_banked_data_resp_0_data_3 = data_io_loadResp_0_0_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 232:25]
  assign loads_0_io_banked_data_resp_1_data_0 = data_io_loadResp_0_1_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 232:25]
  assign loads_0_io_banked_data_resp_1_data_1 = data_io_loadResp_0_1_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 232:25]
  assign loads_0_io_banked_data_resp_1_data_2 = data_io_loadResp_0_1_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 232:25]
  assign loads_0_io_banked_data_resp_1_data_3 = data_io_loadResp_0_1_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 232:25]
  assign loads_0_io_bank_conflict = data_io_bankConflict_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 233:22]
  assign loads_0_io_miss_req_ready = arb_io_in_1_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 256:16]
  assign loads_0_io_miss_resp_id = miss_io_missResp_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 241:18]
  assign loads_0_io_miss_resp_handled = miss_io_missResp_handled; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 241:18]
  assign loads_0_io_wbq_block_miss_req = wb_io_block_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 239:27]
  assign loads_0_io_unique_occupy_fail = miss_io_occupyFail_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 235:27]
  assign loads_1_clock = clock;
  assign loads_1_reset = reset;
  assign loads_1_io_lsu_req_valid = io_load_1_req_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_1_io_lsu_req_bits_cmd = io_load_1_req_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_1_io_lsu_req_bits_vaddr = io_load_1_req_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_1_io_lsu_req_bits_id = io_load_1_req_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_1_io_lsu_req_bits_isFirstIssue = io_load_1_req_bits_isFirstIssue; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_1_io_lsu_req_bits_lqIdx_flag = io_load_1_req_bits_lqIdx_flag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_1_io_lsu_req_bits_lqIdx_value = io_load_1_req_bits_lqIdx_value; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_1_io_lsu_resp_ready = io_load_1_resp_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_1_io_lsu_s1_kill = io_load_1_s1_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_1_io_lsu_s2_kill = io_load_1_s2_kill; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_1_io_lsu_is128Req = io_load_1_is128Req; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_1_io_lsu_s1_paddr_dup_lsu = io_load_1_s1_paddr_dup_lsu; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_1_io_lsu_s1_paddr_dup_dcache = io_load_1_s1_paddr_dup_dcache; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 226:12]
  assign loads_1_io_meta_resp_0_coh = meta_io_resp_1_0_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 230:18]
  assign loads_1_io_meta_resp_1_coh = meta_io_resp_1_1_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 230:18]
  assign loads_1_io_meta_resp_2_coh = meta_io_resp_1_2_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 230:18]
  assign loads_1_io_meta_resp_3_coh = meta_io_resp_1_3_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 230:18]
  assign loads_1_io_tag_read_ready = tags_io_read_1_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 227:21]
  assign loads_1_io_tag_resp_0 = tags_io_resp_1_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 229:17]
  assign loads_1_io_tag_resp_1 = tags_io_resp_1_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 229:17]
  assign loads_1_io_tag_resp_2 = tags_io_resp_1_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 229:17]
  assign loads_1_io_tag_resp_3 = tags_io_resp_1_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 229:17]
  assign loads_1_io_banked_data_read_ready = data_io_load_1_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 231:21]
  assign loads_1_io_banked_data_resp_0_data_0 = data_io_loadResp_1_0_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 232:25]
  assign loads_1_io_banked_data_resp_0_data_1 = data_io_loadResp_1_0_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 232:25]
  assign loads_1_io_banked_data_resp_0_data_2 = data_io_loadResp_1_0_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 232:25]
  assign loads_1_io_banked_data_resp_0_data_3 = data_io_loadResp_1_0_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 232:25]
  assign loads_1_io_banked_data_resp_1_data_0 = data_io_loadResp_1_1_data_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 232:25]
  assign loads_1_io_banked_data_resp_1_data_1 = data_io_loadResp_1_1_data_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 232:25]
  assign loads_1_io_banked_data_resp_1_data_2 = data_io_loadResp_1_1_data_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 232:25]
  assign loads_1_io_banked_data_resp_1_data_3 = data_io_loadResp_1_1_data_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 232:25]
  assign loads_1_io_bank_conflict = data_io_bankConflict_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 233:22]
  assign loads_1_io_miss_req_ready = arb_io_in_2_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 257:16]
  assign loads_1_io_miss_resp_id = miss_io_missResp_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 241:18]
  assign loads_1_io_miss_resp_handled = miss_io_missResp_handled; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 241:18]
  assign loads_1_io_wbq_block_miss_req = wb_io_block_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 239:27]
  assign loads_1_io_unique_occupy_fail = miss_io_occupyFail_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 235:27]
  assign pipe_clock = clock;
  assign pipe_reset = reset;
  assign pipe_io_probe_valid = probe_io_pipeReq_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 287:20]
  assign pipe_io_probe_bits_vaddr = probe_io_pipeReq_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 287:20]
  assign pipe_io_probe_bits_addr = probe_io_pipeReq_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 287:20]
  assign pipe_io_probe_bits_tagAlias = probe_io_pipeReq_bits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 287:20]
  assign pipe_io_probe_bits_id = probe_io_pipeReq_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 287:20]
  assign pipe_io_probe_bits_probeOp = probe_io_pipeReq_bits_probeOp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 287:20]
  assign pipe_io_probe_bits_snpTxnId = probe_io_pipeReq_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 287:20]
  assign pipe_io_refill_valid = miss_io_refill_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 264:13]
  assign pipe_io_refill_bits_cmd = miss_io_refill_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 264:13]
  assign pipe_io_refill_bits_vaddr = miss_io_refill_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 264:13]
  assign pipe_io_refill_bits_addr = miss_io_refill_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 264:13]
  assign pipe_io_refill_bits_id = miss_io_refill_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 264:13]
  assign pipe_io_refill_bits_missId = miss_io_refill_bits_missId; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 264:13]
  assign pipe_io_refill_bits_wordIdx = miss_io_refill_bits_wordIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 264:13]
  assign pipe_io_refill_bits_amoData = miss_io_refill_bits_amoData; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 264:13]
  assign pipe_io_refill_bits_amoMask = miss_io_refill_bits_amoMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 264:13]
  assign pipe_io_refill_bits_amoCmp = miss_io_refill_bits_amoCmp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 264:13]
  assign pipe_io_refill_bits_replaceWay = miss_io_refill_bits_replaceWay; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 264:13]
  assign pipe_io_store_valid = io_store_req_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 296:12]
  assign pipe_io_store_bits_cmd = io_store_req_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 296:12]
  assign pipe_io_store_bits_vaddr = io_store_req_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 296:12]
  assign pipe_io_store_bits_addr = io_store_req_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 296:12]
  assign pipe_io_store_bits_data = io_store_req_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 296:12]
  assign pipe_io_store_bits_mask = io_store_req_bits_mask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 296:12]
  assign pipe_io_store_bits_id = io_store_req_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 296:12]
  assign pipe_io_atomic_valid = io_atomics_req_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 305:13]
  assign pipe_io_atomic_bits_cmd = io_atomics_req_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 305:13]
  assign pipe_io_atomic_bits_vaddr = io_atomics_req_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 305:13]
  assign pipe_io_atomic_bits_addr = io_atomics_req_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 305:13]
  assign pipe_io_atomic_bits_id = io_atomics_req_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 305:13]
  assign pipe_io_atomic_bits_missId = io_atomics_req_bits_missId; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 305:13]
  assign pipe_io_atomic_bits_wordIdx = io_atomics_req_bits_wordIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 305:13]
  assign pipe_io_atomic_bits_amoData = io_atomics_req_bits_amoData; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 305:13]
  assign pipe_io_atomic_bits_amoMask = io_atomics_req_bits_amoMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 305:13]
  assign pipe_io_atomic_bits_amoCmp = io_atomics_req_bits_amoCmp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 305:13]
  assign pipe_io_atomic_bits_probeOp = io_atomics_req_bits_probeOp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 305:13]
  assign pipe_io_atomic_bits_needData = io_atomics_req_bits_needData; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 305:13]
  assign pipe_io_atomic_bits_snpTxnId = io_atomics_req_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 305:13]
  assign pipe_io_atomic_bits_replaceWay = io_atomics_req_bits_replaceWay; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 305:13]
  assign pipe_io_tagRead_ready = tags_io_read_2_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 245:35]
  assign pipe_io_tagResp_0 = tags_io_resp_2_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 247:14]
  assign pipe_io_tagResp_1 = tags_io_resp_2_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 247:14]
  assign pipe_io_tagResp_2 = tags_io_resp_2_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 247:14]
  assign pipe_io_tagResp_3 = tags_io_resp_2_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 247:14]
  assign pipe_io_metaResp_0_coh = meta_io_resp_2_0_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 248:15]
  assign pipe_io_metaResp_1_coh = meta_io_resp_2_1_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 248:15]
  assign pipe_io_metaResp_2_coh = meta_io_resp_2_2_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 248:15]
  assign pipe_io_metaResp_3_coh = meta_io_resp_2_3_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 248:15]
  assign pipe_io_dataRead_ready = data_io_line_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 251:16]
  assign pipe_io_dataResp_valid = data_io_lineResp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_0_0 = data_io_lineResp_bits_data_0_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_0_1 = data_io_lineResp_bits_data_0_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_0_2 = data_io_lineResp_bits_data_0_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_0_3 = data_io_lineResp_bits_data_0_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_1_0 = data_io_lineResp_bits_data_1_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_1_1 = data_io_lineResp_bits_data_1_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_1_2 = data_io_lineResp_bits_data_1_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_1_3 = data_io_lineResp_bits_data_1_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_2_0 = data_io_lineResp_bits_data_2_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_2_1 = data_io_lineResp_bits_data_2_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_2_2 = data_io_lineResp_bits_data_2_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_2_3 = data_io_lineResp_bits_data_2_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_3_0 = data_io_lineResp_bits_data_3_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_3_1 = data_io_lineResp_bits_data_3_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_3_2 = data_io_lineResp_bits_data_3_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_3_3 = data_io_lineResp_bits_data_3_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_4_0 = data_io_lineResp_bits_data_4_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_4_1 = data_io_lineResp_bits_data_4_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_4_2 = data_io_lineResp_bits_data_4_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_4_3 = data_io_lineResp_bits_data_4_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_5_0 = data_io_lineResp_bits_data_5_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_5_1 = data_io_lineResp_bits_data_5_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_5_2 = data_io_lineResp_bits_data_5_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_5_3 = data_io_lineResp_bits_data_5_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_6_0 = data_io_lineResp_bits_data_6_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_6_1 = data_io_lineResp_bits_data_6_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_6_2 = data_io_lineResp_bits_data_6_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_6_3 = data_io_lineResp_bits_data_6_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_7_0 = data_io_lineResp_bits_data_7_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_7_1 = data_io_lineResp_bits_data_7_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_7_2 = data_io_lineResp_bits_data_7_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_dataResp_bits_data_7_3 = data_io_lineResp_bits_data_7_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 252:15]
  assign pipe_io_missReq_ready = arb_io_in_0_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 255:16]
  assign pipe_io_missResp_handled = miss_io_missResp_handled; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 260:15]
  assign pipe_io_missResp_sameAddr = miss_io_missResp_sameAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 260:15]
  assign pipe_io_refillInfo_valid = miss_io_refillInfo_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 265:17]
  assign pipe_io_refillInfo_bits_data = miss_io_refillInfo_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 265:17]
  assign pipe_io_refillInfo_bits_retUnique = miss_io_refillInfo_bits_retUnique; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 265:17]
  assign pipe_io_refillInfo_bits_passDirty = miss_io_refillInfo_bits_passDirty; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 265:17]
  assign pipe_io_refillInfo_bits_storeData = miss_io_refillInfo_bits_storeData; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 265:17]
  assign pipe_io_refillInfo_bits_storeMask = miss_io_refillInfo_bits_storeMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 265:17]
  assign pipe_io_refillInfo_bits_error = miss_io_refillInfo_bits_error; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 265:17]
  assign pipe_io_pendingInvalidate = miss_io_pendingInvalidate; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 268:24]
  assign pipe_io_occupyWay = miss_io_occupyWay_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 276:16]
  assign pipe_io_occupyFail = miss_io_occupyFail_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 277:17]
  assign pipe_io_replaceBlock = miss_io_replaceBlock; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 279:19]
  assign pipe_io_wbBlock = wb_io_block_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 283:14]
  assign pipe_io_wbReq_ready = wb_io_req_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 281:13]
  assign pipe_io_atomicResp_ready = io_atomics_resp_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 306:19]
  assign pipe_io_atomicReplay_ready = io_atomics_replay_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 307:21]
  assign pipe_io_storeHit_ready = io_store_main_pipe_hit_resp_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 297:31]
  assign pipe_io_storeReplay_ready = io_store_replay_resp_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 302:24]
  assign pipe_io_replaceAccess_0_valid = loads_0_io_replace_access_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 240:30]
  assign pipe_io_replaceAccess_0_bits_set = loads_0_io_replace_access_bits_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 240:30]
  assign pipe_io_replaceAccess_0_bits_way = loads_0_io_replace_access_bits_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 240:30]
  assign pipe_io_replaceAccess_1_valid = loads_1_io_replace_access_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 240:30]
  assign pipe_io_replaceAccess_1_bits_set = loads_1_io_replace_access_bits_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 240:30]
  assign pipe_io_replaceAccess_1_bits_way = loads_1_io_replace_access_bits_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 240:30]
  assign miss_clock = clock;
  assign miss_reset = reset;
  assign miss_io_missReq_valid = arb_io_out_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 258:19]
  assign miss_io_missReq_bits_source = arb_io_out_bits_source; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 258:19]
  assign miss_io_missReq_bits_cmd = arb_io_out_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 258:19]
  assign miss_io_missReq_bits_addr = arb_io_out_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 258:19]
  assign miss_io_missReq_bits_vaddr = arb_io_out_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 258:19]
  assign miss_io_missReq_bits_full_overwrite = arb_io_out_bits_full_overwrite; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 258:19]
  assign miss_io_missReq_bits_word_idx = arb_io_out_bits_word_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 258:19]
  assign miss_io_missReq_bits_amo_data = arb_io_out_bits_amo_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 258:19]
  assign miss_io_missReq_bits_amo_mask = arb_io_out_bits_amo_mask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 258:19]
  assign miss_io_missReq_bits_amo_cmp = arb_io_out_bits_amo_cmp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 258:19]
  assign miss_io_missReq_bits_id = arb_io_out_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 258:19]
  assign miss_io_missReq_bits_scToUnique = arb_io_out_bits_scToUnique; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 258:19]
  assign miss_io_missReq_bits_occupy_way = arb_io_out_bits_occupy_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 258:19]
  assign miss_io_missReq_bits_store_data = arb_io_out_bits_store_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 258:19]
  assign miss_io_missReq_bits_store_mask = arb_io_out_bits_store_mask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 258:19]
  assign miss_io_replaceQuery_valid = pipe_io_replaceQuery_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 278:24]
  assign miss_io_replaceQuery_bits = pipe_io_replaceQuery_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 278:24]
  assign miss_io_refill_ready = pipe_io_refill_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 264:13]
  assign miss_io_mainpipeInfo_s2Refill = pipe_io_mainpipeInfo_s2Refill; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 266:24]
  assign miss_io_mainpipeInfo_s2MissId = pipe_io_mainpipeInfo_s2MissId; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 266:24]
  assign miss_io_mainpipeInfo_s3Done = pipe_io_mainpipeInfo_s3Done; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 266:24]
  assign miss_io_mainpipeInfo_s3MissId = pipe_io_mainpipeInfo_s3MissId; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 266:24]
  assign miss_io_mainpipeInfo_installed = pipe_io_mainpipeInfo_installed; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 266:24]
  assign miss_io_mainpipeInfo_finalCoh = pipe_io_mainpipeInfo_finalCoh; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 266:24]
  assign miss_io_pendingQuery_valid = pipe_io_pendingSnoop_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 267:24]
  assign miss_io_pendingQuery_bits = pipe_io_pendingSnoop_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 267:24]
  assign miss_io_cmoReq_valid = io_cmoReq_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 309:18]
  assign miss_io_cmoReq_bits_id = io_cmoReq_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 309:18]
  assign miss_io_cmoReq_bits_opcode = io_cmoReq_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 309:18]
  assign miss_io_cmoReq_bits_addr = io_cmoReq_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 309:18]
  assign miss_io_cmoReq_bits_alias = io_cmoReq_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 309:18]
  assign miss_io_cmoResp_ready = io_cmoResp_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 310:14]
  assign miss_io_cmoWbBlock = wb_io_block_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 285:22]
  assign miss_io_occupySet_0_valid = loads_0_io_unique_occupy_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 236:32]
  assign miss_io_occupySet_0_bits = loads_0_io_unique_occupy_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 237:31]
  assign miss_io_occupySet_1_valid = loads_1_io_unique_occupy_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 236:32]
  assign miss_io_occupySet_1_bits = loads_1_io_unique_occupy_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 237:31]
  assign miss_io_occupySet_2_valid = pipe_io_occupySet_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 275:24]
  assign miss_io_occupySet_2_bits = pipe_io_occupySet_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 275:24]
  assign miss_io_txReq_ready = io_l2_req_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 317:13]
  assign miss_io_rxDat_valid = io_l2_rxDat_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 320:15]
  assign miss_io_rxDat_bits_txnID = io_l2_rxDat_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 320:15]
  assign miss_io_rxDat_bits_srcID = io_l2_rxDat_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 320:15]
  assign miss_io_rxDat_bits_opcode = io_l2_rxDat_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 320:15]
  assign miss_io_rxDat_bits_dbID = io_l2_rxDat_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 320:15]
  assign miss_io_rxDat_bits_respErr = io_l2_rxDat_bits_respErr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 320:15]
  assign miss_io_rxDat_bits_resp = io_l2_rxDat_bits_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 320:15]
  assign miss_io_rxDat_bits_dataID = io_l2_rxDat_bits_dataID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 320:15]
  assign miss_io_rxDat_bits_data = io_l2_rxDat_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 320:15]
  assign miss_io_rxDat_bits_traceTag = io_l2_rxDat_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 320:15]
  assign miss_io_rxRsp_valid = io_l2_rxRsp_valid & rspToMiss; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 326:44]
  assign miss_io_rxRsp_bits_txnID = io_l2_rxRsp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 327:22]
  assign miss_io_rxRsp_bits_srcID = io_l2_rxRsp_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 327:22]
  assign miss_io_rxRsp_bits_opcode = io_l2_rxRsp_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 327:22]
  assign miss_io_rxRsp_bits_dbID = io_l2_rxRsp_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 327:22]
  assign miss_io_rxRsp_bits_respErr = io_l2_rxRsp_bits_respErr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 327:22]
  assign miss_io_rxRsp_bits_resp = io_l2_rxRsp_bits_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 327:22]
  assign miss_io_rxRsp_bits_traceTag = io_l2_rxRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 327:22]
  assign miss_io_txRsp_ready = io_l2_txRsp_ready & ~wb_io_txRsp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 338:37]
  assign miss_io_forwardMshr_id = io_forwardMshr_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 312:18]
  assign miss_io_forwardMshr_half = io_forwardMshr_half; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 312:18]
  assign miss_io_refillWakeup_ready = io_refillWakeup_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 313:19]
  assign miss_io_loadReplay_ready = io_loadReplay_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 314:17]
  assign miss_io_storeDone_ready = io_store_refill_hit_resp_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 298:28]
  assign miss_io_storeReplay_ready = io_store_replay_resp_ready & ~pipe_io_storeReplay_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 303:45]
  assign miss_io_snoop_valid = pipe_io_snoopNotice_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 269:17]
  assign miss_io_snoop_bits_addr = pipe_io_snoopNotice_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 269:17]
  assign miss_io_snoop_bits_alias = pipe_io_snoopNotice_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 269:17]
  assign miss_io_probeDrop_0_valid = probe_io_dropLine_0_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_0_bits_addr = probe_io_dropLine_0_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_0_bits_alias = probe_io_dropLine_0_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_1_valid = probe_io_dropLine_1_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_1_bits_addr = probe_io_dropLine_1_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_1_bits_alias = probe_io_dropLine_1_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_2_valid = probe_io_dropLine_2_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_2_bits_addr = probe_io_dropLine_2_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_2_bits_alias = probe_io_dropLine_2_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_3_valid = probe_io_dropLine_3_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_3_bits_addr = probe_io_dropLine_3_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_3_bits_alias = probe_io_dropLine_3_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_4_valid = probe_io_dropLine_4_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_4_bits_addr = probe_io_dropLine_4_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_4_bits_alias = probe_io_dropLine_4_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_5_valid = probe_io_dropLine_5_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_5_bits_addr = probe_io_dropLine_5_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_5_bits_alias = probe_io_dropLine_5_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_6_valid = probe_io_dropLine_6_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_6_bits_addr = probe_io_dropLine_6_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_6_bits_alias = probe_io_dropLine_6_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_7_valid = probe_io_dropLine_7_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_7_bits_addr = probe_io_dropLine_7_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_7_bits_alias = probe_io_dropLine_7_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_8_valid = probe_io_dropLine_8_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_8_bits_addr = probe_io_dropLine_8_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_8_bits_alias = probe_io_dropLine_8_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_9_valid = probe_io_dropLine_9_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_9_bits_addr = probe_io_dropLine_9_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_9_bits_alias = probe_io_dropLine_9_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_10_valid = probe_io_dropLine_10_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_10_bits_addr = probe_io_dropLine_10_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_10_bits_alias = probe_io_dropLine_10_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_11_valid = probe_io_dropLine_11_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_11_bits_addr = probe_io_dropLine_11_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_11_bits_alias = probe_io_dropLine_11_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_12_valid = probe_io_dropLine_12_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_12_bits_addr = probe_io_dropLine_12_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_12_bits_alias = probe_io_dropLine_12_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_13_valid = probe_io_dropLine_13_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_13_bits_addr = probe_io_dropLine_13_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_13_bits_alias = probe_io_dropLine_13_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_14_valid = probe_io_dropLine_14_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_14_bits_addr = probe_io_dropLine_14_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_14_bits_alias = probe_io_dropLine_14_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_15_valid = probe_io_dropLine_15_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_15_bits_addr = probe_io_dropLine_15_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign miss_io_probeDrop_15_bits_alias = probe_io_dropLine_15_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 289:21]
  assign arb_io_in_0_valid = pipe_io_missReq_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 255:16]
  assign arb_io_in_0_bits_source = pipe_io_missReq_bits_source; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 255:16]
  assign arb_io_in_0_bits_cmd = pipe_io_missReq_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 255:16]
  assign arb_io_in_0_bits_addr = pipe_io_missReq_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 255:16]
  assign arb_io_in_0_bits_vaddr = pipe_io_missReq_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 255:16]
  assign arb_io_in_0_bits_full_overwrite = pipe_io_missReq_bits_full_overwrite; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 255:16]
  assign arb_io_in_0_bits_word_idx = pipe_io_missReq_bits_word_idx; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 255:16]
  assign arb_io_in_0_bits_amo_data = pipe_io_missReq_bits_amo_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 255:16]
  assign arb_io_in_0_bits_amo_mask = pipe_io_missReq_bits_amo_mask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 255:16]
  assign arb_io_in_0_bits_amo_cmp = pipe_io_missReq_bits_amo_cmp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 255:16]
  assign arb_io_in_0_bits_id = pipe_io_missReq_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 255:16]
  assign arb_io_in_0_bits_scToUnique = pipe_io_missReq_bits_scToUnique; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 255:16]
  assign arb_io_in_0_bits_occupy_way = pipe_io_missReq_bits_occupy_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 255:16]
  assign arb_io_in_0_bits_store_data = pipe_io_missReq_bits_store_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 255:16]
  assign arb_io_in_0_bits_store_mask = pipe_io_missReq_bits_store_mask; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 255:16]
  assign arb_io_in_1_valid = loads_0_io_miss_req_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 256:16]
  assign arb_io_in_1_bits_source = loads_0_io_miss_req_bits_source; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 256:16]
  assign arb_io_in_1_bits_cmd = loads_0_io_miss_req_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 256:16]
  assign arb_io_in_1_bits_addr = loads_0_io_miss_req_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 256:16]
  assign arb_io_in_1_bits_vaddr = loads_0_io_miss_req_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 256:16]
  assign arb_io_in_1_bits_id = loads_0_io_miss_req_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 256:16]
  assign arb_io_in_1_bits_scToUnique = loads_0_io_miss_req_bits_scToUnique; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 256:16]
  assign arb_io_in_1_bits_occupy_way = loads_0_io_miss_req_bits_occupy_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 256:16]
  assign arb_io_in_2_valid = loads_1_io_miss_req_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 257:16]
  assign arb_io_in_2_bits_source = loads_1_io_miss_req_bits_source; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 257:16]
  assign arb_io_in_2_bits_cmd = loads_1_io_miss_req_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 257:16]
  assign arb_io_in_2_bits_addr = loads_1_io_miss_req_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 257:16]
  assign arb_io_in_2_bits_vaddr = loads_1_io_miss_req_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 257:16]
  assign arb_io_in_2_bits_id = loads_1_io_miss_req_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 257:16]
  assign arb_io_in_2_bits_scToUnique = loads_1_io_miss_req_bits_scToUnique; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 257:16]
  assign arb_io_in_2_bits_occupy_way = loads_1_io_miss_req_bits_occupy_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 257:16]
  assign wb_clock = clock;
  assign wb_reset = reset;
  assign wb_io_req_valid = pipe_io_wbReq_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 281:13]
  assign wb_io_req_bits_data = pipe_io_wbReq_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 281:13]
  assign wb_io_req_bits_addr = pipe_io_wbReq_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 281:13]
  assign wb_io_req_bits_opcode = pipe_io_wbReq_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 281:13]
  assign wb_io_req_bits_resp = pipe_io_wbReq_bits_resp; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 281:13]
  assign wb_io_req_bits_passDirty = pipe_io_wbReq_bits_passDirty; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 281:13]
  assign wb_io_req_bits_snpTxnId = pipe_io_wbReq_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 281:13]
  assign wb_io_txEvt_ready = io_l2_evt_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 318:13]
  assign wb_io_txDat_ready = io_l2_txDat_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 319:15]
  assign wb_io_txRsp_ready = io_l2_txRsp_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 337:16]
  assign wb_io_rxRsp_valid = io_l2_rxRsp_valid & rspToWb; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 328:42]
  assign wb_io_rxRsp_bits_txnID = io_l2_rxRsp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 329:20]
  assign wb_io_rxRsp_bits_srcID = io_l2_rxRsp_bits_srcID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 329:20]
  assign wb_io_rxRsp_bits_opcode = io_l2_rxRsp_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 329:20]
  assign wb_io_rxRsp_bits_dbID = io_l2_rxRsp_bits_dbID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 329:20]
  assign wb_io_rxRsp_bits_traceTag = io_l2_rxRsp_bits_traceTag; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 329:20]
  assign wb_io_blockQuery_0_valid = loads_0_io_wbq_conflict_check_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 238:25]
  assign wb_io_blockQuery_0_bits = loads_0_io_wbq_conflict_check_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 238:25]
  assign wb_io_blockQuery_1_valid = loads_1_io_wbq_conflict_check_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 238:25]
  assign wb_io_blockQuery_1_bits = loads_1_io_wbq_conflict_check_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 238:25]
  assign wb_io_blockQuery_2_valid = pipe_io_wbQuery_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 282:23]
  assign wb_io_blockQuery_2_bits = pipe_io_wbQuery_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 282:23]
  assign wb_io_blockQuery_3_valid = miss_io_cmoQuery_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 284:23]
  assign wb_io_blockQuery_3_bits = miss_io_cmoQuery_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 284:23]
  assign probe_clock = clock;
  assign probe_reset = reset;
  assign probe_io_rxSnp_valid = io_l2_rxSnp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 321:15]
  assign probe_io_rxSnp_bits_txnID = io_l2_rxSnp_bits_txnID; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 321:15]
  assign probe_io_rxSnp_bits_opcode = io_l2_rxSnp_bits_opcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 321:15]
  assign probe_io_rxSnp_bits_addr = io_l2_rxSnp_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 321:15]
  assign probe_io_rxSnp_bits_tagAlias = io_l2_rxSnp_bits_tagAlias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 321:15]
  assign probe_io_pipeReq_ready = pipe_io_probe_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 287:20]
  assign probe_io_probeResp_valid = pipe_io_probeResp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 290:22]
  assign probe_io_probeResp_bits_id = pipe_io_probeResp_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 290:22]
  assign probe_io_lrscLockedBlock_valid = pipe_io_lrsc_blocked_block_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 291:28]
  assign probe_io_lrscLockedBlock_bits = pipe_io_lrsc_blocked_block_bits; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 291:28]
  assign probe_io_updateResvSet = pipe_io_update_resv_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 292:26]
  assign probe_io_missHold_0_valid = miss_io_snoopHold_0_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_0_bits_addr = miss_io_snoopHold_0_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_0_bits_alias = miss_io_snoopHold_0_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_1_valid = miss_io_snoopHold_1_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_1_bits_addr = miss_io_snoopHold_1_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_1_bits_alias = miss_io_snoopHold_1_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_2_valid = miss_io_snoopHold_2_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_2_bits_addr = miss_io_snoopHold_2_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_2_bits_alias = miss_io_snoopHold_2_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_3_valid = miss_io_snoopHold_3_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_3_bits_addr = miss_io_snoopHold_3_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_3_bits_alias = miss_io_snoopHold_3_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_4_valid = miss_io_snoopHold_4_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_4_bits_addr = miss_io_snoopHold_4_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_4_bits_alias = miss_io_snoopHold_4_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_5_valid = miss_io_snoopHold_5_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_5_bits_addr = miss_io_snoopHold_5_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_5_bits_alias = miss_io_snoopHold_5_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_6_valid = miss_io_snoopHold_6_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_6_bits_addr = miss_io_snoopHold_6_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_6_bits_alias = miss_io_snoopHold_6_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_7_valid = miss_io_snoopHold_7_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_7_bits_addr = miss_io_snoopHold_7_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_7_bits_alias = miss_io_snoopHold_7_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_8_valid = miss_io_snoopHold_8_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_8_bits_addr = miss_io_snoopHold_8_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_8_bits_alias = miss_io_snoopHold_8_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_9_valid = miss_io_snoopHold_9_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_9_bits_addr = miss_io_snoopHold_9_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_9_bits_alias = miss_io_snoopHold_9_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_10_valid = miss_io_snoopHold_10_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_10_bits_addr = miss_io_snoopHold_10_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_10_bits_alias = miss_io_snoopHold_10_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_11_valid = miss_io_snoopHold_11_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_11_bits_addr = miss_io_snoopHold_11_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_11_bits_alias = miss_io_snoopHold_11_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_12_valid = miss_io_snoopHold_12_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_12_bits_addr = miss_io_snoopHold_12_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_12_bits_alias = miss_io_snoopHold_12_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_13_valid = miss_io_snoopHold_13_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_13_bits_addr = miss_io_snoopHold_13_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_13_bits_alias = miss_io_snoopHold_13_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_14_valid = miss_io_snoopHold_14_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_14_bits_addr = miss_io_snoopHold_14_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_14_bits_alias = miss_io_snoopHold_14_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_15_valid = miss_io_snoopHold_15_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_15_bits_addr = miss_io_snoopHold_15_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  assign probe_io_missHold_15_bits_alias = miss_io_snoopHold_15_bits_alias; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 288:21]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(~io_l2_rxRsp_valid | rspToMiss | rspToWb)) begin
          $fwrite(32'h80000002,
            "Assertion failed: RXRSP txnId is not a miss, CMO, or writeback id\n    at Dcache.scala:346 assert(!io.l2.rxRsp.valid || rspToMiss || rspToWb,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 346:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(~io_l2_rxRsp_valid | rspToMiss | rspToWb)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 346:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_3 & ~(~_T_5 | io_l2_rxDat_bits_txnID < 8'h10)) begin
          $fwrite(32'h80000002,
            "Assertion failed: RXDAT txnId must be an MSHR\n    at Dcache.scala:348 assert(!io.l2.rxDat.fire || io.l2.rxDat.bits.txnID < nMissEntries.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 348:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_3 & ~(~_T_5 | io_l2_rxDat_bits_txnID < 8'h10)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 348:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_3 & ~(_T_13 <= 2'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: TXRSP sends one response per cycle\n    at Dcache.scala:350 assert(PopCount(Seq(snpRsp.fire, ackRsp.fire)) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 350:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_3 & ~(_T_13 <= 2'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/Dcache.scala 350:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
