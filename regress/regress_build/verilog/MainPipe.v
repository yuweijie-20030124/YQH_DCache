module MainPipe(
  input          clock,
  input          reset,
  output         io_probe_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_probe_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [47:0]  io_probe_bits_vaddr, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [47:0]  io_probe_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [1:0]   io_probe_bits_tagAlias, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [5:0]   io_probe_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [1:0]   io_probe_bits_probeOp, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [7:0]   io_probe_bits_snpTxnId, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_refill_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_refill_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [4:0]   io_refill_bits_cmd, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [47:0]  io_refill_bits_vaddr, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [47:0]  io_refill_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [5:0]   io_refill_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [3:0]   io_refill_bits_missId, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [2:0]   io_refill_bits_wordIdx, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [127:0] io_refill_bits_amoData, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [15:0]  io_refill_bits_amoMask, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [127:0] io_refill_bits_amoCmp, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [3:0]   io_refill_bits_replaceWay, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_store_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_store_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [4:0]   io_store_bits_cmd, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [47:0]  io_store_bits_vaddr, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [47:0]  io_store_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [511:0] io_store_bits_data, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_store_bits_mask, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [5:0]   io_store_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_atomic_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_atomic_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [4:0]   io_atomic_bits_cmd, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [47:0]  io_atomic_bits_vaddr, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [47:0]  io_atomic_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [5:0]   io_atomic_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [3:0]   io_atomic_bits_missId, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [2:0]   io_atomic_bits_wordIdx, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [127:0] io_atomic_bits_amoData, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [15:0]  io_atomic_bits_amoMask, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [127:0] io_atomic_bits_amoCmp, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [1:0]   io_atomic_bits_probeOp, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_atomic_bits_needData, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [7:0]   io_atomic_bits_snpTxnId, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [3:0]   io_atomic_bits_replaceWay, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_tagRead_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_tagRead_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [7:0]   io_tagRead_bits_idx, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [35:0]  io_tagResp_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [35:0]  io_tagResp_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [35:0]  io_tagResp_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [35:0]  io_tagResp_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_metaRead_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [7:0]   io_metaRead_bits_idx, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [1:0]   io_metaResp_0_coh, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [1:0]   io_metaResp_1_coh, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [1:0]   io_metaResp_2_coh, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [1:0]   io_metaResp_3_coh, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_dataRead_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_dataRead_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [47:0]  io_dataRead_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [7:0]   io_dataRead_bits_bankMask, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_dataResp_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_0_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_0_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_0_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_0_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_1_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_1_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_1_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_1_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_2_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_2_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_2_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_2_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_3_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_3_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_3_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_3_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_4_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_4_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_4_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_4_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_5_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_5_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_5_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_5_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_6_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_6_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_6_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_6_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_7_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_7_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_7_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_dataResp_bits_data_7_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_tagWrite_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [7:0]   io_tagWrite_bits_idx, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [3:0]   io_tagWrite_bits_way_en, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [35:0]  io_tagWrite_bits_tag, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_metaWrite_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [7:0]   io_metaWrite_bits_idx, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [3:0]   io_metaWrite_bits_way_en, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [1:0]   io_metaWrite_bits_meta_coh, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_dataWrite_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [47:0]  io_dataWrite_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [3:0]   io_dataWrite_bits_wayEn, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [7:0]   io_dataWrite_bits_bankMask, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [63:0]  io_dataWrite_bits_data_0, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [63:0]  io_dataWrite_bits_data_1, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [63:0]  io_dataWrite_bits_data_2, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [63:0]  io_dataWrite_bits_data_3, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [63:0]  io_dataWrite_bits_data_4, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [63:0]  io_dataWrite_bits_data_5, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [63:0]  io_dataWrite_bits_data_6, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [63:0]  io_dataWrite_bits_data_7, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_missReq_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_missReq_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [3:0]   io_missReq_bits_source, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [4:0]   io_missReq_bits_cmd, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [47:0]  io_missReq_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [47:0]  io_missReq_bits_vaddr, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_missReq_bits_full_overwrite, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [2:0]   io_missReq_bits_word_idx, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [127:0] io_missReq_bits_amo_data, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [15:0]  io_missReq_bits_amo_mask, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [127:0] io_missReq_bits_amo_cmp, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [5:0]   io_missReq_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_missReq_bits_scToUnique, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [3:0]   io_missReq_bits_occupy_way, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [511:0] io_missReq_bits_store_data, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [63:0]  io_missReq_bits_store_mask, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_missResp_handled, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_missResp_sameAddr, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_refillInfo_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [511:0] io_refillInfo_bits_data, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_refillInfo_bits_retUnique, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_refillInfo_bits_passDirty, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [511:0] io_refillInfo_bits_storeData, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [63:0]  io_refillInfo_bits_storeMask, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_refillInfo_bits_error, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_mainpipeInfo_s2Refill, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [3:0]   io_mainpipeInfo_s2MissId, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_mainpipeInfo_s3Done, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [3:0]   io_mainpipeInfo_s3MissId, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_mainpipeInfo_installed, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [1:0]   io_mainpipeInfo_finalCoh, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_pendingSnoop_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [3:0]   io_pendingSnoop_bits, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_pendingInvalidate, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_occupySet_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [7:0]   io_occupySet_bits, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [3:0]   io_occupyWay, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_occupyFail, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_replaceQuery_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [47:0]  io_replaceQuery_bits, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_replaceBlock, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_wbQuery_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [47:0]  io_wbQuery_bits, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_wbBlock, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_wbReq_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_wbReq_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [511:0] io_wbReq_bits_data, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [47:0]  io_wbReq_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [2:0]   io_wbReq_bits_opcode, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [2:0]   io_wbReq_bits_resp, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_wbReq_bits_passDirty, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [7:0]   io_wbReq_bits_snpTxnId, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_probeResp_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [5:0]   io_probeResp_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_atomicResp_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_atomicResp_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [5:0]   io_atomicResp_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [4:0]   io_atomicResp_bits_cmd, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [127:0] io_atomicResp_bits_data, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_atomicResp_bits_success, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_atomicReplay_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_atomicReplay_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [5:0]   io_atomicReplay_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_storeHit_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_storeHit_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [5:0]   io_storeHit_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_storeReplay_ready, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_storeReplay_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [5:0]   io_storeReplay_bits_id, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_lrsc_blocked_block_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [47:0]  io_lrsc_blocked_block_bits, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_update_resv_set, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_replaceAccess_0_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [7:0]   io_replaceAccess_0_bits_set, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [1:0]   io_replaceAccess_0_bits_way, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input          io_replaceAccess_1_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [7:0]   io_replaceAccess_1_bits_set, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  input  [1:0]   io_replaceAccess_1_bits_way, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_snoopNotice_valid, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [47:0]  io_snoopNotice_bits_addr, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output [1:0]   io_snoopNotice_bits_alias, // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
  output         io_busy // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 204:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [511:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [127:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [127:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [63:0] _RAND_22;
  reg [63:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [511:0] _RAND_27;
  reg [63:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [127:0] _RAND_30;
  reg [31:0] _RAND_31;
  reg [127:0] _RAND_32;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_34;
  reg [31:0] _RAND_35;
  reg [31:0] _RAND_36;
  reg [31:0] _RAND_37;
  reg [63:0] _RAND_38;
  reg [63:0] _RAND_39;
  reg [31:0] _RAND_40;
  reg [31:0] _RAND_41;
  reg [31:0] _RAND_42;
  reg [511:0] _RAND_43;
  reg [63:0] _RAND_44;
  reg [31:0] _RAND_45;
  reg [127:0] _RAND_46;
  reg [31:0] _RAND_47;
  reg [127:0] _RAND_48;
  reg [31:0] _RAND_49;
  reg [31:0] _RAND_50;
  reg [31:0] _RAND_51;
  reg [31:0] _RAND_52;
  reg [31:0] _RAND_53;
  reg [31:0] _RAND_54;
  reg [31:0] _RAND_55;
  reg [31:0] _RAND_56;
  reg [63:0] _RAND_57;
  reg [31:0] _RAND_58;
  reg [31:0] _RAND_59;
  reg [31:0] _RAND_60;
  reg [31:0] _RAND_61;
  reg [31:0] _RAND_62;
  reg [511:0] _RAND_63;
  reg [511:0] _RAND_64;
  reg [63:0] _RAND_65;
  reg [63:0] _RAND_66;
  reg [63:0] _RAND_67;
  reg [63:0] _RAND_68;
  reg [63:0] _RAND_69;
  reg [63:0] _RAND_70;
  reg [63:0] _RAND_71;
  reg [63:0] _RAND_72;
  reg [63:0] _RAND_73;
  reg [31:0] _RAND_74;
  reg [31:0] _RAND_75;
  reg [31:0] _RAND_76;
  reg [31:0] _RAND_77;
  reg [31:0] _RAND_78;
  reg [31:0] _RAND_79;
  reg [31:0] _RAND_80;
  reg [31:0] _RAND_81;
  reg [31:0] _RAND_82;
  reg [31:0] _RAND_83;
  reg [31:0] _RAND_84;
  reg [31:0] _RAND_85;
  reg [63:0] _RAND_86;
  reg [31:0] _RAND_87;
  reg [63:0] _RAND_88;
  reg [31:0] _RAND_89;
  reg [63:0] _RAND_90;
  reg [31:0] _RAND_91;
  reg [63:0] _RAND_92;
  reg [31:0] _RAND_93;
  reg [31:0] _RAND_94;
  reg [31:0] _RAND_95;
  reg [31:0] _RAND_96;
  reg [31:0] _RAND_97;
  reg [31:0] _RAND_98;
  reg [63:0] _RAND_99;
  reg [63:0] _RAND_100;
  reg [63:0] _RAND_101;
  reg [63:0] _RAND_102;
  reg [63:0] _RAND_103;
  reg [63:0] _RAND_104;
  reg [63:0] _RAND_105;
  reg [63:0] _RAND_106;
  reg [63:0] _RAND_107;
  reg [63:0] _RAND_108;
  reg [63:0] _RAND_109;
  reg [63:0] _RAND_110;
  reg [63:0] _RAND_111;
  reg [63:0] _RAND_112;
  reg [63:0] _RAND_113;
  reg [63:0] _RAND_114;
  reg [63:0] _RAND_115;
  reg [63:0] _RAND_116;
  reg [63:0] _RAND_117;
  reg [63:0] _RAND_118;
  reg [63:0] _RAND_119;
  reg [63:0] _RAND_120;
  reg [63:0] _RAND_121;
  reg [63:0] _RAND_122;
  reg [63:0] _RAND_123;
  reg [63:0] _RAND_124;
  reg [63:0] _RAND_125;
  reg [63:0] _RAND_126;
  reg [63:0] _RAND_127;
  reg [63:0] _RAND_128;
  reg [63:0] _RAND_129;
  reg [63:0] _RAND_130;
  reg [63:0] _RAND_131;
  reg [31:0] _RAND_132;
  reg [31:0] _RAND_133;
  reg [63:0] _RAND_134;
`endif // RANDOMIZE_REG_INIT
  wire  plru_clock; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 206:20]
  wire  plru_reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 206:20]
  wire  plru_io_access_0_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 206:20]
  wire [7:0] plru_io_access_0_bits_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 206:20]
  wire [1:0] plru_io_access_0_bits_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 206:20]
  wire  plru_io_access_1_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 206:20]
  wire [7:0] plru_io_access_1_bits_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 206:20]
  wire [1:0] plru_io_access_1_bits_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 206:20]
  wire  plru_io_access_2_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 206:20]
  wire [7:0] plru_io_access_2_bits_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 206:20]
  wire [1:0] plru_io_access_2_bits_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 206:20]
  wire [7:0] plru_io_querySet; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 206:20]
  wire [1:0] plru_io_victim; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 206:20]
  wire [7:0] amoalu_io_mask; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 644:22]
  wire [4:0] amoalu_io_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 644:22]
  wire [63:0] amoalu_io_lhs; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 644:22]
  wire [63:0] amoalu_io_rhs; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 644:22]
  wire [63:0] amoalu_io_out; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 644:22]
  reg  s1_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 279:25]
  reg  s2_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 280:25]
  reg  s3_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 281:25]
  reg [1:0] s1_hold_src; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 282:20]
  reg [4:0] s1_hold_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 282:20]
  reg [47:0] s1_hold_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 282:20]
  reg [47:0] s1_hold_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 282:20]
  reg [7:0] s1_hold_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 282:20]
  reg [5:0] s1_hold_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 282:20]
  reg [3:0] s1_hold_missId; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 282:20]
  reg [511:0] s1_hold_storeData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 282:20]
  reg [63:0] s1_hold_storeMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 282:20]
  reg [2:0] s1_hold_wordIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 282:20]
  reg [127:0] s1_hold_amoData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 282:20]
  reg [15:0] s1_hold_amoMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 282:20]
  reg [127:0] s1_hold_amoCmp; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 282:20]
  reg [1:0] s1_hold_probeOp; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 282:20]
  reg  s1_hold_needData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 282:20]
  reg [7:0] s1_hold_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 282:20]
  reg [3:0] s1_hold_replaceWay; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 282:20]
  reg [1:0] s2_hold_src; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 283:20]
  reg [4:0] s2_hold_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 283:20]
  reg [47:0] s2_hold_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 283:20]
  reg [47:0] s2_hold_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 283:20]
  reg [7:0] s2_hold_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 283:20]
  reg [5:0] s2_hold_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 283:20]
  reg [3:0] s2_hold_missId; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 283:20]
  reg [511:0] s2_hold_storeData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 283:20]
  reg [63:0] s2_hold_storeMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 283:20]
  reg [2:0] s2_hold_wordIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 283:20]
  reg [127:0] s2_hold_amoData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 283:20]
  reg [15:0] s2_hold_amoMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 283:20]
  reg [127:0] s2_hold_amoCmp; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 283:20]
  reg [1:0] s2_hold_probeOp; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 283:20]
  reg  s2_hold_needData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 283:20]
  reg [7:0] s2_hold_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 283:20]
  reg [1:0] s3_hold_src; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 284:20]
  reg [4:0] s3_hold_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 284:20]
  reg [47:0] s3_hold_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 284:20]
  reg [47:0] s3_hold_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 284:20]
  reg [7:0] s3_hold_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 284:20]
  reg [5:0] s3_hold_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 284:20]
  reg [3:0] s3_hold_missId; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 284:20]
  reg [511:0] s3_hold_storeData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 284:20]
  reg [63:0] s3_hold_storeMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 284:20]
  reg [2:0] s3_hold_wordIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 284:20]
  reg [127:0] s3_hold_amoData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 284:20]
  reg [15:0] s3_hold_amoMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 284:20]
  reg [127:0] s3_hold_amoCmp; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 284:20]
  reg [1:0] s3_hold_probeOp; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 284:20]
  reg  s3_hold_needData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 284:20]
  reg [7:0] s3_hold_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 284:20]
  wire [7:0] probeSet = {io_probe_bits_tagAlias,io_probe_bits_addr[11:6]}; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 234:15]
  wire [7:0] refillSet = io_refill_bits_vaddr[13:6]; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 187:9]
  wire [7:0] storeSet = io_store_bits_vaddr[13:6]; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 187:9]
  wire [7:0] atomicSet = io_atomic_bits_vaddr[13:6]; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 187:9]
  wire  _s1_ready_T = ~s1_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 478:15]
  wire  _s2_ready_T = ~s2_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 572:15]
  wire  s2_store = s2_valid & s2_hold_src == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 510:27]
  reg  s2_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 387:19]
  reg [1:0] s2_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 389:19]
  wire  _s2_write_hit_T_2 = s2_coh == 2'h2 | s2_coh == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 240:26]
  wire  s2_write_hit = s2_hit & _s2_write_hit_T_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 514:29]
  wire  _s2_need_miss_T = ~s2_write_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 515:35]
  wire  s2_atomic = s2_valid & s2_hold_src == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 511:28]
  wire  s2_sc = s2_atomic & s2_hold_cmd == 5'h7; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 513:25]
  wire  _s2_need_miss_T_3 = s2_atomic & ~s2_sc; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 515:64]
  wire  s2_need_miss = s2_store & ~s2_write_hit | s2_atomic & ~s2_sc & ~s2_write_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 515:50]
  reg  s2_need_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 480:25]
  wire  _dataOk2_T = ~s2_need_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 567:17]
  reg  s2_got; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 487:23]
  wire  dataOk2 = ~s2_need_data | s2_got | io_dataResp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 567:41]
  wire  _s2_refill_T = s2_hold_src == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 512:43]
  wire  s2_refill = s2_valid & s2_hold_src == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 512:28]
  wire  refillReady2 = ~s2_refill | io_refillInfo_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 568:33]
  wire  wantS3 = s2_valid & ~s2_need_miss & dataOk2 & refillReady2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 569:53]
  wire  _s3_ready_T = ~s3_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 827:15]
  wire  s3_refill_req = s3_valid & s3_hold_src == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 625:32]
  reg  s3_can_install; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 581:27]
  wire  pendInv = s3_refill_req & io_pendingInvalidate; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 660:31]
  wire  _doInstall_T_1 = ~pendInv; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 674:54]
  reg [63:0] s3_refill_storeMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 588:22]
  wire  _sharedStore_T = |s3_refill_storeMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 672:58]
  reg  s3_refill_retUnique; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 588:22]
  wire  _sharedStore_T_2 = ~s3_refill_retUnique; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 672:65]
  wire  sharedStore = s3_refill_req & |s3_refill_storeMask & ~s3_refill_retUnique; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 672:62]
  wire  _doInstall_T_3 = ~sharedStore; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 674:66]
  reg  s3_refill_error; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 588:22]
  wire  refillErr = s3_refill_req & s3_refill_error; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 673:33]
  wire  _doInstall_T_5 = ~refillErr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 674:82]
  wire  doInstall = s3_refill_req & s3_can_install & ~pendInv & ~sharedStore & ~refillErr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 674:79]
  wire  _s3_done_T_1 = ~doInstall; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 790:61]
  reg  sent_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
  wire  _s3_done_T_3 = ~doInstall | sent_0 | io_tagWrite_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 790:80]
  wire  _s3_done_T_4 = s3_valid & _s3_done_T_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 817:23]
  wire  s3_probe = s3_valid & s3_hold_src == 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 624:27]
  reg  s3_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 578:19]
  wire  _probeWriteMeta_T = s3_probe & s3_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 654:33]
  wire  _probeNew_T_6 = 2'h3 == s3_hold_probeOp; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 229:31]
  reg [1:0] s3_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 580:19]
  wire  _probeNew_T = s3_coh == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 233:50]
  wire [1:0] _probeNew_T_1 = s3_coh == 2'h3 ? 2'h2 : s3_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 233:45]
  wire  _probeNew_T_4 = 2'h2 == s3_hold_probeOp; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 229:31]
  wire  _probeNew_T_2 = 2'h1 == s3_hold_probeOp; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 229:31]
  wire [1:0] _probeNew_T_5 = 2'h2 == s3_hold_probeOp ? 2'h1 : 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 229:31]
  wire [1:0] probeNew = 2'h3 == s3_hold_probeOp ? _probeNew_T_1 : _probeNew_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 229:31]
  wire  probeWriteMeta = s3_probe & s3_hit & probeNew != s3_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 654:43]
  wire  s3_store = s3_valid & s3_hold_src == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 622:27]
  wire [7:0] _storeBanks_T_18 = {|s3_hold_storeMask[63:56],|s3_hold_storeMask[55:48],|s3_hold_storeMask[47:40],|
    s3_hold_storeMask[39:32],|s3_hold_storeMask[31:24],|s3_hold_storeMask[23:16],|s3_hold_storeMask[15:8],|
    s3_hold_storeMask[7:0]}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 252:69]
  wire [7:0] storeBanks = &s3_hold_storeMask ? 8'hff : _storeBanks_T_18; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 687:23]
  wire  doStoreData = s3_store & |storeBanks; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 694:30]
  wire  _doStoreMeta_T_1 = s3_coh != 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 695:55]
  wire  doStoreMeta = s3_store & doStoreData & s3_coh != 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 695:45]
  wire  s3_atomic = s3_valid & s3_hold_src == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 623:28]
  wire  _s3_alu_T_6 = s3_hold_cmd == 5'h4 | s3_hold_cmd == 5'h9 | s3_hold_cmd == 5'ha | s3_hold_cmd == 5'hb; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 338:90]
  wire  _s3_alu_T_15 = s3_hold_cmd == 5'h8 | s3_hold_cmd == 5'hc | s3_hold_cmd == 5'hd | s3_hold_cmd == 5'he |
    s3_hold_cmd == 5'hf; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 339:114]
  wire  _s3_alu_T_16 = _s3_alu_T_6 | _s3_alu_T_15; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 629:56]
  wire  s3_alu = s3_atomic & (_s3_alu_T_6 | _s3_alu_T_15); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 629:26]
  wire [7:0] _atomicBanks_T = 8'h1 << s3_hold_wordIdx; // @[src/main/scala/chisel3/util/OneHot.scala 65:12]
  wire  _s3_cas_T_3 = s3_hold_cmd == 5'h18; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 340:75]
  wire  _s3_cas_T_4 = s3_hold_cmd == 5'h1a | s3_hold_cmd == 5'h1b | s3_hold_cmd == 5'h18; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 340:68]
  wire  s3_cas = s3_atomic & _s3_cas_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 628:26]
  wire  cmdIsLr = s3_hold_cmd == 5'h6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 668:29]
  wire  _refillOp_T_2 = cmdIsLr | _s3_cas_T_4 | _s3_alu_T_16; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 676:75]
  wire  refillOp = doInstall & s3_refill_retUnique & (cmdIsLr | _s3_cas_T_4 | _s3_alu_T_16); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 676:51]
  wire [2:0] bank1 = s3_hold_wordIdx + 3'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 638:31]
  reg [511:0] s3_refill_storeData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 588:22]
  reg [511:0] s3_refill_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 588:22]
  wire [7:0] refillLine_bytes_63 = s3_refill_storeMask[63] ? s3_refill_storeData[511:504] : s3_refill_data[511:504]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_62 = s3_refill_storeMask[62] ? s3_refill_storeData[503:496] : s3_refill_data[503:496]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_61 = s3_refill_storeMask[61] ? s3_refill_storeData[495:488] : s3_refill_data[495:488]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_60 = s3_refill_storeMask[60] ? s3_refill_storeData[487:480] : s3_refill_data[487:480]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_59 = s3_refill_storeMask[59] ? s3_refill_storeData[479:472] : s3_refill_data[479:472]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_58 = s3_refill_storeMask[58] ? s3_refill_storeData[471:464] : s3_refill_data[471:464]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_57 = s3_refill_storeMask[57] ? s3_refill_storeData[463:456] : s3_refill_data[463:456]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_56 = s3_refill_storeMask[56] ? s3_refill_storeData[455:448] : s3_refill_data[455:448]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_55 = s3_refill_storeMask[55] ? s3_refill_storeData[447:440] : s3_refill_data[447:440]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_54 = s3_refill_storeMask[54] ? s3_refill_storeData[439:432] : s3_refill_data[439:432]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_53 = s3_refill_storeMask[53] ? s3_refill_storeData[431:424] : s3_refill_data[431:424]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_52 = s3_refill_storeMask[52] ? s3_refill_storeData[423:416] : s3_refill_data[423:416]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_51 = s3_refill_storeMask[51] ? s3_refill_storeData[415:408] : s3_refill_data[415:408]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_50 = s3_refill_storeMask[50] ? s3_refill_storeData[407:400] : s3_refill_data[407:400]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_49 = s3_refill_storeMask[49] ? s3_refill_storeData[399:392] : s3_refill_data[399:392]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_48 = s3_refill_storeMask[48] ? s3_refill_storeData[391:384] : s3_refill_data[391:384]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [63:0] refillLine_hi_hi_lo = {refillLine_bytes_55,refillLine_bytes_54,refillLine_bytes_53,refillLine_bytes_52,
    refillLine_bytes_51,refillLine_bytes_50,refillLine_bytes_49,refillLine_bytes_48}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 276:8]
  wire [7:0] refillLine_bytes_47 = s3_refill_storeMask[47] ? s3_refill_storeData[383:376] : s3_refill_data[383:376]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_46 = s3_refill_storeMask[46] ? s3_refill_storeData[375:368] : s3_refill_data[375:368]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_45 = s3_refill_storeMask[45] ? s3_refill_storeData[367:360] : s3_refill_data[367:360]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_44 = s3_refill_storeMask[44] ? s3_refill_storeData[359:352] : s3_refill_data[359:352]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_43 = s3_refill_storeMask[43] ? s3_refill_storeData[351:344] : s3_refill_data[351:344]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_42 = s3_refill_storeMask[42] ? s3_refill_storeData[343:336] : s3_refill_data[343:336]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_41 = s3_refill_storeMask[41] ? s3_refill_storeData[335:328] : s3_refill_data[335:328]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_40 = s3_refill_storeMask[40] ? s3_refill_storeData[327:320] : s3_refill_data[327:320]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_39 = s3_refill_storeMask[39] ? s3_refill_storeData[319:312] : s3_refill_data[319:312]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_38 = s3_refill_storeMask[38] ? s3_refill_storeData[311:304] : s3_refill_data[311:304]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_37 = s3_refill_storeMask[37] ? s3_refill_storeData[303:296] : s3_refill_data[303:296]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_36 = s3_refill_storeMask[36] ? s3_refill_storeData[295:288] : s3_refill_data[295:288]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_35 = s3_refill_storeMask[35] ? s3_refill_storeData[287:280] : s3_refill_data[287:280]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_34 = s3_refill_storeMask[34] ? s3_refill_storeData[279:272] : s3_refill_data[279:272]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_33 = s3_refill_storeMask[33] ? s3_refill_storeData[271:264] : s3_refill_data[271:264]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_32 = s3_refill_storeMask[32] ? s3_refill_storeData[263:256] : s3_refill_data[263:256]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [63:0] refillLine_hi_lo_lo = {refillLine_bytes_39,refillLine_bytes_38,refillLine_bytes_37,refillLine_bytes_36,
    refillLine_bytes_35,refillLine_bytes_34,refillLine_bytes_33,refillLine_bytes_32}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 276:8]
  wire [127:0] refillLine_hi_lo = {refillLine_bytes_47,refillLine_bytes_46,refillLine_bytes_45,refillLine_bytes_44,
    refillLine_bytes_43,refillLine_bytes_42,refillLine_bytes_41,refillLine_bytes_40,refillLine_hi_lo_lo}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 276:8]
  wire [255:0] refillLine_hi = {refillLine_bytes_63,refillLine_bytes_62,refillLine_bytes_61,refillLine_bytes_60,
    refillLine_bytes_59,refillLine_bytes_58,refillLine_bytes_57,refillLine_bytes_56,refillLine_hi_hi_lo,refillLine_hi_lo
    }; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 276:8]
  wire [7:0] refillLine_bytes_31 = s3_refill_storeMask[31] ? s3_refill_storeData[255:248] : s3_refill_data[255:248]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_30 = s3_refill_storeMask[30] ? s3_refill_storeData[247:240] : s3_refill_data[247:240]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_29 = s3_refill_storeMask[29] ? s3_refill_storeData[239:232] : s3_refill_data[239:232]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_28 = s3_refill_storeMask[28] ? s3_refill_storeData[231:224] : s3_refill_data[231:224]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_27 = s3_refill_storeMask[27] ? s3_refill_storeData[223:216] : s3_refill_data[223:216]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_26 = s3_refill_storeMask[26] ? s3_refill_storeData[215:208] : s3_refill_data[215:208]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_25 = s3_refill_storeMask[25] ? s3_refill_storeData[207:200] : s3_refill_data[207:200]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_24 = s3_refill_storeMask[24] ? s3_refill_storeData[199:192] : s3_refill_data[199:192]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_23 = s3_refill_storeMask[23] ? s3_refill_storeData[191:184] : s3_refill_data[191:184]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_22 = s3_refill_storeMask[22] ? s3_refill_storeData[183:176] : s3_refill_data[183:176]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_21 = s3_refill_storeMask[21] ? s3_refill_storeData[175:168] : s3_refill_data[175:168]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_20 = s3_refill_storeMask[20] ? s3_refill_storeData[167:160] : s3_refill_data[167:160]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_19 = s3_refill_storeMask[19] ? s3_refill_storeData[159:152] : s3_refill_data[159:152]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_18 = s3_refill_storeMask[18] ? s3_refill_storeData[151:144] : s3_refill_data[151:144]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_17 = s3_refill_storeMask[17] ? s3_refill_storeData[143:136] : s3_refill_data[143:136]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_16 = s3_refill_storeMask[16] ? s3_refill_storeData[135:128] : s3_refill_data[135:128]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [63:0] refillLine_lo_hi_lo = {refillLine_bytes_23,refillLine_bytes_22,refillLine_bytes_21,refillLine_bytes_20,
    refillLine_bytes_19,refillLine_bytes_18,refillLine_bytes_17,refillLine_bytes_16}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 276:8]
  wire [7:0] refillLine_bytes_15 = s3_refill_storeMask[15] ? s3_refill_storeData[127:120] : s3_refill_data[127:120]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_14 = s3_refill_storeMask[14] ? s3_refill_storeData[119:112] : s3_refill_data[119:112]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_13 = s3_refill_storeMask[13] ? s3_refill_storeData[111:104] : s3_refill_data[111:104]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_12 = s3_refill_storeMask[12] ? s3_refill_storeData[103:96] : s3_refill_data[103:96]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_11 = s3_refill_storeMask[11] ? s3_refill_storeData[95:88] : s3_refill_data[95:88]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_10 = s3_refill_storeMask[10] ? s3_refill_storeData[87:80] : s3_refill_data[87:80]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_9 = s3_refill_storeMask[9] ? s3_refill_storeData[79:72] : s3_refill_data[79:72]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_8 = s3_refill_storeMask[8] ? s3_refill_storeData[71:64] : s3_refill_data[71:64]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_7 = s3_refill_storeMask[7] ? s3_refill_storeData[63:56] : s3_refill_data[63:56]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_6 = s3_refill_storeMask[6] ? s3_refill_storeData[55:48] : s3_refill_data[55:48]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_5 = s3_refill_storeMask[5] ? s3_refill_storeData[47:40] : s3_refill_data[47:40]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_4 = s3_refill_storeMask[4] ? s3_refill_storeData[39:32] : s3_refill_data[39:32]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_3 = s3_refill_storeMask[3] ? s3_refill_storeData[31:24] : s3_refill_data[31:24]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_2 = s3_refill_storeMask[2] ? s3_refill_storeData[23:16] : s3_refill_data[23:16]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_1 = s3_refill_storeMask[1] ? s3_refill_storeData[15:8] : s3_refill_data[15:8]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [7:0] refillLine_bytes_0 = s3_refill_storeMask[0] ? s3_refill_storeData[7:0] : s3_refill_data[7:0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 274:10]
  wire [63:0] refillLine_lo_lo_lo = {refillLine_bytes_7,refillLine_bytes_6,refillLine_bytes_5,refillLine_bytes_4,
    refillLine_bytes_3,refillLine_bytes_2,refillLine_bytes_1,refillLine_bytes_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 276:8]
  wire [127:0] refillLine_lo_lo = {refillLine_bytes_15,refillLine_bytes_14,refillLine_bytes_13,refillLine_bytes_12,
    refillLine_bytes_11,refillLine_bytes_10,refillLine_bytes_9,refillLine_bytes_8,refillLine_lo_lo_lo}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 276:8]
  wire [255:0] refillLine_lo = {refillLine_bytes_31,refillLine_bytes_30,refillLine_bytes_29,refillLine_bytes_28,
    refillLine_bytes_27,refillLine_bytes_26,refillLine_bytes_25,refillLine_bytes_24,refillLine_lo_hi_lo,refillLine_lo_lo
    }; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 276:8]
  wire [511:0] refillLine = {refillLine_hi,refillLine_lo}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 276:8]
  wire [63:0] refillWords_7 = refillLine[511:448]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 262:48]
  wire [63:0] refillWords_6 = refillLine[447:384]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 262:48]
  wire [63:0] refillWords_5 = refillLine[383:320]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 262:48]
  wire [63:0] refillWords_4 = refillLine[319:256]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 262:48]
  wire [63:0] refillWords_3 = refillLine[255:192]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 262:48]
  wire [63:0] refillWords_2 = refillLine[191:128]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 262:48]
  wire [63:0] refillWords_1 = refillLine[127:64]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 262:48]
  wire [63:0] refillWords_0 = refillLine[63:0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 262:48]
  wire [63:0] _GEN_298 = 3'h1 == bank1 ? refillWords_1 : refillWords_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 667:{14,14}]
  wire [63:0] _GEN_299 = 3'h2 == bank1 ? refillWords_2 : _GEN_298; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 667:{14,14}]
  wire [63:0] _GEN_300 = 3'h3 == bank1 ? refillWords_3 : _GEN_299; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 667:{14,14}]
  wire [63:0] _GEN_301 = 3'h4 == bank1 ? refillWords_4 : _GEN_300; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 667:{14,14}]
  wire [63:0] _GEN_302 = 3'h5 == bank1 ? refillWords_5 : _GEN_301; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 667:{14,14}]
  wire [63:0] _GEN_303 = 3'h6 == bank1 ? refillWords_6 : _GEN_302; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 667:{14,14}]
  wire [63:0] _GEN_304 = 3'h7 == bank1 ? refillWords_7 : _GEN_303; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 667:{14,14}]
  reg [63:0] s3_word_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 587:20]
  reg [63:0] s3_word_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 587:20]
  reg [63:0] s3_word_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 587:20]
  reg [63:0] s3_word_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 587:20]
  reg [63:0] s3_word_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 587:20]
  reg [63:0] s3_word_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 587:20]
  reg [63:0] s3_word_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 587:20]
  reg [63:0] s3_word_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 587:20]
  wire [63:0] _GEN_306 = 3'h1 == bank1 ? s3_word_1 : s3_word_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 667:{14,14}]
  wire [63:0] _GEN_307 = 3'h2 == bank1 ? s3_word_2 : _GEN_306; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 667:{14,14}]
  wire [63:0] _GEN_308 = 3'h3 == bank1 ? s3_word_3 : _GEN_307; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 667:{14,14}]
  wire [63:0] _GEN_309 = 3'h4 == bank1 ? s3_word_4 : _GEN_308; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 667:{14,14}]
  wire [63:0] _GEN_310 = 3'h5 == bank1 ? s3_word_5 : _GEN_309; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 667:{14,14}]
  wire [63:0] _GEN_311 = 3'h6 == bank1 ? s3_word_6 : _GEN_310; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 667:{14,14}]
  wire [63:0] _GEN_312 = 3'h7 == bank1 ? s3_word_7 : _GEN_311; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 667:{14,14}]
  wire [63:0] old1 = s3_refill_req ? _GEN_304 : _GEN_312; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 667:14]
  wire [63:0] _GEN_282 = 3'h1 == s3_hold_wordIdx ? refillWords_1 : refillWords_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 666:{14,14}]
  wire [63:0] _GEN_283 = 3'h2 == s3_hold_wordIdx ? refillWords_2 : _GEN_282; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 666:{14,14}]
  wire [63:0] _GEN_284 = 3'h3 == s3_hold_wordIdx ? refillWords_3 : _GEN_283; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 666:{14,14}]
  wire [63:0] _GEN_285 = 3'h4 == s3_hold_wordIdx ? refillWords_4 : _GEN_284; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 666:{14,14}]
  wire [63:0] _GEN_286 = 3'h5 == s3_hold_wordIdx ? refillWords_5 : _GEN_285; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 666:{14,14}]
  wire [63:0] _GEN_287 = 3'h6 == s3_hold_wordIdx ? refillWords_6 : _GEN_286; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 666:{14,14}]
  wire [63:0] _GEN_288 = 3'h7 == s3_hold_wordIdx ? refillWords_7 : _GEN_287; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 666:{14,14}]
  wire [63:0] _GEN_290 = 3'h1 == s3_hold_wordIdx ? s3_word_1 : s3_word_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 666:{14,14}]
  wire [63:0] _GEN_291 = 3'h2 == s3_hold_wordIdx ? s3_word_2 : _GEN_290; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 666:{14,14}]
  wire [63:0] _GEN_292 = 3'h3 == s3_hold_wordIdx ? s3_word_3 : _GEN_291; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 666:{14,14}]
  wire [63:0] _GEN_293 = 3'h4 == s3_hold_wordIdx ? s3_word_4 : _GEN_292; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 666:{14,14}]
  wire [63:0] _GEN_294 = 3'h5 == s3_hold_wordIdx ? s3_word_5 : _GEN_293; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 666:{14,14}]
  wire [63:0] _GEN_295 = 3'h6 == s3_hold_wordIdx ? s3_word_6 : _GEN_294; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 666:{14,14}]
  wire [63:0] _GEN_296 = 3'h7 == s3_hold_wordIdx ? s3_word_7 : _GEN_295; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 666:{14,14}]
  wire [63:0] old0 = s3_refill_req ? _GEN_288 : _GEN_296; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 666:14]
  wire [127:0] old128 = {old1,old0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 650:19]
  wire [127:0] _casMismatch_T = old128 ^ s3_hold_amoCmp; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 651:30]
  wire [7:0] _casMismatch_T_32 = s3_hold_amoMask[15] ? 8'hff : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 651:65]
  wire [7:0] _casMismatch_T_31 = s3_hold_amoMask[14] ? 8'hff : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 651:65]
  wire [7:0] _casMismatch_T_30 = s3_hold_amoMask[13] ? 8'hff : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 651:65]
  wire [7:0] _casMismatch_T_29 = s3_hold_amoMask[12] ? 8'hff : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 651:65]
  wire [7:0] _casMismatch_T_28 = s3_hold_amoMask[11] ? 8'hff : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 651:65]
  wire [7:0] _casMismatch_T_27 = s3_hold_amoMask[10] ? 8'hff : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 651:65]
  wire [7:0] _casMismatch_T_26 = s3_hold_amoMask[9] ? 8'hff : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 651:65]
  wire [7:0] _casMismatch_T_25 = s3_hold_amoMask[8] ? 8'hff : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 651:65]
  wire [7:0] _casMismatch_T_24 = s3_hold_amoMask[7] ? 8'hff : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 651:65]
  wire [7:0] _casMismatch_T_23 = s3_hold_amoMask[6] ? 8'hff : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 651:65]
  wire [7:0] _casMismatch_T_22 = s3_hold_amoMask[5] ? 8'hff : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 651:65]
  wire [7:0] _casMismatch_T_21 = s3_hold_amoMask[4] ? 8'hff : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 651:65]
  wire [7:0] _casMismatch_T_20 = s3_hold_amoMask[3] ? 8'hff : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 651:65]
  wire [7:0] _casMismatch_T_19 = s3_hold_amoMask[2] ? 8'hff : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 651:65]
  wire [7:0] _casMismatch_T_18 = s3_hold_amoMask[1] ? 8'hff : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 651:65]
  wire [7:0] _casMismatch_T_17 = s3_hold_amoMask[0] ? 8'hff : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 651:65]
  wire [63:0] casMismatch_lo = {_casMismatch_T_24,_casMismatch_T_23,_casMismatch_T_22,_casMismatch_T_21,
    _casMismatch_T_20,_casMismatch_T_19,_casMismatch_T_18,_casMismatch_T_17}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 651:65]
  wire [127:0] _casMismatch_T_33 = {_casMismatch_T_32,_casMismatch_T_31,_casMismatch_T_30,_casMismatch_T_29,
    _casMismatch_T_28,_casMismatch_T_27,_casMismatch_T_26,_casMismatch_T_25,casMismatch_lo}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 651:65]
  wire [127:0] _casMismatch_T_34 = _casMismatch_T & _casMismatch_T_33; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 651:48]
  wire  casMismatch = |_casMismatch_T_34; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 651:87]
  wire  casFail = (s3_cas | refillOp & _s3_cas_T_4) & casMismatch; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 677:52]
  wire  _atomicBanks_T_2 = ~casFail; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 716:20]
  wire  _s3_sc_T = s3_hold_cmd == 5'h7; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 627:40]
  wire  s3_sc = s3_atomic & s3_hold_cmd == 5'h7; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 627:25]
  wire  _s3_write_hit_T_2 = s3_coh == 2'h2 | _probeNew_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 240:26]
  wire  s3_write_hit = s3_hit & _s3_write_hit_T_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 630:29]
  wire [47:0] _lineMatch_T_1 = {s3_hold_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 209:8]
  reg [47:0] lrsc_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 632:22]
  wire  lineMatch = _lineMatch_T_1 == lrsc_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 634:42]
  reg [5:0] lrsc_count; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 633:27]
  wire  _scOk_T_2 = lrsc_count > 6'h8; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 635:63]
  wire  scOk = s3_sc & s3_write_hit & lineMatch & lrsc_count > 6'h8; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 635:49]
  wire  twoBanks3 = _s3_cas_T_3 | |s3_hold_amoMask[15:8]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 642:42]
  wire [7:0] _pairBanks_T_2 = 8'h1 << bank1; // @[src/main/scala/chisel3/util/OneHot.scala 65:12]
  wire [7:0] _pairBanks_T_4 = twoBanks3 ? _pairBanks_T_2 : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 713:8]
  wire [7:0] pairBanks = _atomicBanks_T | _pairBanks_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 712:48]
  wire [7:0] _atomicBanks_T_5 = s3_cas & ~casFail | scOk ? pairBanks : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 716:8]
  wire [7:0] atomicBanks = s3_alu ? _atomicBanks_T : _atomicBanks_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 715:24]
  wire  doAtomicData = s3_atomic & |atomicBanks; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 717:32]
  wire  doAtomicMeta = doAtomicData & _doStoreMeta_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 718:35]
  wire  doMeta = probeWriteMeta | doStoreMeta | doAtomicMeta | doInstall; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 721:62]
  reg  sent_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
  wire  _s3_done_T_8 = ~doMeta | sent_1 | io_metaWrite_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 790:80]
  wire  _s3_done_T_9 = _s3_done_T_4 & _s3_done_T_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 818:45]
  wire  doData = doStoreData | doAtomicData | doInstall; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 722:44]
  reg  sent_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
  wire  _s3_done_T_13 = ~doData | sent_2 | io_dataWrite_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 790:80]
  wire  _s3_done_T_14 = _s3_done_T_9 & _s3_done_T_13; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 819:47]
  reg  s3_replace; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 584:23]
  wire  victimWb = s3_replace & doInstall; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 727:29]
  reg  s3_refill_passDirty; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 588:22]
  wire  dirtyRefill = s3_refill_passDirty | _sharedStore_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 681:41]
  wire  sharedDirty = s3_refill_req & _sharedStore_T_2 & dirtyRefill & _doInstall_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 683:74]
  wire  refillWb = _doInstall_T_1 & (sharedDirty | sharedStore & dirtyRefill & _doInstall_T_5); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 685:27]
  wire  doWb1 = s3_probe | victimWb | refillWb; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 729:36]
  reg  sent_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
  wire  _wb1Fire_T = io_wbReq_ready & io_wbReq_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire  _wb1Fire_T_1 = ~sent_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 746:34]
  wire  wb1Fire = _wb1Fire_T & ~sent_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 746:31]
  wire  _s3_done_T_17 = ~doWb1 | sent_3 | wb1Fire; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 790:80]
  wire  _s3_done_T_18 = _s3_done_T_14 & _s3_done_T_17; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 820:47]
  wire  doWb2 = victimWb & refillWb; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 730:24]
  reg  sent_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
  wire  wb2Fire = _wb1Fire_T & sent_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 747:31]
  wire  _s3_done_T_21 = ~doWb2 | sent_7 | wb2Fire; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 790:80]
  wire  _s3_done_T_22 = _s3_done_T_18 & _s3_done_T_21; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 821:36]
  wire  _s3_done_T_24 = ~s3_probe; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 790:61]
  reg  sent_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
  wire  _s3_done_T_26 = ~s3_probe | sent_4 | io_probeResp_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 790:80]
  wire  _s3_done_T_27 = _s3_done_T_22 & _s3_done_T_26; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 822:36]
  wire  doAtomicResp = s3_atomic | refillOp; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 732:32]
  wire  _s3_done_T_29 = ~doAtomicResp; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 790:61]
  reg  sent_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
  wire  _s3_done_T_28 = io_atomicResp_ready & io_atomicResp_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire  _s3_done_T_31 = ~doAtomicResp | sent_5 | _s3_done_T_28; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 790:80]
  wire  _s3_done_T_32 = _s3_done_T_27 & _s3_done_T_31; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 823:52]
  reg  sent_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
  wire  _s3_done_T_33 = io_storeHit_ready & io_storeHit_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire  _s3_done_T_36 = ~s3_store | sent_6 | _s3_done_T_33; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 790:80]
  wire  _s3_done_T_37 = _s3_done_T_32 & _s3_done_T_36; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 824:54]
  wire  refillAtomicCmd = s3_refill_req & _refillOp_T_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 733:39]
  wire  _doS3Replay_T = refillErr | pendInv; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 736:50]
  wire  downgraded = doInstall & _sharedStore_T_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 734:30]
  wire  doS3Replay = refillAtomicCmd & (refillErr | pendInv | downgraded); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 736:36]
  wire  _s3_done_T_40 = ~doS3Replay; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 790:61]
  reg  sent_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
  wire  _writesDone_T_8 = _s3_done_T_3 & _s3_done_T_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 793:45]
  wire  _writesDone_T_13 = _writesDone_T_8 & _s3_done_T_13; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 794:49]
  wire  _writesDone_T_17 = _writesDone_T_13 & _s3_done_T_17; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 795:49]
  wire  writesDone = _writesDone_T_17 & _s3_done_T_21; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 796:38]
  wire  s3Replay = s3_valid & doS3Replay & ~sent_8 & writesDone; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 798:50]
  wire  _s3_done_T_38 = io_atomicReplay_ready & io_atomicReplay_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire  _s3_done_T_39 = s3Replay & _s3_done_T_38; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 826:38]
  wire  _s3_done_T_42 = ~doS3Replay | sent_8 | _s3_done_T_39; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 790:80]
  wire  s3_done = _s3_done_T_37 & _s3_done_T_42; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 825:48]
  wire  s3_ready = ~s3_valid | s3_done; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 827:25]
  wire  s2_fire = wantS3 & s3_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 570:21]
  wire  _storeLeave_T = s2_store & s2_need_miss; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 563:29]
  wire  _missAccepted_T = io_missReq_ready & io_missReq_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire  missAccepted = _missAccepted_T & io_missResp_handled; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 543:38]
  wire  _storeLeave_T_1 = io_storeReplay_ready & io_storeReplay_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire  storeLeave = s2_store & s2_need_miss & (missAccepted | _storeLeave_T_1); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 563:45]
  wire  _s2_upgrade_T_7 = _s2_need_miss_T_3 & s2_hit & _s2_need_miss_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 395:44]
  wire  s2_upgrade = s2_store & s2_hit & s2_coh == 2'h1 | _s2_upgrade_T_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 394:72]
  wire  upgradeFail = s2_upgrade & io_occupyFail; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 516:32]
  wire  wbBlocked = s2_need_miss & io_wbBlock; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 520:32]
  wire  sendMiss = s2_need_miss & ~upgradeFail & ~wbBlocked; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 521:47]
  wire  _sameAddrReject_T = ~io_missResp_handled; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 549:36]
  wire  sameAddrReject = sendMiss & ~io_missResp_handled & io_missResp_sameAddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 549:57]
  wire  atomicNeedReplay = s2_atomic & (upgradeFail | sameAddrReject); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 550:36]
  wire  s2Replay = atomicNeedReplay & ~s3Replay; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 558:32]
  wire  atomicLeave = s2_atomic & s2_need_miss & (missAccepted | s2Replay & _s3_done_T_38); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 564:47]
  wire  missLeave = storeLeave | atomicLeave; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 565:30]
  wire  s2_done = s2_fire | missLeave; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 571:25]
  wire  s2_ready = ~s2_valid | s2_done; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 572:25]
  wire  isRefill1 = s1_valid & s1_hold_src == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 409:28]
  reg  s1_first; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 376:25]
  reg [35:0] s1_tag_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 377:19]
  wire [35:0] tagNow_3 = s1_first ? io_tagResp_3 : s1_tag_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 383:19]
  reg [1:0] s1_meta_3_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 378:20]
  wire [1:0] metaNow_3_coh = s1_first ? io_metaResp_3_coh : s1_meta_3_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 384:20]
  wire  _hitOh_T_14 = metaNow_3_coh != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/MetaArray.scala 29:27]
  wire  _hitOh_T_15 = tagNow_3 == s1_hold_addr[47:12] & _hitOh_T_14; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 398:41]
  reg [35:0] s1_tag_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 377:19]
  wire [35:0] tagNow_2 = s1_first ? io_tagResp_2 : s1_tag_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 383:19]
  reg [1:0] s1_meta_2_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 378:20]
  wire [1:0] metaNow_2_coh = s1_first ? io_metaResp_2_coh : s1_meta_2_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 384:20]
  wire  _hitOh_T_10 = metaNow_2_coh != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/MetaArray.scala 29:27]
  wire  _hitOh_T_11 = tagNow_2 == s1_hold_addr[47:12] & _hitOh_T_10; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 398:41]
  reg [35:0] s1_tag_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 377:19]
  wire [35:0] tagNow_1 = s1_first ? io_tagResp_1 : s1_tag_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 383:19]
  reg [1:0] s1_meta_1_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 378:20]
  wire [1:0] metaNow_1_coh = s1_first ? io_metaResp_1_coh : s1_meta_1_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 384:20]
  wire  _hitOh_T_6 = metaNow_1_coh != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/MetaArray.scala 29:27]
  wire  _hitOh_T_7 = tagNow_1 == s1_hold_addr[47:12] & _hitOh_T_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 398:41]
  reg [35:0] s1_tag_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 377:19]
  wire [35:0] tagNow_0 = s1_first ? io_tagResp_0 : s1_tag_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 383:19]
  reg [1:0] s1_meta_0_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 378:20]
  wire [1:0] metaNow_0_coh = s1_first ? io_metaResp_0_coh : s1_meta_0_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 384:20]
  wire  _hitOh_T_2 = metaNow_0_coh != 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/Meta/MetaArray.scala 29:27]
  wire  _hitOh_T_3 = tagNow_0 == s1_hold_addr[47:12] & _hitOh_T_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 398:41]
  wire [3:0] hitOh = {_hitOh_T_15,_hitOh_T_11,_hitOh_T_7,_hitOh_T_3}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 399:6]
  wire  s1_hit = |hitOh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 400:22]
  wire  _needSearch_T_1 = isRefill1 & ~s1_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 425:30]
  wire  specValid = |s1_hold_replaceWay; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 419:38]
  wire  _emptyOh_T_7 = ~_hitOh_T_14; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 417:5]
  wire  _emptyOh_T_5 = ~_hitOh_T_10; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 417:5]
  wire  _emptyOh_T_3 = ~_hitOh_T_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 417:5]
  wire  _emptyOh_T_1 = ~_hitOh_T_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 417:5]
  wire [3:0] emptyOh = {_emptyOh_T_7,_emptyOh_T_5,_emptyOh_T_3,_emptyOh_T_1}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 418:6]
  wire [3:0] _specWay_T = specValid ? s1_hold_replaceWay : 4'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 420:29]
  wire [1:0] specWay_hi = _specWay_T[3:2]; // @[src/main/scala/chisel3/util/OneHot.scala 30:18]
  wire [1:0] specWay_lo = _specWay_T[1:0]; // @[src/main/scala/chisel3/util/OneHot.scala 31:18]
  wire [1:0] _specWay_T_2 = specWay_hi | specWay_lo; // @[src/main/scala/chisel3/util/OneHot.scala 32:28]
  wire [1:0] specWay = {|specWay_hi,_specWay_T_2[1]}; // @[src/main/scala/chisel3/util/OneHot.scala 32:10]
  wire [3:0] _specEmpty_T = emptyOh >> specWay; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 421:39]
  wire  specEmpty = specValid & _specEmpty_T[0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 421:29]
  wire  useSpecified = _needSearch_T_1 & specEmpty; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 422:43]
  wire  _needSearch_T_3 = isRefill1 & ~s1_hit & ~useSpecified; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 425:41]
  wire  useEmpty = _needSearch_T_3 & |emptyOh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 423:56]
  wire  needSearch = isRefill1 & ~s1_hit & ~useSpecified & ~useEmpty; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 425:58]
  wire  _occupyStall_T = s1_valid & needSearch; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 429:30]
  wire  occupyStall = s1_valid & needSearch & s2_upgrade & s2_hold_set != s1_hold_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 429:58]
  wire  blocked = io_replaceQuery_valid & io_replaceBlock; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 448:39]
  wire  s1_pick_stall = occupyStall | blocked; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 468:35]
  wire  _s1_need_data_T = ~s1_pick_stall; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 469:22]
  wire  isStore1 = s1_valid & s1_hold_src == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 406:27]
  wire [3:0] _hitMeta_T = s1_hit ? hitOh : 4'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 402:26]
  wire [1:0] _hitMeta_T_5 = _hitMeta_T[0] ? metaNow_0_coh : 2'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [1:0] _hitMeta_T_6 = _hitMeta_T[1] ? metaNow_1_coh : 2'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [1:0] _hitMeta_T_9 = _hitMeta_T_5 | _hitMeta_T_6; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [1:0] _hitMeta_T_7 = _hitMeta_T[2] ? metaNow_2_coh : 2'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [1:0] _hitMeta_T_10 = _hitMeta_T_9 | _hitMeta_T_7; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [1:0] _hitMeta_T_8 = _hitMeta_T[3] ? metaNow_3_coh : 2'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [1:0] hitMeta_coh = _hitMeta_T_10 | _hitMeta_T_8; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire  _hitWrite_T_1 = hitMeta_coh == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 240:33]
  wire  _hitWrite_T_2 = hitMeta_coh == 2'h2 | hitMeta_coh == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 240:26]
  wire  hitWrite = s1_hit & _hitWrite_T_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 404:25]
  wire  fullStore1 = isStore1 & &s1_hold_storeMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 414:29]
  wire [7:0] storeNeed1_slice_7 = s1_hold_storeMask[63:56]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 243:9]
  wire  _storeNeed1_T_34 = |storeNeed1_slice_7 & ~(&storeNeed1_slice_7); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 248:17]
  wire [7:0] storeNeed1_slice_6 = s1_hold_storeMask[55:48]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 243:9]
  wire  _storeNeed1_T_30 = |storeNeed1_slice_6 & ~(&storeNeed1_slice_6); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 248:17]
  wire [7:0] storeNeed1_slice_5 = s1_hold_storeMask[47:40]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 243:9]
  wire  _storeNeed1_T_26 = |storeNeed1_slice_5 & ~(&storeNeed1_slice_5); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 248:17]
  wire [7:0] storeNeed1_slice_4 = s1_hold_storeMask[39:32]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 243:9]
  wire  _storeNeed1_T_22 = |storeNeed1_slice_4 & ~(&storeNeed1_slice_4); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 248:17]
  wire [7:0] storeNeed1_slice_3 = s1_hold_storeMask[31:24]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 243:9]
  wire  _storeNeed1_T_18 = |storeNeed1_slice_3 & ~(&storeNeed1_slice_3); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 248:17]
  wire [7:0] storeNeed1_slice_2 = s1_hold_storeMask[23:16]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 243:9]
  wire  _storeNeed1_T_14 = |storeNeed1_slice_2 & ~(&storeNeed1_slice_2); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 248:17]
  wire [7:0] storeNeed1_slice_1 = s1_hold_storeMask[15:8]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 243:9]
  wire  _storeNeed1_T_10 = |storeNeed1_slice_1 & ~(&storeNeed1_slice_1); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 248:17]
  wire [7:0] storeNeed1_slice = s1_hold_storeMask[7:0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 243:9]
  wire  _storeNeed1_T_6 = |storeNeed1_slice & ~(&storeNeed1_slice); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 248:17]
  wire [7:0] _storeNeed1_T_35 = {_storeNeed1_T_34,_storeNeed1_T_30,_storeNeed1_T_26,_storeNeed1_T_22,_storeNeed1_T_18,
    _storeNeed1_T_14,_storeNeed1_T_10,_storeNeed1_T_6}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 249:8]
  wire  storeNeed1 = isStore1 & hitWrite & ~fullStore1 & |_storeNeed1_T_35; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 462:56]
  wire  isProbe1 = s1_valid & s1_hold_src == 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 408:27]
  wire  _probeNeed1_T_1 = _hitWrite_T_1 | s1_hold_needData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 222:48]
  wire  _probeNeed1_T_5 = 2'h2 == s1_hold_probeOp ? _hitWrite_T_1 : 2'h1 == s1_hold_probeOp & _probeNeed1_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 220:27]
  wire  _probeNeed1_T_7 = 2'h3 == s1_hold_probeOp ? _hitWrite_T_1 : _probeNeed1_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 220:27]
  wire  probeNeed1 = isProbe1 & s1_hit & _probeNeed1_T_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 460:39]
  wire  isAtomic1 = s1_valid & s1_hold_src == 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 407:28]
  wire  isLr1 = isAtomic1 & s1_hold_cmd == 5'h6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 410:25]
  wire  isSc1 = isAtomic1 & s1_hold_cmd == 5'h7; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 411:25]
  wire  _isCas1_T_3 = s1_hold_cmd == 5'h18; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 340:75]
  wire  _isCas1_T_4 = s1_hold_cmd == 5'h1a | s1_hold_cmd == 5'h1b | s1_hold_cmd == 5'h18; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 340:68]
  wire  isCas1 = isAtomic1 & _isCas1_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 412:26]
  wire  _isAlu1_T_6 = s1_hold_cmd == 5'h4 | s1_hold_cmd == 5'h9 | s1_hold_cmd == 5'ha | s1_hold_cmd == 5'hb; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 338:90]
  wire  _isAlu1_T_15 = s1_hold_cmd == 5'h8 | s1_hold_cmd == 5'hc | s1_hold_cmd == 5'hd | s1_hold_cmd == 5'he |
    s1_hold_cmd == 5'hf; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 339:114]
  wire  isAlu1 = isAtomic1 & (_isAlu1_T_6 | _isAlu1_T_15); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 413:26]
  wire  atomicNeed1 = hitWrite & (isLr1 | isSc1 | isCas1 | isAlu1); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 463:30]
  wire  _occupyMask_T_1 = ~occupyStall; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 432:50]
  wire  _occupyMask_T_2 = _occupyStall_T & ~occupyStall; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 432:47]
  wire [3:0] occupyMask = _occupyStall_T & ~occupyStall ? io_occupyWay : 4'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 432:23]
  reg [3:0] skipVictim; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 434:27]
  wire  _eligible_T_27 = _hitOh_T_14 & ~occupyMask[3] & ~skipVictim[3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 436:42]
  wire  _eligible_T_20 = _hitOh_T_10 & ~occupyMask[2] & ~skipVictim[2]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 436:42]
  wire  _eligible_T_13 = _hitOh_T_6 & ~occupyMask[1] & ~skipVictim[1]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 436:42]
  wire  _eligible_T_6 = _hitOh_T_2 & ~occupyMask[0] & ~skipVictim[0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 436:42]
  wire [3:0] eligible = {_eligible_T_27,_eligible_T_20,_eligible_T_13,_eligible_T_6}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 437:6]
  wire  hasEligible = |eligible; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 438:30]
  wire  replacing = needSearch & hasEligible & _occupyMask_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 441:45]
  wire  willReplace = replacing & ~blocked; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 457:31]
  wire [1:0] hitWay_hi = hitOh[3:2]; // @[src/main/scala/chisel3/util/OneHot.scala 30:18]
  wire [1:0] hitWay_lo = hitOh[1:0]; // @[src/main/scala/chisel3/util/OneHot.scala 31:18]
  wire [1:0] _hitWay_T_1 = hitWay_hi | hitWay_lo; // @[src/main/scala/chisel3/util/OneHot.scala 32:28]
  wire [1:0] hitWay = {|hitWay_hi,_hitWay_T_1[1]}; // @[src/main/scala/chisel3/util/OneHot.scala 32:10]
  wire [1:0] _emptyWay_T_4 = emptyOh[2] ? 2'h2 : 2'h3; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [1:0] _emptyWay_T_5 = emptyOh[1] ? 2'h1 : _emptyWay_T_4; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [1:0] emptyWay = emptyOh[0] ? 2'h0 : _emptyWay_T_5; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _plruOk_T = eligible >> plru_io_victim; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 439:39]
  wire  plruOk = hasEligible & _plruOk_T[0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 439:28]
  wire [1:0] _victimWay_T_4 = eligible[2] ? 2'h2 : 2'h3; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [1:0] _victimWay_T_5 = eligible[1] ? 2'h1 : _victimWay_T_4; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [1:0] _victimWay_T_6 = eligible[0] ? 2'h0 : _victimWay_T_5; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [1:0] victimWay = plruOk ? plru_io_victim : _victimWay_T_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 440:22]
  wire [1:0] _chosenWay1_T = useEmpty ? emptyWay : victimWay; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 443:35]
  wire [1:0] _chosenWay1_T_1 = useSpecified ? specWay : _chosenWay1_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 443:8]
  wire [1:0] chosenWay1 = s1_hit ? hitWay : _chosenWay1_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 442:23]
  wire [1:0] _GEN_87 = 2'h1 == chosenWay1 ? metaNow_1_coh : metaNow_0_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 467:{49,49}]
  wire [1:0] _GEN_88 = 2'h2 == chosenWay1 ? metaNow_2_coh : _GEN_87; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 467:{49,49}]
  wire [1:0] _GEN_89 = 2'h3 == chosenWay1 ? metaNow_3_coh : _GEN_88; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 467:{49,49}]
  wire  _victimNeedData_T = _GEN_89 == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 467:49]
  wire  victimNeedData = willReplace & _GEN_89 == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 467:36]
  wire  s1_need_data = ~s1_pick_stall & (storeNeed1 | probeNeed1 | atomicNeed1 | victimNeedData); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 469:37]
  wire  s1_data_ok = ~s1_need_data | io_dataRead_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 476:34]
  wire  s1_fire = s1_valid & s2_ready & s1_data_ok & _s1_need_data_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 477:49]
  wire  s1_ready = ~s1_valid | s1_fire; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 478:25]
  wire  portFree = io_tagRead_ready & s1_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 302:56]
  wire  _probeCan_T_3 = s2_valid & s2_hold_set == probeSet; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 295:17]
  wire  _probeCan_T_4 = s1_valid & s1_hold_set == probeSet | _probeCan_T_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 294:39]
  wire  _probeCan_T_6 = s3_valid & s3_hold_set == probeSet; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 296:17]
  wire  _probeCan_T_7 = _probeCan_T_4 | _probeCan_T_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 295:41]
  wire  probeCan = ~_probeCan_T_7 & portFree; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 304:40]
  wire  _refillCan_T_3 = s2_valid & s2_hold_set == refillSet; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 295:17]
  wire  _refillCan_T_4 = s1_valid & s1_hold_set == refillSet | _refillCan_T_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 294:39]
  wire  _refillCan_T_6 = s3_valid & s3_hold_set == refillSet; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 296:17]
  wire  _refillCan_T_7 = _refillCan_T_4 | _refillCan_T_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 295:41]
  wire  refillCan = ~_refillCan_T_7 & portFree; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 305:42]
  wire  _storeCan_T_3 = s2_valid & s2_hold_set == storeSet; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 295:17]
  wire  _storeCan_T_4 = s1_valid & s1_hold_set == storeSet | _storeCan_T_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 294:39]
  wire  _storeCan_T_6 = s3_valid & s3_hold_set == storeSet; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 296:17]
  wire  _storeCan_T_7 = _storeCan_T_4 | _storeCan_T_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 295:41]
  wire  storeCan = ~_storeCan_T_7 & portFree; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 306:40]
  wire  _atomicCan_T_3 = s2_valid & s2_hold_set == atomicSet; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 295:17]
  wire  _atomicCan_T_4 = s1_valid & s1_hold_set == atomicSet | _atomicCan_T_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 294:39]
  wire  _atomicCan_T_6 = s3_valid & s3_hold_set == atomicSet; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 296:17]
  wire  _atomicCan_T_7 = _atomicCan_T_4 | _atomicCan_T_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 295:41]
  wire  atomicCan = ~_atomicCan_T_7 & portFree; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 307:42]
  wire  _io_refill_ready_T_1 = ~(io_probe_valid & probeCan); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 311:35]
  wire  _io_store_ready_T_4 = ~(io_refill_valid & refillCan); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 312:66]
  wire  _io_atomic_ready_T_5 = atomicCan & _io_refill_ready_T_1 & _io_store_ready_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 313:65]
  wire  _s0_fire_T = io_probe_ready & io_probe_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire  _s0_fire_T_1 = io_refill_ready & io_refill_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire  _s0_fire_T_3 = io_store_ready & io_store_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire  _s0_fire_T_5 = io_atomic_ready & io_atomic_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 57:35]
  wire  s0_fire = _s0_fire_T | _s0_fire_T_1 | _s0_fire_T_3 | _s0_fire_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 316:66]
  wire [7:0] _s0_set_T_3 = _s0_fire_T_3 ? storeSet : atomicSet; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 318:39]
  wire [7:0] _s0_set_T_4 = _s0_fire_T_1 ? refillSet : _s0_set_T_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 318:8]
  reg [1:0] s2_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 388:19]
  wire [35:0] _GEN_81 = 2'h1 == chosenWay1 ? tagNow_1 : tagNow_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 215:{17,17}]
  wire [35:0] _GEN_82 = 2'h2 == chosenWay1 ? tagNow_2 : _GEN_81; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 215:{17,17}]
  wire [35:0] _GEN_83 = 2'h3 == chosenWay1 ? tagNow_3 : _GEN_82; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 215:{17,17}]
  wire [41:0] victimPaddr_hi = {_GEN_83,s1_hold_set[5:0]}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 215:13]
  wire [47:0] victimPaddr = {_GEN_83,s1_hold_set[5:0],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 215:13]
  wire [3:0] _skipVictim_T = 4'h1 << victimWay; // @[src/main/scala/chisel3/util/OneHot.scala 65:12]
  wire [3:0] _skipVictim_T_2 = skipVictim | _skipVictim_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 452:30]
  wire  canInstall1 = ~isRefill1 | s1_hit | useSpecified | useEmpty | willReplace; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 456:70]
  wire  twoBanks1 = _isCas1_T_3 | |s1_hold_amoMask[15:8]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 464:42]
  wire [7:0] _atomicBanks1_T = 8'h1 << s1_hold_wordIdx; // @[src/main/scala/chisel3/util/OneHot.scala 65:12]
  wire [2:0] atomicBanks1_shiftAmount_1 = s1_hold_wordIdx + 3'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 466:45]
  wire [7:0] _atomicBanks1_T_4 = 8'h1 << atomicBanks1_shiftAmount_1; // @[src/main/scala/chisel3/util/OneHot.scala 65:12]
  wire [7:0] _atomicBanks1_T_6 = twoBanks1 ? _atomicBanks1_T_4 : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 466:8]
  wire [7:0] atomicBanks1 = _atomicBanks1_T | _atomicBanks1_T_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 465:61]
  wire [7:0] _s1_bank_mask_T_35 = isStore1 ? _storeNeed1_T_35 : atomicBanks1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 471:8]
  wire [41:0] io_dataRead_bits_addr_hi = {s1_hold_addr[47:14],s1_hold_set}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 237:8]
  reg  s2_can_install; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 481:27]
  reg  s2_replace; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 484:23]
  reg  s2_replace_dirty; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 485:29]
  reg [47:0] s2_replace_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 486:28]
  reg [63:0] s2_line_0_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_0_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_0_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_0_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_1_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_1_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_1_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_1_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_2_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_2_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_2_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_2_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_3_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_3_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_3_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_3_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_4_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_4_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_4_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_4_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_5_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_5_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_5_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_5_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_6_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_6_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_6_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_6_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_7_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_7_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_7_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  reg [63:0] s2_line_7_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 488:20]
  wire  _GEN_122 = io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire | s2_got; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73 505:12 487:23]
  wire [63:0] dataNow_0_0 = io_dataResp_valid ? io_dataResp_bits_data_0_0 : s2_line_0_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
  wire [63:0] dataNow_0_1 = io_dataResp_valid ? io_dataResp_bits_data_0_1 : s2_line_0_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
  wire [63:0] dataNow_1_0 = io_dataResp_valid ? io_dataResp_bits_data_1_0 : s2_line_1_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
  wire [63:0] dataNow_1_1 = io_dataResp_valid ? io_dataResp_bits_data_1_1 : s2_line_1_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
  wire [63:0] dataNow_2_0 = io_dataResp_valid ? io_dataResp_bits_data_2_0 : s2_line_2_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
  wire [63:0] dataNow_2_1 = io_dataResp_valid ? io_dataResp_bits_data_2_1 : s2_line_2_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
  wire [63:0] dataNow_3_0 = io_dataResp_valid ? io_dataResp_bits_data_3_0 : s2_line_3_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
  wire [63:0] dataNow_3_1 = io_dataResp_valid ? io_dataResp_bits_data_3_1 : s2_line_3_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
  wire [63:0] dataNow_4_0 = io_dataResp_valid ? io_dataResp_bits_data_4_0 : s2_line_4_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
  wire [63:0] dataNow_4_1 = io_dataResp_valid ? io_dataResp_bits_data_4_1 : s2_line_4_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
  wire [63:0] dataNow_5_0 = io_dataResp_valid ? io_dataResp_bits_data_5_0 : s2_line_5_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
  wire [63:0] dataNow_5_1 = io_dataResp_valid ? io_dataResp_bits_data_5_1 : s2_line_5_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
  wire [63:0] dataNow_6_0 = io_dataResp_valid ? io_dataResp_bits_data_6_0 : s2_line_6_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
  wire [63:0] dataNow_6_1 = io_dataResp_valid ? io_dataResp_bits_data_6_1 : s2_line_6_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
  wire [63:0] dataNow_7_0 = io_dataResp_valid ? io_dataResp_bits_data_7_0 : s2_line_7_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
  wire [63:0] dataNow_7_1 = io_dataResp_valid ? io_dataResp_bits_data_7_1 : s2_line_7_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
  wire [1:0] _io_missReq_bits_source_T = s2_store ? 2'h1 : 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 524:32]
  wire [3:0] _io_missReq_bits_occupy_way_T = 4'h1 << s2_way; // @[src/main/scala/chisel3/util/OneHot.scala 58:35]
  reg [1:0] s3_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 579:19]
  reg  s3_replace_dirty; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 585:29]
  reg [47:0] s3_replace_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 586:28]
  wire  _GEN_222 = io_tagWrite_valid | sent_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21 611:{28,38}]
  wire  _GEN_223 = io_metaWrite_valid | sent_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21 612:{29,39}]
  wire  _GEN_224 = io_dataWrite_valid | sent_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21 613:{29,39}]
  wire  _GEN_225 = wb1Fire | sent_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21 614:{37,47}]
  wire  _GEN_226 = wb2Fire | sent_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21 615:{36,46}]
  wire  _GEN_227 = io_probeResp_valid | sent_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21 616:{29,39}]
  wire  _GEN_228 = _s3_done_T_28 | sent_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21 617:{30,40}]
  wire  _GEN_229 = _s3_done_T_33 | sent_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21 618:{28,38}]
  wire  _GEN_230 = _s3_done_T_39 | sent_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21 619:{44,54}]
  wire  s3_lr = s3_atomic & cmdIsLr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 626:25]
  wire  _probeNeedWb_T_1 = _probeNew_T | s3_hold_needData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 222:48]
  wire  _probeNeedWb_T_5 = _probeNew_T_4 ? _probeNew_T : _probeNew_T_2 & _probeNeedWb_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 220:27]
  wire  _probeNeedWb_T_7 = _probeNew_T_6 ? _probeNew_T : _probeNeedWb_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 220:27]
  wire  probeNeedWb = _probeWriteMeta_T & _probeNeedWb_T_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 655:40]
  wire [1:0] _rawRefillCoh_T_1 = s3_refill_passDirty ? 2'h3 : 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 662:8]
  wire [1:0] rawRefillCoh = _sharedStore_T_2 ? 2'h1 : _rawRefillCoh_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 661:25]
  wire [1:0] refillCoh = pendInv ? 2'h0 : rawRefillCoh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 663:22]
  wire  refillMutate = refillOp & (_s3_alu_T_16 | _s3_cas_T_4 & _atomicBanks_T_2); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 678:31]
  wire  refillStore = doInstall & _sharedStore_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 679:31]
  wire [1:0] installCoh = refillMutate | refillStore ? 2'h3 : refillCoh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 680:23]
  wire [63:0] neu = s3_hold_storeData[63:0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 690:32]
  wire  fullBank = &s3_hold_storeMask[7:0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 691:52]
  wire [7:0] storeWords_0_bytes_0 = s3_hold_storeMask[0] ? neu[7:0] : s3_word_0[7:0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_0_bytes_1 = s3_hold_storeMask[1] ? neu[15:8] : s3_word_0[15:8]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_0_bytes_2 = s3_hold_storeMask[2] ? neu[23:16] : s3_word_0[23:16]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_0_bytes_3 = s3_hold_storeMask[3] ? neu[31:24] : s3_word_0[31:24]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_0_bytes_4 = s3_hold_storeMask[4] ? neu[39:32] : s3_word_0[39:32]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_0_bytes_5 = s3_hold_storeMask[5] ? neu[47:40] : s3_word_0[47:40]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_0_bytes_6 = s3_hold_storeMask[6] ? neu[55:48] : s3_word_0[55:48]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_0_bytes_7 = s3_hold_storeMask[7] ? neu[63:56] : s3_word_0[63:56]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [63:0] _storeWords_0_T_1 = {storeWords_0_bytes_7,storeWords_0_bytes_6,storeWords_0_bytes_5,storeWords_0_bytes_4,
    storeWords_0_bytes_3,storeWords_0_bytes_2,storeWords_0_bytes_1,storeWords_0_bytes_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 258:8]
  wire [63:0] storeWords_0 = fullBank ? neu : _storeWords_0_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 692:25]
  wire [63:0] neu_1 = s3_hold_storeData[127:64]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 690:32]
  wire  fullBank_1 = &s3_hold_storeMask[15:8]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 691:52]
  wire [7:0] storeWords_1_bytes_0 = s3_hold_storeMask[8] ? neu_1[7:0] : s3_word_1[7:0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_1_bytes_1 = s3_hold_storeMask[9] ? neu_1[15:8] : s3_word_1[15:8]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_1_bytes_2 = s3_hold_storeMask[10] ? neu_1[23:16] : s3_word_1[23:16]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_1_bytes_3 = s3_hold_storeMask[11] ? neu_1[31:24] : s3_word_1[31:24]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_1_bytes_4 = s3_hold_storeMask[12] ? neu_1[39:32] : s3_word_1[39:32]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_1_bytes_5 = s3_hold_storeMask[13] ? neu_1[47:40] : s3_word_1[47:40]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_1_bytes_6 = s3_hold_storeMask[14] ? neu_1[55:48] : s3_word_1[55:48]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_1_bytes_7 = s3_hold_storeMask[15] ? neu_1[63:56] : s3_word_1[63:56]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [63:0] _storeWords_1_T_1 = {storeWords_1_bytes_7,storeWords_1_bytes_6,storeWords_1_bytes_5,storeWords_1_bytes_4,
    storeWords_1_bytes_3,storeWords_1_bytes_2,storeWords_1_bytes_1,storeWords_1_bytes_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 258:8]
  wire [63:0] storeWords_1 = fullBank_1 ? neu_1 : _storeWords_1_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 692:25]
  wire [63:0] neu_2 = s3_hold_storeData[191:128]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 690:32]
  wire  fullBank_2 = &s3_hold_storeMask[23:16]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 691:52]
  wire [7:0] storeWords_2_bytes_0 = s3_hold_storeMask[16] ? neu_2[7:0] : s3_word_2[7:0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_2_bytes_1 = s3_hold_storeMask[17] ? neu_2[15:8] : s3_word_2[15:8]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_2_bytes_2 = s3_hold_storeMask[18] ? neu_2[23:16] : s3_word_2[23:16]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_2_bytes_3 = s3_hold_storeMask[19] ? neu_2[31:24] : s3_word_2[31:24]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_2_bytes_4 = s3_hold_storeMask[20] ? neu_2[39:32] : s3_word_2[39:32]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_2_bytes_5 = s3_hold_storeMask[21] ? neu_2[47:40] : s3_word_2[47:40]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_2_bytes_6 = s3_hold_storeMask[22] ? neu_2[55:48] : s3_word_2[55:48]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_2_bytes_7 = s3_hold_storeMask[23] ? neu_2[63:56] : s3_word_2[63:56]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [63:0] _storeWords_2_T_1 = {storeWords_2_bytes_7,storeWords_2_bytes_6,storeWords_2_bytes_5,storeWords_2_bytes_4,
    storeWords_2_bytes_3,storeWords_2_bytes_2,storeWords_2_bytes_1,storeWords_2_bytes_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 258:8]
  wire [63:0] storeWords_2 = fullBank_2 ? neu_2 : _storeWords_2_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 692:25]
  wire [63:0] neu_3 = s3_hold_storeData[255:192]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 690:32]
  wire  fullBank_3 = &s3_hold_storeMask[31:24]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 691:52]
  wire [7:0] storeWords_3_bytes_0 = s3_hold_storeMask[24] ? neu_3[7:0] : s3_word_3[7:0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_3_bytes_1 = s3_hold_storeMask[25] ? neu_3[15:8] : s3_word_3[15:8]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_3_bytes_2 = s3_hold_storeMask[26] ? neu_3[23:16] : s3_word_3[23:16]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_3_bytes_3 = s3_hold_storeMask[27] ? neu_3[31:24] : s3_word_3[31:24]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_3_bytes_4 = s3_hold_storeMask[28] ? neu_3[39:32] : s3_word_3[39:32]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_3_bytes_5 = s3_hold_storeMask[29] ? neu_3[47:40] : s3_word_3[47:40]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_3_bytes_6 = s3_hold_storeMask[30] ? neu_3[55:48] : s3_word_3[55:48]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_3_bytes_7 = s3_hold_storeMask[31] ? neu_3[63:56] : s3_word_3[63:56]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [63:0] _storeWords_3_T_1 = {storeWords_3_bytes_7,storeWords_3_bytes_6,storeWords_3_bytes_5,storeWords_3_bytes_4,
    storeWords_3_bytes_3,storeWords_3_bytes_2,storeWords_3_bytes_1,storeWords_3_bytes_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 258:8]
  wire [63:0] storeWords_3 = fullBank_3 ? neu_3 : _storeWords_3_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 692:25]
  wire [63:0] neu_4 = s3_hold_storeData[319:256]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 690:32]
  wire  fullBank_4 = &s3_hold_storeMask[39:32]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 691:52]
  wire [7:0] storeWords_4_bytes_0 = s3_hold_storeMask[32] ? neu_4[7:0] : s3_word_4[7:0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_4_bytes_1 = s3_hold_storeMask[33] ? neu_4[15:8] : s3_word_4[15:8]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_4_bytes_2 = s3_hold_storeMask[34] ? neu_4[23:16] : s3_word_4[23:16]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_4_bytes_3 = s3_hold_storeMask[35] ? neu_4[31:24] : s3_word_4[31:24]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_4_bytes_4 = s3_hold_storeMask[36] ? neu_4[39:32] : s3_word_4[39:32]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_4_bytes_5 = s3_hold_storeMask[37] ? neu_4[47:40] : s3_word_4[47:40]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_4_bytes_6 = s3_hold_storeMask[38] ? neu_4[55:48] : s3_word_4[55:48]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_4_bytes_7 = s3_hold_storeMask[39] ? neu_4[63:56] : s3_word_4[63:56]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [63:0] _storeWords_4_T_1 = {storeWords_4_bytes_7,storeWords_4_bytes_6,storeWords_4_bytes_5,storeWords_4_bytes_4,
    storeWords_4_bytes_3,storeWords_4_bytes_2,storeWords_4_bytes_1,storeWords_4_bytes_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 258:8]
  wire [63:0] storeWords_4 = fullBank_4 ? neu_4 : _storeWords_4_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 692:25]
  wire [63:0] neu_5 = s3_hold_storeData[383:320]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 690:32]
  wire  fullBank_5 = &s3_hold_storeMask[47:40]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 691:52]
  wire [7:0] storeWords_5_bytes_0 = s3_hold_storeMask[40] ? neu_5[7:0] : s3_word_5[7:0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_5_bytes_1 = s3_hold_storeMask[41] ? neu_5[15:8] : s3_word_5[15:8]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_5_bytes_2 = s3_hold_storeMask[42] ? neu_5[23:16] : s3_word_5[23:16]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_5_bytes_3 = s3_hold_storeMask[43] ? neu_5[31:24] : s3_word_5[31:24]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_5_bytes_4 = s3_hold_storeMask[44] ? neu_5[39:32] : s3_word_5[39:32]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_5_bytes_5 = s3_hold_storeMask[45] ? neu_5[47:40] : s3_word_5[47:40]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_5_bytes_6 = s3_hold_storeMask[46] ? neu_5[55:48] : s3_word_5[55:48]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_5_bytes_7 = s3_hold_storeMask[47] ? neu_5[63:56] : s3_word_5[63:56]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [63:0] _storeWords_5_T_1 = {storeWords_5_bytes_7,storeWords_5_bytes_6,storeWords_5_bytes_5,storeWords_5_bytes_4,
    storeWords_5_bytes_3,storeWords_5_bytes_2,storeWords_5_bytes_1,storeWords_5_bytes_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 258:8]
  wire [63:0] storeWords_5 = fullBank_5 ? neu_5 : _storeWords_5_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 692:25]
  wire [63:0] neu_6 = s3_hold_storeData[447:384]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 690:32]
  wire  fullBank_6 = &s3_hold_storeMask[55:48]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 691:52]
  wire [7:0] storeWords_6_bytes_0 = s3_hold_storeMask[48] ? neu_6[7:0] : s3_word_6[7:0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_6_bytes_1 = s3_hold_storeMask[49] ? neu_6[15:8] : s3_word_6[15:8]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_6_bytes_2 = s3_hold_storeMask[50] ? neu_6[23:16] : s3_word_6[23:16]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_6_bytes_3 = s3_hold_storeMask[51] ? neu_6[31:24] : s3_word_6[31:24]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_6_bytes_4 = s3_hold_storeMask[52] ? neu_6[39:32] : s3_word_6[39:32]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_6_bytes_5 = s3_hold_storeMask[53] ? neu_6[47:40] : s3_word_6[47:40]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_6_bytes_6 = s3_hold_storeMask[54] ? neu_6[55:48] : s3_word_6[55:48]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_6_bytes_7 = s3_hold_storeMask[55] ? neu_6[63:56] : s3_word_6[63:56]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [63:0] _storeWords_6_T_1 = {storeWords_6_bytes_7,storeWords_6_bytes_6,storeWords_6_bytes_5,storeWords_6_bytes_4,
    storeWords_6_bytes_3,storeWords_6_bytes_2,storeWords_6_bytes_1,storeWords_6_bytes_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 258:8]
  wire [63:0] storeWords_6 = fullBank_6 ? neu_6 : _storeWords_6_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 692:25]
  wire [63:0] neu_7 = s3_hold_storeData[511:448]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 690:32]
  wire  fullBank_7 = &s3_hold_storeMask[63:56]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 691:52]
  wire [7:0] storeWords_7_bytes_0 = s3_hold_storeMask[56] ? neu_7[7:0] : s3_word_7[7:0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_7_bytes_1 = s3_hold_storeMask[57] ? neu_7[15:8] : s3_word_7[15:8]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_7_bytes_2 = s3_hold_storeMask[58] ? neu_7[23:16] : s3_word_7[23:16]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_7_bytes_3 = s3_hold_storeMask[59] ? neu_7[31:24] : s3_word_7[31:24]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_7_bytes_4 = s3_hold_storeMask[60] ? neu_7[39:32] : s3_word_7[39:32]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_7_bytes_5 = s3_hold_storeMask[61] ? neu_7[47:40] : s3_word_7[47:40]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_7_bytes_6 = s3_hold_storeMask[62] ? neu_7[55:48] : s3_word_7[55:48]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] storeWords_7_bytes_7 = s3_hold_storeMask[63] ? neu_7[63:56] : s3_word_7[63:56]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [63:0] _storeWords_7_T_1 = {storeWords_7_bytes_7,storeWords_7_bytes_6,storeWords_7_bytes_5,storeWords_7_bytes_4,
    storeWords_7_bytes_3,storeWords_7_bytes_2,storeWords_7_bytes_1,storeWords_7_bytes_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 258:8]
  wire [63:0] storeWords_7 = fullBank_7 ? neu_7 : _storeWords_7_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 692:25]
  wire [7:0] atomicLow_bytes_0 = s3_hold_amoMask[0] ? s3_hold_amoData[7:0] : old0[7:0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] atomicLow_bytes_1 = s3_hold_amoMask[1] ? s3_hold_amoData[15:8] : old0[15:8]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] atomicLow_bytes_2 = s3_hold_amoMask[2] ? s3_hold_amoData[23:16] : old0[23:16]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] atomicLow_bytes_3 = s3_hold_amoMask[3] ? s3_hold_amoData[31:24] : old0[31:24]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] atomicLow_bytes_4 = s3_hold_amoMask[4] ? s3_hold_amoData[39:32] : old0[39:32]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] atomicLow_bytes_5 = s3_hold_amoMask[5] ? s3_hold_amoData[47:40] : old0[47:40]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] atomicLow_bytes_6 = s3_hold_amoMask[6] ? s3_hold_amoData[55:48] : old0[55:48]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] atomicLow_bytes_7 = s3_hold_amoMask[7] ? s3_hold_amoData[63:56] : old0[63:56]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [63:0] atomicLow = {atomicLow_bytes_7,atomicLow_bytes_6,atomicLow_bytes_5,atomicLow_bytes_4,atomicLow_bytes_3,
    atomicLow_bytes_2,atomicLow_bytes_1,atomicLow_bytes_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 258:8]
  wire [7:0] atomicHigh_bytes_0 = s3_hold_amoMask[8] ? s3_hold_amoData[71:64] : old1[7:0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] atomicHigh_bytes_1 = s3_hold_amoMask[9] ? s3_hold_amoData[79:72] : old1[15:8]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] atomicHigh_bytes_2 = s3_hold_amoMask[10] ? s3_hold_amoData[87:80] : old1[23:16]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] atomicHigh_bytes_3 = s3_hold_amoMask[11] ? s3_hold_amoData[95:88] : old1[31:24]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] atomicHigh_bytes_4 = s3_hold_amoMask[12] ? s3_hold_amoData[103:96] : old1[39:32]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] atomicHigh_bytes_5 = s3_hold_amoMask[13] ? s3_hold_amoData[111:104] : old1[47:40]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] atomicHigh_bytes_6 = s3_hold_amoMask[14] ? s3_hold_amoData[119:112] : old1[55:48]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [7:0] atomicHigh_bytes_7 = s3_hold_amoMask[15] ? s3_hold_amoData[127:120] : old1[63:56]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 256:10]
  wire [63:0] atomicHigh = {atomicHigh_bytes_7,atomicHigh_bytes_6,atomicHigh_bytes_5,atomicHigh_bytes_4,
    atomicHigh_bytes_3,atomicHigh_bytes_2,atomicHigh_bytes_1,atomicHigh_bytes_0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 258:8]
  wire  atomicWords_is0 = 3'h0 == s3_hold_wordIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 702:19]
  wire  atomicWords_is1 = 3'h0 == bank1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 703:19]
  wire  atomicWords_touched = atomicWords_is0 | atomicWords_is1 & twoBanks3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 704:23]
  wire [63:0] atomicWords_base = s3_refill_req ? refillWords_0 : s3_word_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 705:19]
  wire  atomicWords_useAlu = atomicWords_is0 & (s3_alu | refillMutate & _s3_alu_T_16); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 706:22]
  wire  _atomicWords_useMerge_T_6 = scOk | (s3_cas | refillMutate & _s3_cas_T_4) & _atomicBanks_T_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 708:13]
  wire  atomicWords_useMerge = atomicWords_touched & ~atomicWords_useAlu & _atomicWords_useMerge_T_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 707:39]
  wire [63:0] _atomicWords_T = atomicWords_is0 ? atomicLow : atomicHigh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 710:24]
  wire [63:0] _atomicWords_T_1 = atomicWords_useMerge ? _atomicWords_T : atomicWords_base; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 710:10]
  wire [63:0] atomicWords_0 = atomicWords_useAlu ? amoalu_io_out : _atomicWords_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 709:8]
  wire  atomicWords_is0_1 = 3'h1 == s3_hold_wordIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 702:19]
  wire  atomicWords_is1_1 = 3'h1 == bank1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 703:19]
  wire  atomicWords_touched_1 = atomicWords_is0_1 | atomicWords_is1_1 & twoBanks3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 704:23]
  wire [63:0] atomicWords_base_1 = s3_refill_req ? refillWords_1 : s3_word_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 705:19]
  wire  atomicWords_useAlu_1 = atomicWords_is0_1 & (s3_alu | refillMutate & _s3_alu_T_16); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 706:22]
  wire  atomicWords_useMerge_1 = atomicWords_touched_1 & ~atomicWords_useAlu_1 & _atomicWords_useMerge_T_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 707:39]
  wire [63:0] _atomicWords_T_3 = atomicWords_is0_1 ? atomicLow : atomicHigh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 710:24]
  wire [63:0] _atomicWords_T_4 = atomicWords_useMerge_1 ? _atomicWords_T_3 : atomicWords_base_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 710:10]
  wire [63:0] atomicWords_1 = atomicWords_useAlu_1 ? amoalu_io_out : _atomicWords_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 709:8]
  wire  atomicWords_is0_2 = 3'h2 == s3_hold_wordIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 702:19]
  wire  atomicWords_is1_2 = 3'h2 == bank1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 703:19]
  wire  atomicWords_touched_2 = atomicWords_is0_2 | atomicWords_is1_2 & twoBanks3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 704:23]
  wire [63:0] atomicWords_base_2 = s3_refill_req ? refillWords_2 : s3_word_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 705:19]
  wire  atomicWords_useAlu_2 = atomicWords_is0_2 & (s3_alu | refillMutate & _s3_alu_T_16); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 706:22]
  wire  atomicWords_useMerge_2 = atomicWords_touched_2 & ~atomicWords_useAlu_2 & _atomicWords_useMerge_T_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 707:39]
  wire [63:0] _atomicWords_T_6 = atomicWords_is0_2 ? atomicLow : atomicHigh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 710:24]
  wire [63:0] _atomicWords_T_7 = atomicWords_useMerge_2 ? _atomicWords_T_6 : atomicWords_base_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 710:10]
  wire [63:0] atomicWords_2 = atomicWords_useAlu_2 ? amoalu_io_out : _atomicWords_T_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 709:8]
  wire  atomicWords_is0_3 = 3'h3 == s3_hold_wordIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 702:19]
  wire  atomicWords_is1_3 = 3'h3 == bank1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 703:19]
  wire  atomicWords_touched_3 = atomicWords_is0_3 | atomicWords_is1_3 & twoBanks3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 704:23]
  wire [63:0] atomicWords_base_3 = s3_refill_req ? refillWords_3 : s3_word_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 705:19]
  wire  atomicWords_useAlu_3 = atomicWords_is0_3 & (s3_alu | refillMutate & _s3_alu_T_16); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 706:22]
  wire  atomicWords_useMerge_3 = atomicWords_touched_3 & ~atomicWords_useAlu_3 & _atomicWords_useMerge_T_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 707:39]
  wire [63:0] _atomicWords_T_9 = atomicWords_is0_3 ? atomicLow : atomicHigh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 710:24]
  wire [63:0] _atomicWords_T_10 = atomicWords_useMerge_3 ? _atomicWords_T_9 : atomicWords_base_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 710:10]
  wire [63:0] atomicWords_3 = atomicWords_useAlu_3 ? amoalu_io_out : _atomicWords_T_10; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 709:8]
  wire  atomicWords_is0_4 = 3'h4 == s3_hold_wordIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 702:19]
  wire  atomicWords_is1_4 = 3'h4 == bank1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 703:19]
  wire  atomicWords_touched_4 = atomicWords_is0_4 | atomicWords_is1_4 & twoBanks3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 704:23]
  wire [63:0] atomicWords_base_4 = s3_refill_req ? refillWords_4 : s3_word_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 705:19]
  wire  atomicWords_useAlu_4 = atomicWords_is0_4 & (s3_alu | refillMutate & _s3_alu_T_16); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 706:22]
  wire  atomicWords_useMerge_4 = atomicWords_touched_4 & ~atomicWords_useAlu_4 & _atomicWords_useMerge_T_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 707:39]
  wire [63:0] _atomicWords_T_12 = atomicWords_is0_4 ? atomicLow : atomicHigh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 710:24]
  wire [63:0] _atomicWords_T_13 = atomicWords_useMerge_4 ? _atomicWords_T_12 : atomicWords_base_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 710:10]
  wire [63:0] atomicWords_4 = atomicWords_useAlu_4 ? amoalu_io_out : _atomicWords_T_13; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 709:8]
  wire  atomicWords_is0_5 = 3'h5 == s3_hold_wordIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 702:19]
  wire  atomicWords_is1_5 = 3'h5 == bank1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 703:19]
  wire  atomicWords_touched_5 = atomicWords_is0_5 | atomicWords_is1_5 & twoBanks3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 704:23]
  wire [63:0] atomicWords_base_5 = s3_refill_req ? refillWords_5 : s3_word_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 705:19]
  wire  atomicWords_useAlu_5 = atomicWords_is0_5 & (s3_alu | refillMutate & _s3_alu_T_16); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 706:22]
  wire  atomicWords_useMerge_5 = atomicWords_touched_5 & ~atomicWords_useAlu_5 & _atomicWords_useMerge_T_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 707:39]
  wire [63:0] _atomicWords_T_15 = atomicWords_is0_5 ? atomicLow : atomicHigh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 710:24]
  wire [63:0] _atomicWords_T_16 = atomicWords_useMerge_5 ? _atomicWords_T_15 : atomicWords_base_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 710:10]
  wire [63:0] atomicWords_5 = atomicWords_useAlu_5 ? amoalu_io_out : _atomicWords_T_16; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 709:8]
  wire  atomicWords_is0_6 = 3'h6 == s3_hold_wordIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 702:19]
  wire  atomicWords_is1_6 = 3'h6 == bank1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 703:19]
  wire  atomicWords_touched_6 = atomicWords_is0_6 | atomicWords_is1_6 & twoBanks3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 704:23]
  wire [63:0] atomicWords_base_6 = s3_refill_req ? refillWords_6 : s3_word_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 705:19]
  wire  atomicWords_useAlu_6 = atomicWords_is0_6 & (s3_alu | refillMutate & _s3_alu_T_16); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 706:22]
  wire  atomicWords_useMerge_6 = atomicWords_touched_6 & ~atomicWords_useAlu_6 & _atomicWords_useMerge_T_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 707:39]
  wire [63:0] _atomicWords_T_18 = atomicWords_is0_6 ? atomicLow : atomicHigh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 710:24]
  wire [63:0] _atomicWords_T_19 = atomicWords_useMerge_6 ? _atomicWords_T_18 : atomicWords_base_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 710:10]
  wire [63:0] atomicWords_6 = atomicWords_useAlu_6 ? amoalu_io_out : _atomicWords_T_19; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 709:8]
  wire  atomicWords_is0_7 = 3'h7 == s3_hold_wordIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 702:19]
  wire  atomicWords_is1_7 = 3'h7 == bank1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 703:19]
  wire  atomicWords_touched_7 = atomicWords_is0_7 | atomicWords_is1_7 & twoBanks3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 704:23]
  wire [63:0] atomicWords_base_7 = s3_refill_req ? refillWords_7 : s3_word_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 705:19]
  wire  atomicWords_useAlu_7 = atomicWords_is0_7 & (s3_alu | refillMutate & _s3_alu_T_16); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 706:22]
  wire  atomicWords_useMerge_7 = atomicWords_touched_7 & ~atomicWords_useAlu_7 & _atomicWords_useMerge_T_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 707:39]
  wire [63:0] _atomicWords_T_21 = atomicWords_is0_7 ? atomicLow : atomicHigh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 710:24]
  wire [63:0] _atomicWords_T_22 = atomicWords_useMerge_7 ? _atomicWords_T_21 : atomicWords_base_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 710:10]
  wire [63:0] atomicWords_7 = atomicWords_useAlu_7 ? amoalu_io_out : _atomicWords_T_22; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 709:8]
  wire  keepShared = sharedDirty & doInstall; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 725:32]
  wire [63:0] _writeWords_T__0 = refillMutate ? atomicWords_0 : refillWords_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 738:42]
  wire [63:0] _writeWords_T__1 = refillMutate ? atomicWords_1 : refillWords_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 738:42]
  wire [63:0] _writeWords_T__2 = refillMutate ? atomicWords_2 : refillWords_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 738:42]
  wire [63:0] _writeWords_T__3 = refillMutate ? atomicWords_3 : refillWords_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 738:42]
  wire [63:0] _writeWords_T__4 = refillMutate ? atomicWords_4 : refillWords_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 738:42]
  wire [63:0] _writeWords_T__5 = refillMutate ? atomicWords_5 : refillWords_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 738:42]
  wire [63:0] _writeWords_T__6 = refillMutate ? atomicWords_6 : refillWords_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 738:42]
  wire [63:0] _writeWords_T__7 = refillMutate ? atomicWords_7 : refillWords_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 738:42]
  wire [63:0] _writeWords_T_1_0 = s3_store ? storeWords_0 : atomicWords_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 739:8]
  wire [63:0] _writeWords_T_1_1 = s3_store ? storeWords_1 : atomicWords_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 739:8]
  wire [63:0] _writeWords_T_1_2 = s3_store ? storeWords_2 : atomicWords_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 739:8]
  wire [63:0] _writeWords_T_1_3 = s3_store ? storeWords_3 : atomicWords_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 739:8]
  wire [63:0] _writeWords_T_1_4 = s3_store ? storeWords_4 : atomicWords_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 739:8]
  wire [63:0] _writeWords_T_1_5 = s3_store ? storeWords_5 : atomicWords_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 739:8]
  wire [63:0] _writeWords_T_1_6 = s3_store ? storeWords_6 : atomicWords_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 739:8]
  wire [63:0] _writeWords_T_1_7 = s3_store ? storeWords_7 : atomicWords_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 739:8]
  wire [7:0] _writeBanks_T = doInstall ? 8'hff : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 740:43]
  wire [7:0] _writeBanks_T_1 = s3_store ? storeBanks : atomicBanks; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 741:8]
  wire [1:0] _newCoh_T = s3_refill_req ? installCoh : 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 743:8]
  wire  wbClear = _s3_done_T_17 & _s3_done_T_21; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 749:48]
  wire [41:0] io_dataWrite_bits_addr_hi = {s3_hold_addr[47:14],s3_hold_set}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 237:8]
  wire  sendSecond = sent_3 & doWb2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 769:28]
  wire  wbIsVictim = victimWb & ~sendSecond; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 770:29]
  wire [2:0] probeOpcode = probeNeedWb ? 3'h4 : 3'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 772:24]
  wire [2:0] victimOpcode = s3_replace_dirty ? 3'h2 : 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 773:25]
  wire [2:0] lineOpcode = keepShared ? 3'h5 : 3'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 774:23]
  wire [2:0] _wbOpcode_T = wbIsVictim ? victimOpcode : lineOpcode; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 775:49]
  wire [2:0] wbOpcode = s3_probe ? probeOpcode : _wbOpcode_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 775:21]
  wire  _wbPassDirty_T_2 = wbIsVictim ? s3_replace_dirty : 1'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 777:8]
  wire  wbPassDirty = s3_probe ? probeNeedWb & _probeNew_T : _wbPassDirty_T_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 776:24]
  wire [2:0] _wbResp_T_4 = probeNew == 2'h2 | probeNew == 2'h3 ? 3'h2 : 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 270:10]
  wire [2:0] _wbResp_T_5 = probeNew == 2'h1 ? 3'h1 : _wbResp_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 269:8]
  wire [2:0] _wbResp_T_6 = s3_hit ? _wbResp_T_5 : 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 778:34]
  wire [2:0] _wbResp_T_7 = keepShared ? 3'h5 : 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 779:37]
  wire [2:0] _wbResp_T_8 = wbIsVictim ? 3'h0 : _wbResp_T_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 779:8]
  wire [511:0] _io_wbReq_bits_data_T = {s3_word_7,s3_word_6,s3_word_5,s3_word_4,s3_word_3,s3_word_2,s3_word_1,s3_word_0}
    ; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 265:8]
  wire [511:0] _io_wbReq_bits_data_T_1 = probeNeedWb ? _io_wbReq_bits_data_T : 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 781:43]
  wire [511:0] _io_wbReq_bits_data_T_3 = s3_replace_dirty ? _io_wbReq_bits_data_T : 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 782:24]
  wire [511:0] _io_wbReq_bits_data_T_4 = refillWb ? refillLine : 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 783:10]
  wire [511:0] _io_wbReq_bits_data_T_5 = wbIsVictim ? _io_wbReq_bits_data_T_3 : _io_wbReq_bits_data_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 782:8]
  wire [63:0] _io_atomicResp_bits_data_T = twoBanks3 ? old1 : 64'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 809:37]
  wire  _io_atomicResp_bits_success_T_2 = _s3_cas_T_4 ? _atomicBanks_T_2 : 1'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 810:69]
  wire [1:0] _io_mainpipeInfo_finalCoh_T_1 = doInstall ? installCoh : refillCoh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 833:8]
  wire  snpDrop = s3_hold_probeOp == 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 840:33]
  wire  _io_snoopNotice_valid_T = s3_done & s3_probe; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 841:35]
  wire  _probeClears_T_2 = lrsc_count != 6'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 849:68]
  wire  probeClears = _io_snoopNotice_valid_T & lineMatch & lrsc_count != 6'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 849:54]
  wire  scClears = s3_done & s3_sc; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 850:26]
  wire  lrSets = s3_done & cmdIsLr & (s3_lr | refillOp); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 851:35]
  wire  clearing = scClears | probeClears; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 852:27]
  wire [5:0] _lrsc_count_T_1 = lrsc_count - 6'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 860:30]
  wire  _GEN_318 = s1_fire ? 1'h0 : s1_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 876:24 279:25 876:35]
  wire  _GEN_319 = s0_fire | _GEN_318; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 875:{17,28}]
  wire  _GEN_320 = s2_done ? 1'h0 : s2_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 878:24 280:25 878:35]
  wire  _GEN_321 = s1_fire | _GEN_320; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 877:{17,28}]
  wire  _GEN_322 = s3_done ? 1'h0 : s3_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 880:24 281:25 880:35]
  wire  _GEN_323 = s2_fire | _GEN_322; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 879:{17,28}]
  wire [1:0] _T_31 = _s0_fire_T + _s0_fire_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 882:18]
  wire [1:0] _T_33 = _s0_fire_T_3 + _s0_fire_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 882:18]
  wire [2:0] _T_35 = _T_31 + _T_33; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 882:18]
  wire  _T_39 = ~reset; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 882:9]
  wire [1:0] _T_48 = hitOh[0] + hitOh[1]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 884:44]
  wire [1:0] _T_50 = hitOh[2] + hitOh[3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 884:44]
  wire [2:0] _T_52 = _T_48 + _T_50; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 884:44]
  wire [1:0] _T_90 = io_tagWrite_bits_way_en[0] + io_tagWrite_bits_way_en[1]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 892:40]
  wire [1:0] _T_92 = io_tagWrite_bits_way_en[2] + io_tagWrite_bits_way_en[3]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 892:40]
  wire [2:0] _T_94 = _T_90 + _T_92; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 892:40]
  wire  _T_141 = ~io_wbReq_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 905:10]
  wire  _T_188 = io_storeHit_bits_id == io_storeReplay_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 918:25]
  DCachePLRU plru ( // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 206:20]
    .clock(plru_clock),
    .reset(plru_reset),
    .io_access_0_valid(plru_io_access_0_valid),
    .io_access_0_bits_set(plru_io_access_0_bits_set),
    .io_access_0_bits_way(plru_io_access_0_bits_way),
    .io_access_1_valid(plru_io_access_1_valid),
    .io_access_1_bits_set(plru_io_access_1_bits_set),
    .io_access_1_bits_way(plru_io_access_1_bits_way),
    .io_access_2_valid(plru_io_access_2_valid),
    .io_access_2_bits_set(plru_io_access_2_bits_set),
    .io_access_2_bits_way(plru_io_access_2_bits_way),
    .io_querySet(plru_io_querySet),
    .io_victim(plru_io_victim)
  );
  AMOALU amoalu ( // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 644:22]
    .io_mask(amoalu_io_mask),
    .io_cmd(amoalu_io_cmd),
    .io_lhs(amoalu_io_lhs),
    .io_rhs(amoalu_io_rhs),
    .io_out(amoalu_io_out)
  );
  assign io_probe_ready = ~_probeCan_T_7 & portFree; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 304:40]
  assign io_refill_ready = refillCan & ~(io_probe_valid & probeCan); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 311:32]
  assign io_store_ready = storeCan & _io_refill_ready_T_1 & ~(io_refill_valid & refillCan); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 312:63]
  assign io_atomic_ready = _io_atomic_ready_T_5 & ~(io_store_valid & storeCan); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 314:37]
  assign io_tagRead_valid = _s0_fire_T | _s0_fire_T_1 | _s0_fire_T_3 | _s0_fire_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 316:66]
  assign io_tagRead_bits_idx = _s0_fire_T ? probeSet : _s0_set_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 317:19]
  assign io_metaRead_valid = _s0_fire_T | _s0_fire_T_1 | _s0_fire_T_3 | _s0_fire_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 316:66]
  assign io_metaRead_bits_idx = _s0_fire_T ? probeSet : _s0_set_T_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 317:19]
  assign io_dataRead_valid = s1_valid & s1_need_data & s2_ready; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 473:49]
  assign io_dataRead_bits_addr = {io_dataRead_bits_addr_hi,s1_hold_addr[5:0]}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 237:8]
  assign io_dataRead_bits_bankMask = victimNeedData | isProbe1 ? 8'hff : _s1_bank_mask_T_35; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 470:25]
  assign io_tagWrite_valid = s3_valid & doInstall & ~sent_0 & wbClear; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 750:74]
  assign io_tagWrite_bits_idx = s3_hold_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 752:24]
  assign io_tagWrite_bits_way_en = 4'h1 << s3_way; // @[src/main/scala/chisel3/util/OneHot.scala 58:35]
  assign io_tagWrite_bits_tag = s3_hold_addr[47:12]; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 205:9]
  assign io_metaWrite_valid = s3_valid & doMeta & ~sent_1 & wbClear; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 750:74]
  assign io_metaWrite_bits_idx = s3_hold_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 759:25]
  assign io_metaWrite_bits_way_en = 4'h1 << s3_way; // @[src/main/scala/chisel3/util/OneHot.scala 58:35]
  assign io_metaWrite_bits_meta_coh = s3_probe ? probeNew : _newCoh_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 742:19]
  assign io_dataWrite_valid = s3_valid & doData & ~sent_2 & wbClear; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 750:74]
  assign io_dataWrite_bits_addr = {io_dataWrite_bits_addr_hi,s3_hold_addr[5:0]}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 237:8]
  assign io_dataWrite_bits_wayEn = 4'h1 << s3_way; // @[src/main/scala/chisel3/util/OneHot.scala 58:35]
  assign io_dataWrite_bits_bankMask = s3_refill_req ? _writeBanks_T : _writeBanks_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 740:23]
  assign io_dataWrite_bits_data_0 = s3_refill_req ? _writeWords_T__0 : _writeWords_T_1_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 738:23]
  assign io_dataWrite_bits_data_1 = s3_refill_req ? _writeWords_T__1 : _writeWords_T_1_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 738:23]
  assign io_dataWrite_bits_data_2 = s3_refill_req ? _writeWords_T__2 : _writeWords_T_1_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 738:23]
  assign io_dataWrite_bits_data_3 = s3_refill_req ? _writeWords_T__3 : _writeWords_T_1_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 738:23]
  assign io_dataWrite_bits_data_4 = s3_refill_req ? _writeWords_T__4 : _writeWords_T_1_4; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 738:23]
  assign io_dataWrite_bits_data_5 = s3_refill_req ? _writeWords_T__5 : _writeWords_T_1_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 738:23]
  assign io_dataWrite_bits_data_6 = s3_refill_req ? _writeWords_T__6 : _writeWords_T_1_6; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 738:23]
  assign io_dataWrite_bits_data_7 = s3_refill_req ? _writeWords_T__7 : _writeWords_T_1_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 738:23]
  assign io_missReq_valid = s2_need_miss & ~upgradeFail & ~wbBlocked; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 521:47]
  assign io_missReq_bits_source = {{2'd0}, _io_missReq_bits_source_T}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 524:26]
  assign io_missReq_bits_cmd = s2_hold_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 525:23]
  assign io_missReq_bits_addr = {s2_hold_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 209:8]
  assign io_missReq_bits_vaddr = s2_hold_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 527:25]
  assign io_missReq_bits_full_overwrite = &s2_hold_storeMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 530:55]
  assign io_missReq_bits_word_idx = s2_hold_wordIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 531:28]
  assign io_missReq_bits_amo_data = s2_hold_amoData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 532:28]
  assign io_missReq_bits_amo_mask = s2_hold_amoMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 533:28]
  assign io_missReq_bits_amo_cmp = s2_hold_amoCmp; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 534:27]
  assign io_missReq_bits_id = s2_hold_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 536:22]
  assign io_missReq_bits_scToUnique = s2_store & s2_hit & s2_coh == 2'h1 | _s2_upgrade_T_7; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 394:72]
  assign io_missReq_bits_occupy_way = s2_upgrade ? _io_missReq_bits_occupy_way_T : 4'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 538:36]
  assign io_missReq_bits_store_data = s2_hold_storeData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 540:30]
  assign io_missReq_bits_store_mask = s2_hold_storeMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 541:30]
  assign io_mainpipeInfo_s2Refill = s2_valid & s2_hold_src == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 512:28]
  assign io_mainpipeInfo_s2MissId = s2_hold_missId; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 576:28]
  assign io_mainpipeInfo_s3Done = s3_done & s3_refill_req; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 829:37]
  assign io_mainpipeInfo_s3MissId = s3_hold_missId; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 830:28]
  assign io_mainpipeInfo_installed = s3_done & doInstall; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 831:40]
  assign io_mainpipeInfo_finalCoh = _doS3Replay_T ? 2'h0 : _io_mainpipeInfo_finalCoh_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 832:34]
  assign io_pendingSnoop_valid = s3_valid & s3_hold_src == 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 625:32]
  assign io_pendingSnoop_bits = s3_hold_missId; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 659:24]
  assign io_occupySet_valid = s2_upgrade | _occupyMask_T_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 430:36]
  assign io_occupySet_bits = s2_upgrade ? s2_hold_set : s1_hold_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 431:27]
  assign io_replaceQuery_valid = s1_valid & replacing; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 446:37]
  assign io_replaceQuery_bits = {victimPaddr_hi,6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 215:13]
  assign io_wbQuery_valid = s2_store & ~s2_write_hit | s2_atomic & ~s2_sc & ~s2_write_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 515:50]
  assign io_wbQuery_bits = {s2_hold_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 209:8]
  assign io_wbReq_valid = s3_valid & (doWb1 & _wb1Fire_T_1 | doWb2 & sent_3 & ~sent_7); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 748:30]
  assign io_wbReq_bits_data = s3_probe ? _io_wbReq_bits_data_T_1 : _io_wbReq_bits_data_T_5; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 781:28]
  assign io_wbReq_bits_addr = wbIsVictim ? s3_replace_addr : _lineMatch_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 780:28]
  assign io_wbReq_bits_opcode = s3_probe ? probeOpcode : _wbOpcode_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 775:21]
  assign io_wbReq_bits_resp = s3_probe ? _wbResp_T_6 : _wbResp_T_8; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 778:19]
  assign io_wbReq_bits_passDirty = s3_probe ? probeNeedWb & _probeNew_T : _wbPassDirty_T_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 776:24]
  assign io_wbReq_bits_snpTxnId = s3_probe ? s3_hold_snpTxnId : 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 788:32]
  assign io_probeResp_valid = s3_valid & s3_probe & ~sent_4 & writesDone; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 799:61]
  assign io_probeResp_bits_id = s3_hold_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 800:24]
  assign io_atomicResp_valid = s3_valid & doAtomicResp & ~sent_5 & writesDone; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 806:63]
  assign io_atomicResp_bits_id = s3_hold_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 807:25]
  assign io_atomicResp_bits_cmd = s3_hold_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 808:26]
  assign io_atomicResp_bits_data = {_io_atomicResp_bits_data_T,old0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 809:33]
  assign io_atomicResp_bits_success = _s3_sc_T ? scOk : _io_atomicResp_bits_success_T_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 810:36]
  assign io_atomicReplay_valid = s2Replay | s3Replay; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 559:37]
  assign io_atomicReplay_bits_id = s3Replay ? s3_hold_id : s2_hold_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 562:33]
  assign io_storeHit_valid = s3_valid & s3_store & ~sent_6 & writesDone; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 812:57]
  assign io_storeHit_bits_id = s3_hold_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 815:23]
  assign io_storeReplay_valid = _storeLeave_T & ~missAccepted; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 545:50]
  assign io_storeReplay_bits_id = s2_hold_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 554:26]
  assign io_lrsc_blocked_block_valid = _scOk_T_2 & ~clearing; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 863:51]
  assign io_lrsc_blocked_block_bits = lrsc_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 864:30]
  assign io_update_resv_set = s3_done & cmdIsLr & (s3_lr | refillOp); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 851:35]
  assign io_snoopNotice_valid = s3_done & s3_probe & snpDrop; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 841:47]
  assign io_snoopNotice_bits_addr = {s3_hold_addr[47:6],6'h0}; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 209:8]
  assign io_snoopNotice_bits_alias = s3_hold_vaddr[13:12]; // @[home/ywj/yqh/src/main/scala/YQH/cache/DCacheParams.scala 197:12]
  assign io_busy = s1_valid | s2_valid | s3_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 847:35]
  assign plru_clock = clock;
  assign plru_reset = reset;
  assign plru_io_access_0_valid = io_replaceAccess_0_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 868:21]
  assign plru_io_access_0_bits_set = io_replaceAccess_0_bits_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 868:21]
  assign plru_io_access_0_bits_way = io_replaceAccess_0_bits_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 868:21]
  assign plru_io_access_1_valid = io_replaceAccess_1_valid; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 869:21]
  assign plru_io_access_1_bits_set = io_replaceAccess_1_bits_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 869:21]
  assign plru_io_access_1_bits_way = io_replaceAccess_1_bits_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 869:21]
  assign plru_io_access_2_valid = s3_done & doData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 870:27]
  assign plru_io_access_2_bits_set = s3_hold_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 872:30]
  assign plru_io_access_2_bits_way = s3_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 873:30]
  assign plru_io_querySet = s1_hold_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 426:20]
  assign amoalu_io_mask = s3_hold_amoMask[7:0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 648:36]
  assign amoalu_io_cmd = s3_hold_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 645:17]
  assign amoalu_io_lhs = s3_refill_req ? _GEN_288 : _GEN_296; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 666:14]
  assign amoalu_io_rhs = s3_hold_amoData[63:0]; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 647:35]
  always @(posedge clock) begin
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 279:25]
      s1_valid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 279:25]
    end else begin
      s1_valid <= _GEN_319;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 280:25]
      s2_valid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 280:25]
    end else begin
      s2_valid <= _GEN_321;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 281:25]
      s3_valid <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 281:25]
    end else begin
      s3_valid <= _GEN_323;
    end
    if (_s0_fire_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 348:23]
      s1_hold_src <= 2'h2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 328:14]
    end else if (_s0_fire_T_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 350:30]
      s1_hold_src <= 2'h3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 328:14]
    end else if (_s0_fire_T_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 352:29]
      s1_hold_src <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 353:17]
    end else if (_s0_fire_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 371:30]
      s1_hold_src <= 2'h1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 328:14]
    end
    if (_s0_fire_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 348:23]
      s1_hold_cmd <= 5'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 329:14]
    end else if (_s0_fire_T_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 350:30]
      s1_hold_cmd <= io_refill_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 329:14]
    end else if (_s0_fire_T_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 352:29]
      s1_hold_cmd <= io_store_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 354:17]
    end else if (_s0_fire_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 371:30]
      s1_hold_cmd <= io_atomic_bits_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 329:14]
    end
    if (_s0_fire_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 348:23]
      s1_hold_vaddr <= io_probe_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 330:16]
    end else if (_s0_fire_T_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 350:30]
      s1_hold_vaddr <= io_refill_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 330:16]
    end else if (_s0_fire_T_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 352:29]
      s1_hold_vaddr <= io_store_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 355:19]
    end else if (_s0_fire_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 371:30]
      s1_hold_vaddr <= io_atomic_bits_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 330:16]
    end
    if (_s0_fire_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 348:23]
      s1_hold_addr <= io_probe_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 331:15]
    end else if (_s0_fire_T_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 350:30]
      s1_hold_addr <= io_refill_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 331:15]
    end else if (_s0_fire_T_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 352:29]
      s1_hold_addr <= io_store_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 356:18]
    end else if (_s0_fire_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 371:30]
      s1_hold_addr <= io_atomic_bits_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 331:15]
    end
    if (_s0_fire_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 348:23]
      s1_hold_set <= probeSet; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 332:14]
    end else if (_s0_fire_T_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 350:30]
      s1_hold_set <= refillSet; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 332:14]
    end else if (_s0_fire_T_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 352:29]
      s1_hold_set <= storeSet; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 357:17]
    end else if (_s0_fire_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 371:30]
      s1_hold_set <= atomicSet; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 332:14]
    end
    if (_s0_fire_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 348:23]
      s1_hold_id <= io_probe_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 333:13]
    end else if (_s0_fire_T_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 350:30]
      s1_hold_id <= io_refill_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 333:13]
    end else if (_s0_fire_T_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 352:29]
      s1_hold_id <= io_store_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 358:16]
    end else if (_s0_fire_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 371:30]
      s1_hold_id <= io_atomic_bits_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 333:13]
    end
    if (_s0_fire_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 348:23]
      s1_hold_missId <= 4'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 334:17]
    end else if (_s0_fire_T_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 350:30]
      s1_hold_missId <= io_refill_bits_missId; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 334:17]
    end else if (_s0_fire_T_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 352:29]
      s1_hold_missId <= 4'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 359:20]
    end else if (_s0_fire_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 371:30]
      s1_hold_missId <= io_atomic_bits_missId; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 334:17]
    end
    if (_s0_fire_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 348:23]
      s1_hold_storeData <= 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 336:20]
    end else if (_s0_fire_T_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 350:30]
      s1_hold_storeData <= 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 336:20]
    end else if (_s0_fire_T_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 352:29]
      s1_hold_storeData <= io_store_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 361:23]
    end else if (_s0_fire_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 371:30]
      s1_hold_storeData <= 512'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 336:20]
    end
    if (_s0_fire_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 348:23]
      s1_hold_storeMask <= 64'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 337:20]
    end else if (_s0_fire_T_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 350:30]
      s1_hold_storeMask <= 64'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 337:20]
    end else if (_s0_fire_T_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 352:29]
      s1_hold_storeMask <= io_store_bits_mask; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 362:23]
    end else if (_s0_fire_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 371:30]
      s1_hold_storeMask <= 64'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 337:20]
    end
    if (_s0_fire_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 348:23]
      s1_hold_wordIdx <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 338:18]
    end else if (_s0_fire_T_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 350:30]
      s1_hold_wordIdx <= io_refill_bits_wordIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 338:18]
    end else if (_s0_fire_T_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 352:29]
      s1_hold_wordIdx <= 3'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 363:21]
    end else if (_s0_fire_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 371:30]
      s1_hold_wordIdx <= io_atomic_bits_wordIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 338:18]
    end
    if (_s0_fire_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 348:23]
      s1_hold_amoData <= 128'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 339:18]
    end else if (_s0_fire_T_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 350:30]
      s1_hold_amoData <= io_refill_bits_amoData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 339:18]
    end else if (_s0_fire_T_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 352:29]
      s1_hold_amoData <= 128'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 364:21]
    end else if (_s0_fire_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 371:30]
      s1_hold_amoData <= io_atomic_bits_amoData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 339:18]
    end
    if (_s0_fire_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 348:23]
      s1_hold_amoMask <= 16'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 340:18]
    end else if (_s0_fire_T_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 350:30]
      s1_hold_amoMask <= io_refill_bits_amoMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 340:18]
    end else if (_s0_fire_T_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 352:29]
      s1_hold_amoMask <= 16'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 365:21]
    end else if (_s0_fire_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 371:30]
      s1_hold_amoMask <= io_atomic_bits_amoMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 340:18]
    end
    if (_s0_fire_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 348:23]
      s1_hold_amoCmp <= 128'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 341:17]
    end else if (_s0_fire_T_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 350:30]
      s1_hold_amoCmp <= io_refill_bits_amoCmp; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 341:17]
    end else if (_s0_fire_T_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 352:29]
      s1_hold_amoCmp <= 128'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 366:20]
    end else if (_s0_fire_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 371:30]
      s1_hold_amoCmp <= io_atomic_bits_amoCmp; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 341:17]
    end
    if (_s0_fire_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 348:23]
      s1_hold_probeOp <= io_probe_bits_probeOp; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 342:18]
    end else if (_s0_fire_T_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 350:30]
      s1_hold_probeOp <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 342:18]
    end else if (_s0_fire_T_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 352:29]
      s1_hold_probeOp <= 2'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 367:21]
    end else if (_s0_fire_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 371:30]
      s1_hold_probeOp <= io_atomic_bits_probeOp; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 342:18]
    end
    if (_s0_fire_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 348:23]
      s1_hold_needData <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 343:19]
    end else if (_s0_fire_T_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 350:30]
      s1_hold_needData <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 343:19]
    end else if (_s0_fire_T_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 352:29]
      s1_hold_needData <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 368:22]
    end else if (_s0_fire_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 371:30]
      s1_hold_needData <= io_atomic_bits_needData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 343:19]
    end
    if (_s0_fire_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 348:23]
      s1_hold_snpTxnId <= io_probe_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 344:19]
    end else if (_s0_fire_T_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 350:30]
      s1_hold_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 344:19]
    end else if (_s0_fire_T_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 352:29]
      s1_hold_snpTxnId <= 8'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 369:22]
    end else if (_s0_fire_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 371:30]
      s1_hold_snpTxnId <= io_atomic_bits_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 344:19]
    end
    if (_s0_fire_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 348:23]
      s1_hold_replaceWay <= 4'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 345:21]
    end else if (_s0_fire_T_1) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 350:30]
      s1_hold_replaceWay <= io_refill_bits_replaceWay; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 345:21]
    end else if (_s0_fire_T_3) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 352:29]
      s1_hold_replaceWay <= 4'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 370:24]
    end else if (_s0_fire_T_5) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 371:30]
      s1_hold_replaceWay <= io_atomic_bits_replaceWay; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 345:21]
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      s2_hold_src <= s1_hold_src; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 491:13]
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      s2_hold_cmd <= s1_hold_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 491:13]
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      s2_hold_vaddr <= s1_hold_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 491:13]
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      s2_hold_addr <= s1_hold_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 491:13]
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      s2_hold_set <= s1_hold_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 491:13]
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      s2_hold_id <= s1_hold_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 491:13]
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      s2_hold_missId <= s1_hold_missId; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 491:13]
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      s2_hold_storeData <= s1_hold_storeData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 491:13]
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      s2_hold_storeMask <= s1_hold_storeMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 491:13]
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      s2_hold_wordIdx <= s1_hold_wordIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 491:13]
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      s2_hold_amoData <= s1_hold_amoData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 491:13]
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      s2_hold_amoMask <= s1_hold_amoMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 491:13]
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      s2_hold_amoCmp <= s1_hold_amoCmp; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 491:13]
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      s2_hold_probeOp <= s1_hold_probeOp; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 491:13]
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      s2_hold_needData <= s1_hold_needData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 491:13]
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      s2_hold_snpTxnId <= s1_hold_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 491:13]
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      s3_hold_src <= s2_hold_src; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 593:13]
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      s3_hold_cmd <= s2_hold_cmd; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 593:13]
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      s3_hold_vaddr <= s2_hold_vaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 593:13]
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      s3_hold_addr <= s2_hold_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 593:13]
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      s3_hold_set <= s2_hold_set; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 593:13]
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      s3_hold_id <= s2_hold_id; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 593:13]
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      s3_hold_missId <= s2_hold_missId; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 593:13]
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      s3_hold_storeData <= s2_hold_storeData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 593:13]
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      s3_hold_storeMask <= s2_hold_storeMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 593:13]
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      s3_hold_wordIdx <= s2_hold_wordIdx; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 593:13]
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      s3_hold_amoData <= s2_hold_amoData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 593:13]
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      s3_hold_amoMask <= s2_hold_amoMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 593:13]
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      s3_hold_amoCmp <= s2_hold_amoCmp; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 593:13]
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      s3_hold_probeOp <= s2_hold_probeOp; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 593:13]
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      s3_hold_needData <= s2_hold_needData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 593:13]
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      s3_hold_snpTxnId <= s2_hold_snpTxnId; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 593:13]
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      s2_hit <= s1_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 492:12]
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (s1_hit) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 494:18]
        s2_coh <= hitMeta_coh;
      end else begin
        s2_coh <= 2'h0;
      end
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      s2_need_data <= s1_need_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 495:18]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 487:23]
      s2_got <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 487:23]
    end else if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      s2_got <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 502:12]
    end else begin
      s2_got <= _GEN_122;
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      s3_can_install <= s2_can_install; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 597:20]
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      if (_s2_refill_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 606:46]
        s3_refill_storeMask <= io_refillInfo_bits_storeMask; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 607:17]
      end
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      if (_s2_refill_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 606:46]
        s3_refill_retUnique <= io_refillInfo_bits_retUnique; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 607:17]
      end
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      if (_s2_refill_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 606:46]
        s3_refill_error <= io_refillInfo_bits_error; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 607:17]
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
      sent_0 <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
    end else if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      sent_0 <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 609:20]
    end else begin
      sent_0 <= _GEN_222;
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      s3_hit <= s2_hit; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 594:12]
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      s3_coh <= s2_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 596:12]
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      if (_s2_refill_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 606:46]
        s3_refill_storeData <= io_refillInfo_bits_storeData; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 607:17]
      end
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      if (_s2_refill_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 606:46]
        s3_refill_data <= io_refillInfo_bits_data; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 607:17]
      end
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      if (2'h3 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        if (io_dataResp_valid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
          s3_word_7 <= io_dataResp_bits_data_7_3;
        end else begin
          s3_word_7 <= s2_line_7_3;
        end
      end else if (2'h2 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        if (io_dataResp_valid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
          s3_word_7 <= io_dataResp_bits_data_7_2;
        end else begin
          s3_word_7 <= s2_line_7_2;
        end
      end else if (2'h1 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        s3_word_7 <= dataNow_7_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
      end else begin
        s3_word_7 <= dataNow_7_0;
      end
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      if (2'h3 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        if (io_dataResp_valid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
          s3_word_6 <= io_dataResp_bits_data_6_3;
        end else begin
          s3_word_6 <= s2_line_6_3;
        end
      end else if (2'h2 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        if (io_dataResp_valid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
          s3_word_6 <= io_dataResp_bits_data_6_2;
        end else begin
          s3_word_6 <= s2_line_6_2;
        end
      end else if (2'h1 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        s3_word_6 <= dataNow_6_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
      end else begin
        s3_word_6 <= dataNow_6_0;
      end
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      if (2'h3 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        if (io_dataResp_valid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
          s3_word_5 <= io_dataResp_bits_data_5_3;
        end else begin
          s3_word_5 <= s2_line_5_3;
        end
      end else if (2'h2 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        if (io_dataResp_valid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
          s3_word_5 <= io_dataResp_bits_data_5_2;
        end else begin
          s3_word_5 <= s2_line_5_2;
        end
      end else if (2'h1 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        s3_word_5 <= dataNow_5_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
      end else begin
        s3_word_5 <= dataNow_5_0;
      end
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      if (2'h3 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        if (io_dataResp_valid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
          s3_word_4 <= io_dataResp_bits_data_4_3;
        end else begin
          s3_word_4 <= s2_line_4_3;
        end
      end else if (2'h2 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        if (io_dataResp_valid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
          s3_word_4 <= io_dataResp_bits_data_4_2;
        end else begin
          s3_word_4 <= s2_line_4_2;
        end
      end else if (2'h1 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        s3_word_4 <= dataNow_4_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
      end else begin
        s3_word_4 <= dataNow_4_0;
      end
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      if (2'h3 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        if (io_dataResp_valid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
          s3_word_3 <= io_dataResp_bits_data_3_3;
        end else begin
          s3_word_3 <= s2_line_3_3;
        end
      end else if (2'h2 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        if (io_dataResp_valid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
          s3_word_3 <= io_dataResp_bits_data_3_2;
        end else begin
          s3_word_3 <= s2_line_3_2;
        end
      end else if (2'h1 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        s3_word_3 <= dataNow_3_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
      end else begin
        s3_word_3 <= dataNow_3_0;
      end
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      if (2'h3 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        if (io_dataResp_valid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
          s3_word_2 <= io_dataResp_bits_data_2_3;
        end else begin
          s3_word_2 <= s2_line_2_3;
        end
      end else if (2'h2 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        if (io_dataResp_valid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
          s3_word_2 <= io_dataResp_bits_data_2_2;
        end else begin
          s3_word_2 <= s2_line_2_2;
        end
      end else if (2'h1 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        s3_word_2 <= dataNow_2_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
      end else begin
        s3_word_2 <= dataNow_2_0;
      end
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      if (2'h3 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        if (io_dataResp_valid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
          s3_word_1 <= io_dataResp_bits_data_1_3;
        end else begin
          s3_word_1 <= s2_line_1_3;
        end
      end else if (2'h2 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        if (io_dataResp_valid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
          s3_word_1 <= io_dataResp_bits_data_1_2;
        end else begin
          s3_word_1 <= s2_line_1_2;
        end
      end else if (2'h1 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        s3_word_1 <= dataNow_1_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
      end else begin
        s3_word_1 <= dataNow_1_0;
      end
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      if (2'h3 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        if (io_dataResp_valid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
          s3_word_0 <= io_dataResp_bits_data_0_3;
        end else begin
          s3_word_0 <= s2_line_0_3;
        end
      end else if (2'h2 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        if (io_dataResp_valid) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 508:20]
          s3_word_0 <= io_dataResp_bits_data_0_2;
        end else begin
          s3_word_0 <= s2_line_0_2;
        end
      end else if (2'h1 == s2_way) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
        s3_word_0 <= dataNow_0_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 604:18]
      end else begin
        s3_word_0 <= dataNow_0_0;
      end
    end
    if (!(clearing)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 854:69]
      if (lrSets) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 856:22]
        lrsc_addr <= _lineMatch_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 858:15]
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 633:27]
      lrsc_count <= 6'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 633:27]
    end else if (clearing) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 854:69]
      lrsc_count <= 6'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 855:16]
    end else if (lrSets) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 856:22]
      lrsc_count <= 6'h3f; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 857:16]
    end else if (_probeClears_T_2) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 859:34]
      lrsc_count <= _lrsc_count_T_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 860:16]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
      sent_1 <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
    end else if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      sent_1 <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 609:20]
    end else begin
      sent_1 <= _GEN_223;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
      sent_2 <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
    end else if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      sent_2 <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 609:20]
    end else begin
      sent_2 <= _GEN_224;
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      s3_replace <= s2_replace; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 600:16]
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      if (_s2_refill_T) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 606:46]
        s3_refill_passDirty <= io_refillInfo_bits_passDirty; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 607:17]
      end
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
      sent_3 <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
    end else if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      sent_3 <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 609:20]
    end else begin
      sent_3 <= _GEN_225;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
      sent_7 <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
    end else if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      sent_7 <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 609:20]
    end else begin
      sent_7 <= _GEN_226;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
      sent_4 <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
    end else if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      sent_4 <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 609:20]
    end else begin
      sent_4 <= _GEN_227;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
      sent_5 <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
    end else if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      sent_5 <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 609:20]
    end else begin
      sent_5 <= _GEN_228;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
      sent_6 <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
    end else if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      sent_6 <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 609:20]
    end else begin
      sent_6 <= _GEN_229;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
      sent_8 <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 590:21]
    end else if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      sent_8 <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 609:20]
    end else begin
      sent_8 <= _GEN_230;
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 376:25]
      s1_first <= 1'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 376:25]
    end else begin
      s1_first <= s0_fire; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 376:25]
    end
    if (s1_first) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 379:18]
      s1_tag_3 <= io_tagResp_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 380:12]
    end
    if (s1_first) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 379:18]
      s1_meta_3_coh <= io_metaResp_3_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 381:13]
    end
    if (s1_first) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 379:18]
      s1_tag_2 <= io_tagResp_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 380:12]
    end
    if (s1_first) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 379:18]
      s1_meta_2_coh <= io_metaResp_2_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 381:13]
    end
    if (s1_first) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 379:18]
      s1_tag_1 <= io_tagResp_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 380:12]
    end
    if (s1_first) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 379:18]
      s1_meta_1_coh <= io_metaResp_1_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 381:13]
    end
    if (s1_first) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 379:18]
      s1_tag_0 <= io_tagResp_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 380:12]
    end
    if (s1_first) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 379:18]
      s1_meta_0_coh <= io_metaResp_0_coh; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 381:13]
    end
    if (reset) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 434:27]
      skipVictim <= 4'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 434:27]
    end else if (s0_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 449:17]
      skipVictim <= 4'h0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 450:16]
    end else if (blocked) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 451:23]
      skipVictim <= _skipVictim_T_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 452:16]
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (s1_hit) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 442:23]
        s2_way <= hitWay;
      end else if (useSpecified) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 443:8]
        s2_way <= specWay;
      end else if (useEmpty) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 443:35]
        s2_way <= emptyWay;
      end else begin
        s2_way <= victimWay;
      end
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      s2_can_install <= canInstall1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 496:20]
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      s2_replace <= willReplace; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 499:16]
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      s2_replace_dirty <= _victimNeedData_T; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 500:22]
    end
    if (s1_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      s2_replace_addr <= victimPaddr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 501:21]
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_0_0 <= io_dataResp_bits_data_0_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_0_1 <= io_dataResp_bits_data_0_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_0_2 <= io_dataResp_bits_data_0_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_0_3 <= io_dataResp_bits_data_0_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_1_0 <= io_dataResp_bits_data_1_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_1_1 <= io_dataResp_bits_data_1_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_1_2 <= io_dataResp_bits_data_1_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_1_3 <= io_dataResp_bits_data_1_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_2_0 <= io_dataResp_bits_data_2_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_2_1 <= io_dataResp_bits_data_2_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_2_2 <= io_dataResp_bits_data_2_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_2_3 <= io_dataResp_bits_data_2_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_3_0 <= io_dataResp_bits_data_3_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_3_1 <= io_dataResp_bits_data_3_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_3_2 <= io_dataResp_bits_data_3_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_3_3 <= io_dataResp_bits_data_3_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_4_0 <= io_dataResp_bits_data_4_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_4_1 <= io_dataResp_bits_data_4_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_4_2 <= io_dataResp_bits_data_4_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_4_3 <= io_dataResp_bits_data_4_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_5_0 <= io_dataResp_bits_data_5_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_5_1 <= io_dataResp_bits_data_5_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_5_2 <= io_dataResp_bits_data_5_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_5_3 <= io_dataResp_bits_data_5_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_6_0 <= io_dataResp_bits_data_6_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_6_1 <= io_dataResp_bits_data_6_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_6_2 <= io_dataResp_bits_data_6_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_6_3 <= io_dataResp_bits_data_6_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_7_0 <= io_dataResp_bits_data_7_0; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_7_1 <= io_dataResp_bits_data_7_1; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_7_2 <= io_dataResp_bits_data_7_2; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (!(s1_fire)) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 490:17]
      if (io_dataResp_valid & s2_valid & s2_need_data & ~s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 503:73]
        s2_line_7_3 <= io_dataResp_bits_data_7_3; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 504:13]
      end
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      s3_way <= s2_way; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 595:12]
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      s3_replace_dirty <= s2_replace_dirty; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 601:22]
    end
    if (s2_fire) begin // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 592:17]
      s3_replace_addr <= s2_replace_addr; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 602:21]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(_T_35 <= 3'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: mainpipe accepts one request per cycle\n    at MainPipe.scala:882 assert(PopCount(Seq(io.probe.fire, io.refill.fire, io.store.fire, io.atomic.fire)) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 882:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(_T_35 <= 3'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 882:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_39 & ~(_s1_ready_T | ~s1_first | _T_52 <= 3'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: tag should match at most one way\n    at MainPipe.scala:884 assert(!s1_valid || !s1_first || PopCount(hitOh) <= 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 884:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_39 & ~(_s1_ready_T | ~s1_first | _T_52 <= 3'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 884:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_39 & ~(_s1_ready_T | ~twoBanks1 | s1_hold_wordIdx != 3'h7)) begin
          $fwrite(32'h80000002,
            "Assertion failed: atomic pair must not cross a cache line\n    at MainPipe.scala:886 assert(!s1_valid || !twoBanks1 || s1_hold.wordIdx =/= (DCacheBanks - 1).U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 886:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_39 & ~(_s1_ready_T | ~twoBanks1 | s1_hold_wordIdx != 3'h7)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 886:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_39 & ~(_s1_ready_T | ~_isCas1_T_3 | ~s1_hold_wordIdx[0])) begin
          $fwrite(32'h80000002,
            "Assertion failed: AMOCAS.Q wordIdx must be even\n    at MainPipe.scala:888 assert(!s1_valid || !isAMOCASQ(s1_hold.cmd) || !s1_hold.wordIdx(0),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 888:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_39 & ~(_s1_ready_T | ~_isCas1_T_3 | ~s1_hold_wordIdx[0])) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 888:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_39 & ~(_s2_ready_T | _dataOk2_T | s2_got | io_dataResp_valid)) begin
          $fwrite(32'h80000002,
            "Assertion failed: data read must return on the first s2 cycle\n    at MainPipe.scala:890 assert(!s2_valid || !s2_need_data || s2_got || io.dataResp.valid,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 890:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_39 & ~(_s2_ready_T | _dataOk2_T | s2_got | io_dataResp_valid)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 890:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_39 & ~(~io_tagWrite_valid | _T_94 == 3'h1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: tag write selects one way\n    at MainPipe.scala:892 assert(!io.tagWrite.valid || PopCount(io.tagWrite.bits.way_en) === 1.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 892:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_39 & ~(~io_tagWrite_valid | _T_94 == 3'h1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 892:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_39 & ~(_s3_ready_T | ~s3_refill_req | s3_can_install | _s3_done_T_1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: refill must not install without a legal way\n    at MainPipe.scala:894 assert(!s3_valid || !s3_refill_req || s3_can_install || !doInstall,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 894:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_39 & ~(_s3_ready_T | ~s3_refill_req | s3_can_install | _s3_done_T_1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 894:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_39 & ~(_s3_ready_T | _doInstall_T_3)) begin
          $fwrite(32'h80000002,
            "Assertion failed: store data cannot be merged into a shared refill\n    at MainPipe.scala:896 assert(!s3_valid || !sharedStore, \"store data cannot be merged into a shared refill\")\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 896:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_39 & ~(_s3_ready_T | _doInstall_T_3)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 896:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_39 & ~(~s2Replay | _sameAddrReject_T)) begin
          $fwrite(32'h80000002,
            "Assertion failed: s2 atomic replay must not accept the miss\n    at MainPipe.scala:897 assert(!s2Replay || !io.missResp.handled,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 897:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_39 & ~(~s2Replay | _sameAddrReject_T)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 897:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_39 & ~(~(s2Replay & s3Replay))) begin
          $fwrite(32'h80000002,
            "Assertion failed: s2 and s3 must not drive atomicReplay together\n    at MainPipe.scala:899 assert(!(s2Replay && s3Replay),\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 899:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_39 & ~(~(s2Replay & s3Replay))) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 899:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_39 & ~(_s3_done_T_29 | _s3_done_T_40)) begin
          $fwrite(32'h80000002,
            "Assertion failed: atomic completion and atomic replay are mutually exclusive\n    at MainPipe.scala:901 assert(!doAtomicResp || !doS3Replay,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 901:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_39 & ~(_s3_done_T_29 | _s3_done_T_40)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 901:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_39 & ~(_s3_ready_T | _doInstall_T_5 | _s3_done_T_1)) begin
          $fwrite(32'h80000002,
            "Assertion failed: a refill error must not install\n    at MainPipe.scala:903 assert(!s3_valid || !refillErr || !doInstall,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 903:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_39 & ~(_s3_ready_T | _doInstall_T_5 | _s3_done_T_1)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 903:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_39 & ~(~io_wbReq_valid | io_wbReq_bits_opcode != 3'h0 | ~io_wbReq_bits_passDirty)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Evict does not carry dirty data\n    at MainPipe.scala:905 assert(!io.wbReq.valid || io.wbReq.bits.opcode =/= WbOpcode.Evict || !io.wbReq.bits.passDirty,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 905:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_39 & ~(~io_wbReq_valid | io_wbReq_bits_opcode != 3'h0 | ~io_wbReq_bits_passDirty)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 905:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_39 & ~(~io_replaceQuery_valid | io_replaceQuery_bits[5:0] == 6'h0)) begin
          $fwrite(32'h80000002,
            "Assertion failed: victim query must be line aligned\n    at MainPipe.scala:907 assert(!io.replaceQuery.valid || io.replaceQuery.bits(blockOffBits - 1, 0) === 0.U,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 907:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_39 & ~(~io_replaceQuery_valid | io_replaceQuery_bits[5:0] == 6'h0)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 907:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_39 & ~(_s3_ready_T | s3_hold_probeOp != 2'h0 | ~probeNeedWb)) begin
          $fwrite(32'h80000002,
            "Assertion failed: SnpMakeInvalid does not return data\n    at MainPipe.scala:909 assert(!s3_valid || s3_hold.probeOp =/= CompactChiOpcode.Snp.SnpMakeInvalid || !probeNeedWb,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 909:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_39 & ~(_s3_ready_T | s3_hold_probeOp != 2'h0 | ~probeNeedWb)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 909:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_39 & ~(_T_141 | wbOpcode != 3'h3 | ~wbPassDirty)) begin
          $fwrite(32'h80000002,
            "Assertion failed: SnpResp does not carry dirty data\n    at MainPipe.scala:911 assert(!io.wbReq.valid || wbOpcode =/= WbOpcode.SnpResp || !wbPassDirty,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 911:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_39 & ~(_T_141 | wbOpcode != 3'h3 | ~wbPassDirty)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 911:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_39 & ~(_T_141 | wbOpcode != 3'h5 | wbPassDirty)) begin
          $fwrite(32'h80000002,
            "Assertion failed: PassDirty writeback must set passDirty\n    at MainPipe.scala:913 assert(!io.wbReq.valid || wbOpcode =/= WbOpcode.PassDirty || wbPassDirty,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 913:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_39 & ~(_T_141 | wbOpcode != 3'h5 | wbPassDirty)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 913:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_39 & ~(_T_141 | _s3_done_T_24 | s3_hold_snpTxnId == io_wbReq_bits_snpTxnId)) begin
          $fwrite(32'h80000002,
            "Assertion failed: snoop writeback must keep the original txnId\n    at MainPipe.scala:915 assert(!io.wbReq.valid || !s3_probe || s3_hold.snpTxnId === io.wbReq.bits.snpTxnId,\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 915:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_39 & ~(_T_141 | _s3_done_T_24 | s3_hold_snpTxnId == io_wbReq_bits_snpTxnId)) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 915:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_39 & ~(~(io_storeHit_valid & io_storeReplay_valid & _T_188))) begin
          $fwrite(32'h80000002,
            "Assertion failed: one store cannot hit and replay together\n    at MainPipe.scala:917 assert(!(io.storeHit.valid && io.storeReplay.valid &&\n"
            ); // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 917:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_39 & ~(~(io_storeHit_valid & io_storeReplay_valid & _T_188))) begin
          $fatal; // @[home/ywj/yqh/src/main/scala/YQH/cache/MainPipe/MainPipe.scala 917:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  s1_valid = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  s2_valid = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  s3_valid = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  s1_hold_src = _RAND_3[1:0];
  _RAND_4 = {1{`RANDOM}};
  s1_hold_cmd = _RAND_4[4:0];
  _RAND_5 = {2{`RANDOM}};
  s1_hold_vaddr = _RAND_5[47:0];
  _RAND_6 = {2{`RANDOM}};
  s1_hold_addr = _RAND_6[47:0];
  _RAND_7 = {1{`RANDOM}};
  s1_hold_set = _RAND_7[7:0];
  _RAND_8 = {1{`RANDOM}};
  s1_hold_id = _RAND_8[5:0];
  _RAND_9 = {1{`RANDOM}};
  s1_hold_missId = _RAND_9[3:0];
  _RAND_10 = {16{`RANDOM}};
  s1_hold_storeData = _RAND_10[511:0];
  _RAND_11 = {2{`RANDOM}};
  s1_hold_storeMask = _RAND_11[63:0];
  _RAND_12 = {1{`RANDOM}};
  s1_hold_wordIdx = _RAND_12[2:0];
  _RAND_13 = {4{`RANDOM}};
  s1_hold_amoData = _RAND_13[127:0];
  _RAND_14 = {1{`RANDOM}};
  s1_hold_amoMask = _RAND_14[15:0];
  _RAND_15 = {4{`RANDOM}};
  s1_hold_amoCmp = _RAND_15[127:0];
  _RAND_16 = {1{`RANDOM}};
  s1_hold_probeOp = _RAND_16[1:0];
  _RAND_17 = {1{`RANDOM}};
  s1_hold_needData = _RAND_17[0:0];
  _RAND_18 = {1{`RANDOM}};
  s1_hold_snpTxnId = _RAND_18[7:0];
  _RAND_19 = {1{`RANDOM}};
  s1_hold_replaceWay = _RAND_19[3:0];
  _RAND_20 = {1{`RANDOM}};
  s2_hold_src = _RAND_20[1:0];
  _RAND_21 = {1{`RANDOM}};
  s2_hold_cmd = _RAND_21[4:0];
  _RAND_22 = {2{`RANDOM}};
  s2_hold_vaddr = _RAND_22[47:0];
  _RAND_23 = {2{`RANDOM}};
  s2_hold_addr = _RAND_23[47:0];
  _RAND_24 = {1{`RANDOM}};
  s2_hold_set = _RAND_24[7:0];
  _RAND_25 = {1{`RANDOM}};
  s2_hold_id = _RAND_25[5:0];
  _RAND_26 = {1{`RANDOM}};
  s2_hold_missId = _RAND_26[3:0];
  _RAND_27 = {16{`RANDOM}};
  s2_hold_storeData = _RAND_27[511:0];
  _RAND_28 = {2{`RANDOM}};
  s2_hold_storeMask = _RAND_28[63:0];
  _RAND_29 = {1{`RANDOM}};
  s2_hold_wordIdx = _RAND_29[2:0];
  _RAND_30 = {4{`RANDOM}};
  s2_hold_amoData = _RAND_30[127:0];
  _RAND_31 = {1{`RANDOM}};
  s2_hold_amoMask = _RAND_31[15:0];
  _RAND_32 = {4{`RANDOM}};
  s2_hold_amoCmp = _RAND_32[127:0];
  _RAND_33 = {1{`RANDOM}};
  s2_hold_probeOp = _RAND_33[1:0];
  _RAND_34 = {1{`RANDOM}};
  s2_hold_needData = _RAND_34[0:0];
  _RAND_35 = {1{`RANDOM}};
  s2_hold_snpTxnId = _RAND_35[7:0];
  _RAND_36 = {1{`RANDOM}};
  s3_hold_src = _RAND_36[1:0];
  _RAND_37 = {1{`RANDOM}};
  s3_hold_cmd = _RAND_37[4:0];
  _RAND_38 = {2{`RANDOM}};
  s3_hold_vaddr = _RAND_38[47:0];
  _RAND_39 = {2{`RANDOM}};
  s3_hold_addr = _RAND_39[47:0];
  _RAND_40 = {1{`RANDOM}};
  s3_hold_set = _RAND_40[7:0];
  _RAND_41 = {1{`RANDOM}};
  s3_hold_id = _RAND_41[5:0];
  _RAND_42 = {1{`RANDOM}};
  s3_hold_missId = _RAND_42[3:0];
  _RAND_43 = {16{`RANDOM}};
  s3_hold_storeData = _RAND_43[511:0];
  _RAND_44 = {2{`RANDOM}};
  s3_hold_storeMask = _RAND_44[63:0];
  _RAND_45 = {1{`RANDOM}};
  s3_hold_wordIdx = _RAND_45[2:0];
  _RAND_46 = {4{`RANDOM}};
  s3_hold_amoData = _RAND_46[127:0];
  _RAND_47 = {1{`RANDOM}};
  s3_hold_amoMask = _RAND_47[15:0];
  _RAND_48 = {4{`RANDOM}};
  s3_hold_amoCmp = _RAND_48[127:0];
  _RAND_49 = {1{`RANDOM}};
  s3_hold_probeOp = _RAND_49[1:0];
  _RAND_50 = {1{`RANDOM}};
  s3_hold_needData = _RAND_50[0:0];
  _RAND_51 = {1{`RANDOM}};
  s3_hold_snpTxnId = _RAND_51[7:0];
  _RAND_52 = {1{`RANDOM}};
  s2_hit = _RAND_52[0:0];
  _RAND_53 = {1{`RANDOM}};
  s2_coh = _RAND_53[1:0];
  _RAND_54 = {1{`RANDOM}};
  s2_need_data = _RAND_54[0:0];
  _RAND_55 = {1{`RANDOM}};
  s2_got = _RAND_55[0:0];
  _RAND_56 = {1{`RANDOM}};
  s3_can_install = _RAND_56[0:0];
  _RAND_57 = {2{`RANDOM}};
  s3_refill_storeMask = _RAND_57[63:0];
  _RAND_58 = {1{`RANDOM}};
  s3_refill_retUnique = _RAND_58[0:0];
  _RAND_59 = {1{`RANDOM}};
  s3_refill_error = _RAND_59[0:0];
  _RAND_60 = {1{`RANDOM}};
  sent_0 = _RAND_60[0:0];
  _RAND_61 = {1{`RANDOM}};
  s3_hit = _RAND_61[0:0];
  _RAND_62 = {1{`RANDOM}};
  s3_coh = _RAND_62[1:0];
  _RAND_63 = {16{`RANDOM}};
  s3_refill_storeData = _RAND_63[511:0];
  _RAND_64 = {16{`RANDOM}};
  s3_refill_data = _RAND_64[511:0];
  _RAND_65 = {2{`RANDOM}};
  s3_word_7 = _RAND_65[63:0];
  _RAND_66 = {2{`RANDOM}};
  s3_word_6 = _RAND_66[63:0];
  _RAND_67 = {2{`RANDOM}};
  s3_word_5 = _RAND_67[63:0];
  _RAND_68 = {2{`RANDOM}};
  s3_word_4 = _RAND_68[63:0];
  _RAND_69 = {2{`RANDOM}};
  s3_word_3 = _RAND_69[63:0];
  _RAND_70 = {2{`RANDOM}};
  s3_word_2 = _RAND_70[63:0];
  _RAND_71 = {2{`RANDOM}};
  s3_word_1 = _RAND_71[63:0];
  _RAND_72 = {2{`RANDOM}};
  s3_word_0 = _RAND_72[63:0];
  _RAND_73 = {2{`RANDOM}};
  lrsc_addr = _RAND_73[47:0];
  _RAND_74 = {1{`RANDOM}};
  lrsc_count = _RAND_74[5:0];
  _RAND_75 = {1{`RANDOM}};
  sent_1 = _RAND_75[0:0];
  _RAND_76 = {1{`RANDOM}};
  sent_2 = _RAND_76[0:0];
  _RAND_77 = {1{`RANDOM}};
  s3_replace = _RAND_77[0:0];
  _RAND_78 = {1{`RANDOM}};
  s3_refill_passDirty = _RAND_78[0:0];
  _RAND_79 = {1{`RANDOM}};
  sent_3 = _RAND_79[0:0];
  _RAND_80 = {1{`RANDOM}};
  sent_7 = _RAND_80[0:0];
  _RAND_81 = {1{`RANDOM}};
  sent_4 = _RAND_81[0:0];
  _RAND_82 = {1{`RANDOM}};
  sent_5 = _RAND_82[0:0];
  _RAND_83 = {1{`RANDOM}};
  sent_6 = _RAND_83[0:0];
  _RAND_84 = {1{`RANDOM}};
  sent_8 = _RAND_84[0:0];
  _RAND_85 = {1{`RANDOM}};
  s1_first = _RAND_85[0:0];
  _RAND_86 = {2{`RANDOM}};
  s1_tag_3 = _RAND_86[35:0];
  _RAND_87 = {1{`RANDOM}};
  s1_meta_3_coh = _RAND_87[1:0];
  _RAND_88 = {2{`RANDOM}};
  s1_tag_2 = _RAND_88[35:0];
  _RAND_89 = {1{`RANDOM}};
  s1_meta_2_coh = _RAND_89[1:0];
  _RAND_90 = {2{`RANDOM}};
  s1_tag_1 = _RAND_90[35:0];
  _RAND_91 = {1{`RANDOM}};
  s1_meta_1_coh = _RAND_91[1:0];
  _RAND_92 = {2{`RANDOM}};
  s1_tag_0 = _RAND_92[35:0];
  _RAND_93 = {1{`RANDOM}};
  s1_meta_0_coh = _RAND_93[1:0];
  _RAND_94 = {1{`RANDOM}};
  skipVictim = _RAND_94[3:0];
  _RAND_95 = {1{`RANDOM}};
  s2_way = _RAND_95[1:0];
  _RAND_96 = {1{`RANDOM}};
  s2_can_install = _RAND_96[0:0];
  _RAND_97 = {1{`RANDOM}};
  s2_replace = _RAND_97[0:0];
  _RAND_98 = {1{`RANDOM}};
  s2_replace_dirty = _RAND_98[0:0];
  _RAND_99 = {2{`RANDOM}};
  s2_replace_addr = _RAND_99[47:0];
  _RAND_100 = {2{`RANDOM}};
  s2_line_0_0 = _RAND_100[63:0];
  _RAND_101 = {2{`RANDOM}};
  s2_line_0_1 = _RAND_101[63:0];
  _RAND_102 = {2{`RANDOM}};
  s2_line_0_2 = _RAND_102[63:0];
  _RAND_103 = {2{`RANDOM}};
  s2_line_0_3 = _RAND_103[63:0];
  _RAND_104 = {2{`RANDOM}};
  s2_line_1_0 = _RAND_104[63:0];
  _RAND_105 = {2{`RANDOM}};
  s2_line_1_1 = _RAND_105[63:0];
  _RAND_106 = {2{`RANDOM}};
  s2_line_1_2 = _RAND_106[63:0];
  _RAND_107 = {2{`RANDOM}};
  s2_line_1_3 = _RAND_107[63:0];
  _RAND_108 = {2{`RANDOM}};
  s2_line_2_0 = _RAND_108[63:0];
  _RAND_109 = {2{`RANDOM}};
  s2_line_2_1 = _RAND_109[63:0];
  _RAND_110 = {2{`RANDOM}};
  s2_line_2_2 = _RAND_110[63:0];
  _RAND_111 = {2{`RANDOM}};
  s2_line_2_3 = _RAND_111[63:0];
  _RAND_112 = {2{`RANDOM}};
  s2_line_3_0 = _RAND_112[63:0];
  _RAND_113 = {2{`RANDOM}};
  s2_line_3_1 = _RAND_113[63:0];
  _RAND_114 = {2{`RANDOM}};
  s2_line_3_2 = _RAND_114[63:0];
  _RAND_115 = {2{`RANDOM}};
  s2_line_3_3 = _RAND_115[63:0];
  _RAND_116 = {2{`RANDOM}};
  s2_line_4_0 = _RAND_116[63:0];
  _RAND_117 = {2{`RANDOM}};
  s2_line_4_1 = _RAND_117[63:0];
  _RAND_118 = {2{`RANDOM}};
  s2_line_4_2 = _RAND_118[63:0];
  _RAND_119 = {2{`RANDOM}};
  s2_line_4_3 = _RAND_119[63:0];
  _RAND_120 = {2{`RANDOM}};
  s2_line_5_0 = _RAND_120[63:0];
  _RAND_121 = {2{`RANDOM}};
  s2_line_5_1 = _RAND_121[63:0];
  _RAND_122 = {2{`RANDOM}};
  s2_line_5_2 = _RAND_122[63:0];
  _RAND_123 = {2{`RANDOM}};
  s2_line_5_3 = _RAND_123[63:0];
  _RAND_124 = {2{`RANDOM}};
  s2_line_6_0 = _RAND_124[63:0];
  _RAND_125 = {2{`RANDOM}};
  s2_line_6_1 = _RAND_125[63:0];
  _RAND_126 = {2{`RANDOM}};
  s2_line_6_2 = _RAND_126[63:0];
  _RAND_127 = {2{`RANDOM}};
  s2_line_6_3 = _RAND_127[63:0];
  _RAND_128 = {2{`RANDOM}};
  s2_line_7_0 = _RAND_128[63:0];
  _RAND_129 = {2{`RANDOM}};
  s2_line_7_1 = _RAND_129[63:0];
  _RAND_130 = {2{`RANDOM}};
  s2_line_7_2 = _RAND_130[63:0];
  _RAND_131 = {2{`RANDOM}};
  s2_line_7_3 = _RAND_131[63:0];
  _RAND_132 = {1{`RANDOM}};
  s3_way = _RAND_132[1:0];
  _RAND_133 = {1{`RANDOM}};
  s3_replace_dirty = _RAND_133[0:0];
  _RAND_134 = {2{`RANDOM}};
  s3_replace_addr = _RAND_134[47:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
