// include dcache and venus top module and defines
`include "/home/ywj/yqh/regress/regress_build/verilog/DCache.v"
`include "/home/ywj/yqh/regress/cchi/icn/venus/tb/venus_v3_top_extmem.sv"
`include "/home/ywj/yqh/regress/top/moduleport.svh"


module dcache_venus_top (
    input clock,
    input reset,
    `DCACHE_CPU_PORT_DECL,
    `VENUS_V3_AXI_PORT_DECL
);

    // Venus (HN) side signals: rxevt_0_* / rxreq_0_* / tx*_0_*
    `VENUS_V3_T1_LOGIC(0)

    // DCache L2 (RN) side signals: io_l2_*
    `DCACHE_TO_VENUS_LOGIC_SIGNALS


    // ------------------------------------------------------------------
    // DCache (RN) <-> Venus (HN) CCHI type-1 port 0.
    // Width adaptation:
    //   DCache: TxnID 8, SrcID/TgtID 7, TagAlias 2, Way 2
    //   Venus : TxnID 7, SrcID/TgtID 5, TagAlias 8, Way 4
    // High bits are truncated on DCache->Venus, zero-extended on
    // Venus->DCache.  CCHI SNP has no TagAlias field -> drive 0.
    // ------------------------------------------------------------------

    // ---------------- RN -> HN : EVT / REQ / UpRSP / UpDAT ----------------
    assign rxevt_0_valid           = io_l2_evt_valid;
    assign rxevt_0_bits_TxnID      = io_l2_evt_bits_txnID[6:0];
    assign rxevt_0_bits_SrcID      = io_l2_evt_bits_srcID[4:0];
    assign rxevt_0_bits_TgtID      = io_l2_evt_bits_tgtID[4:0];
    assign rxevt_0_bits_Opcode     = io_l2_evt_bits_opcode;
    assign rxevt_0_bits_Addr       = io_l2_evt_bits_addr;
    assign rxevt_0_bits_NS         = io_l2_evt_bits_ns;
    assign rxevt_0_bits_MemAttr    = io_l2_evt_bits_memAttr;
    assign rxevt_0_bits_WayValid   = io_l2_evt_bits_wayValid;
    assign rxevt_0_bits_Way        = {2'b00, io_l2_evt_bits_way};
    assign rxevt_0_bits_TraceTag   = io_l2_evt_bits_traceTag;
    assign io_l2_evt_ready         = rxevt_0_ready;

    assign rxreq_0_valid           = io_l2_req_valid;
    assign rxreq_0_bits_TxnID      = io_l2_req_bits_txnID[6:0];
    assign rxreq_0_bits_SrcID      = io_l2_req_bits_srcID[4:0];
    assign rxreq_0_bits_TgtID      = io_l2_req_bits_tgtID[4:0];
    assign rxreq_0_bits_Opcode     = io_l2_req_bits_opcode;
    assign rxreq_0_bits_Size       = io_l2_req_bits_size;
    assign rxreq_0_bits_Addr       = io_l2_req_bits_addr;
    assign rxreq_0_bits_TagAlias   = {6'b000000, io_l2_req_bits_tagAlias};
    assign rxreq_0_bits_NS         = io_l2_req_bits_ns;
    assign rxreq_0_bits_Order      = io_l2_req_bits_order;
    assign rxreq_0_bits_MemAttr    = io_l2_req_bits_memAttr;
    assign rxreq_0_bits_Excl       = io_l2_req_bits_excl;
    assign rxreq_0_bits_ExpCompDat = io_l2_req_bits_expCompData;
    assign rxreq_0_bits_TraceTag   = io_l2_req_bits_traceTag;
    assign rxreq_0_bits_WayValid   = io_l2_req_bits_wayValid;
    assign rxreq_0_bits_Way        = {2'b00, io_l2_req_bits_way};
    assign io_l2_req_ready         = rxreq_0_ready;

    assign rxrsp_0_valid           = io_l2_txRsp_valid;
    assign rxrsp_0_bits_TxnID      = io_l2_txRsp_bits_txnID[6:0];
    assign rxrsp_0_bits_SrcID      = io_l2_txRsp_bits_srcID[4:0];
    assign rxrsp_0_bits_TgtID      = io_l2_txRsp_bits_tgtID[4:0];
    assign rxrsp_0_bits_Opcode     = io_l2_txRsp_bits_opcode;
    assign rxrsp_0_bits_RespErr    = io_l2_txRsp_bits_respErr;
    assign rxrsp_0_bits_Resp       = io_l2_txRsp_bits_resp;
    assign rxrsp_0_bits_TraceTag   = io_l2_txRsp_bits_traceTag;
    assign io_l2_txRsp_ready       = rxrsp_0_ready;

    assign rxdat_0_valid           = io_l2_txDat_valid;
    assign rxdat_0_bits_TxnID      = io_l2_txDat_bits_txnID[6:0];
    assign rxdat_0_bits_SrcID      = io_l2_txDat_bits_srcID[4:0];
    assign rxdat_0_bits_TgtID      = io_l2_txDat_bits_tgtID[4:0];
    assign rxdat_0_bits_Opcode     = io_l2_txDat_bits_opcode;
    assign rxdat_0_bits_RespErr    = io_l2_txDat_bits_respErr;
    assign rxdat_0_bits_Resp       = io_l2_txDat_bits_resp;
    assign rxdat_0_bits_DataID     = io_l2_txDat_bits_dataID;
    assign rxdat_0_bits_BE         = io_l2_txDat_bits_byteEnable;
    assign rxdat_0_bits_TraceTag   = io_l2_txDat_bits_traceTag;
    assign io_l2_txDat_ready       = rxdat_0_ready;

    // ---------------- HN -> RN : SNP / DnRSP / DnDAT --------------------
    assign io_l2_rxSnp_valid           = txsnp_0_valid;
    assign io_l2_rxSnp_bits_txnID      = {1'b0, txsnp_0_bits_TxnID};
    assign io_l2_rxSnp_bits_srcID      = {2'b00, txsnp_0_bits_SrcID};
    assign io_l2_rxSnp_bits_tgtID      = {2'b00, txsnp_0_bits_TgtID};
    assign io_l2_rxSnp_bits_opcode     = txsnp_0_bits_Opcode;
    assign io_l2_rxSnp_bits_addr       = txsnp_0_bits_Addr;
    assign io_l2_rxSnp_bits_tagAlias   = 2'b00;
    assign io_l2_rxSnp_bits_ns         = txsnp_0_bits_NS;
    assign io_l2_rxSnp_bits_traceTag   = txsnp_0_bits_TraceTag;
    assign txsnp_0_ready               = io_l2_rxSnp_ready;

    assign io_l2_rxRsp_valid           = txrsp_0_valid;
    assign io_l2_rxRsp_bits_txnID      = {1'b0, txrsp_0_bits_TxnID};
    assign io_l2_rxRsp_bits_srcID      = {2'b00, txrsp_0_bits_SrcID};
    assign io_l2_rxRsp_bits_tgtID      = {2'b00, txrsp_0_bits_TgtID};
    assign io_l2_rxRsp_bits_opcode     = txrsp_0_bits_Opcode;
    assign io_l2_rxRsp_bits_dbID       = {1'b0, txrsp_0_bits_DBID};
    assign io_l2_rxRsp_bits_respErr    = txrsp_0_bits_RespErr;
    assign io_l2_rxRsp_bits_resp       = txrsp_0_bits_Resp;
    assign io_l2_rxRsp_bits_cBusy      = txrsp_0_bits_CBusy;
    assign io_l2_rxRsp_bits_traceTag   = txrsp_0_bits_TraceTag;
    assign txrsp_0_ready               = io_l2_rxRsp_ready;

    assign io_l2_rxDat_valid           = txdat_0_valid;
    assign io_l2_rxDat_bits_txnID      = {1'b0, txdat_0_bits_TxnID};
    assign io_l2_rxDat_bits_srcID      = {2'b00, txdat_0_bits_SrcID};
    assign io_l2_rxDat_bits_tgtID      = {2'b00, txdat_0_bits_TgtID};
    assign io_l2_rxDat_bits_opcode     = txdat_0_bits_Opcode;
    assign io_l2_rxDat_bits_dbID       = {1'b0, txdat_0_bits_DBID};
    assign io_l2_rxDat_bits_respErr    = txdat_0_bits_RespErr;
    assign io_l2_rxDat_bits_resp       = txdat_0_bits_Resp;
    assign io_l2_rxDat_bits_dataSource = txdat_0_bits_DataSource;
    assign io_l2_rxDat_bits_cBusy      = txdat_0_bits_CBusy;
    assign io_l2_rxDat_bits_dataID     = txdat_0_bits_DataID;
    assign io_l2_rxDat_bits_traceTag   = txdat_0_bits_TraceTag;
    assign txdat_0_ready               = io_l2_rxDat_ready;

    // 256-bit packed data <-> 8 x 32-bit unpacked words
    genvar gi;
    generate
        for (gi = 0; gi < 8; gi = gi + 1) begin : g_rxdat_words
            assign rxdat_0_bits_Data[gi] = io_l2_txDat_bits_data[gi*32 +: 32];
        end
        for (gi = 0; gi < 8; gi = gi + 1) begin : g_txdat_words
            assign io_l2_rxDat_bits_data[gi*32 +: 32] = txdat_0_bits_Data[gi];
        end
    endgenerate


    // ------------------------------------------------------------------
    // Venus: CCHI p0 is the internal RN link.  The AXI master port is
    // intentionally left unconnected here (attach an AXI memory model
    // inside this top if simulation is required).
    // ------------------------------------------------------------------
    venus_v3_top_extmem #(
         .NUM_T1            (1)  // 一个上游dcache
        ,.NUM_AXI           (1)  // 一个下游axi控制的内存
        ,.PARALLELISM       (8)  // 对应不同的line事务可以同时全部保持in-flight
        ,.NODE_ID           (16) // 
        ,.INFLIGHT_SNP      (4)  // 4 条snp事务可以同时保持in-flight
        ,.Q_EVT             (2)  // L2的evt fifo 深度
        ,.Q_REQ             (2)
        ,.Q_RSP             (8)
        ,.Q_DAT             (16)
        ,.DIR_SETS          (1024) // 目录的set数
        ,.DIR_WAYS          (4) // 目录每1way的set数
        ,.SF_ENABLE         (1) // 是否启用snoop filter
        ,.SF_ALLOW_OVER     (1)
        ,.SF_BROADCAST      (0) // 强制向所有·端口snoopo
        ,.SF_SETS           (256) // snnop filter组数
        ,.SF_WAYS           (4)   // snoop fliter每组的路数
        ,.TAGALIAS_W        (2)   // tag alias位宽
        ,.AGE_MATRIX        (0)   // slot的优先级，编号小的slot优先级高 
        ,.STORAGE_DIR       (0)   // dictory storage 1=SRAM 0=DFF 
        ,.STORAGE_SF        (0)   // same as above for snoop filter
        ,.SRAM_LAT          (1)   // sram access latency
        ,.SRAM_INTERVAL     (1)   // 1 = sram 每拍都可以连续访问
        ,.SRAM_PERIOD       (1)   // 每拍都能访问一次sram 
        ,.SRAM_SLOT         (0)   // 每一拍都能用
        ,.AXI_ADDR_W        (48)  
        ,.AXI_DATA_W        (256)
        ,.AXI_ID_W          (4)
    ) u_L2andMem (
         .clock (clock)
        ,.reset (reset)
        `VENUS_V3_T1_PORT(0)
        `VENUS_V3_AXI_PORT(0)
    );

    // ------------------------------------------------------------------
    // DCache: CPU side is the top boundary, L2 side is the internal
    // CCHI link to Venus p0.
    // ------------------------------------------------------------------
    DCache u_dcache (
         .clock (clock)
        ,.reset (reset)
        `DCACHE_CPU_PORT_CONN
        `DCACHE_L2_PORT_CONN
    );

endmodule
