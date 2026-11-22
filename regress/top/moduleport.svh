// 宏定义
`define VENUS_V3_T1_LOGIC(P)\
logic         rxevt_``P``_valid          ;\
logic [6:0]   rxevt_``P``_bits_TxnID     ;\
logic [4:0]   rxevt_``P``_bits_SrcID     ;\
logic [4:0]   rxevt_``P``_bits_TgtID     ;\
logic         rxevt_``P``_bits_Opcode    ;\
logic [47:0]  rxevt_``P``_bits_Addr      ;\
logic         rxevt_``P``_bits_NS        ;\
logic         rxevt_``P``_bits_MemAttr   ;\
logic         rxevt_``P``_bits_WayValid  ;\
logic [3:0]   rxevt_``P``_bits_Way       ;\
logic         rxevt_``P``_bits_TraceTag  ;\
logic         rxevt_``P``_ready          ;\
logic         rxreq_``P``_valid          ;\
logic [6:0]   rxreq_``P``_bits_TxnID     ;\
logic [4:0]   rxreq_``P``_bits_SrcID     ;\
logic [4:0]   rxreq_``P``_bits_TgtID     ;\
logic [5:0]   rxreq_``P``_bits_Opcode    ;\
logic [2:0]   rxreq_``P``_bits_Size      ;\
logic [47:0]  rxreq_``P``_bits_Addr      ;\
logic [7:0]   rxreq_``P``_bits_TagAlias  ;\
logic         rxreq_``P``_bits_NS        ;\
logic [1:0]   rxreq_``P``_bits_Order     ;\
logic [3:0]   rxreq_``P``_bits_MemAttr   ;\
logic         rxreq_``P``_bits_Excl      ;\
logic         rxreq_``P``_bits_ExpCompDat;\
logic         rxreq_``P``_bits_TraceTag  ;\
logic         rxreq_``P``_bits_WayValid  ;\
logic [3:0]   rxreq_``P``_bits_Way       ;\
logic         rxreq_``P``_ready          ;\
logic         txsnp_``P``_ready          ;\
logic         txsnp_``P``_valid          ;\
logic  [6:0]  txsnp_``P``_bits_TxnID     ;\
logic  [4:0]  txsnp_``P``_bits_SrcID     ;\
logic  [4:0]  txsnp_``P``_bits_TgtID     ;\
logic  [1:0]  txsnp_``P``_bits_Opcode    ;\
logic  [44:0] txsnp_``P``_bits_Addr      ;\
logic         txsnp_``P``_bits_NS        ;\
logic         txsnp_``P``_bits_TraceTag  ;\
logic         txrsp_``P``_ready          ;\
logic         txrsp_``P``_valid          ;\
logic  [6:0]  txrsp_``P``_bits_TxnID     ;\
logic  [4:0]  txrsp_``P``_bits_SrcID     ;\
logic  [4:0]  txrsp_``P``_bits_TgtID     ;\
logic  [6:0]  txrsp_``P``_bits_DBID      ;\
logic  [2:0]  txrsp_``P``_bits_Opcode    ;\
logic  [1:0]  txrsp_``P``_bits_RespErr   ;\
logic  [2:0]  txrsp_``P``_bits_Resp      ;\
logic  [2:0]  txrsp_``P``_bits_CBusy     ;\
logic         txrsp_``P``_bits_WayValid  ;\
logic  [3:0]  txrsp_``P``_bits_Way       ;\
logic         txrsp_``P``_bits_TraceTag  ;\
logic         rxrsp_``P``_valid          ;\
logic [6:0]   rxrsp_``P``_bits_TxnID     ;\
logic [4:0]   rxrsp_``P``_bits_SrcID     ;\
logic [4:0]   rxrsp_``P``_bits_TgtID     ;\
logic         rxrsp_``P``_bits_Opcode    ;\
logic [1:0]   rxrsp_``P``_bits_RespErr   ;\
logic [2:0]   rxrsp_``P``_bits_Resp      ;\
logic         rxrsp_``P``_bits_TraceTag  ;\
logic         rxrsp_``P``_ready          ;\
logic         txdat_``P``_ready          ;\
logic         txdat_``P``_valid          ;\
logic  [6:0]  txdat_``P``_bits_TxnID     ;\
logic  [4:0]  txdat_``P``_bits_SrcID     ;\
logic  [4:0]  txdat_``P``_bits_TgtID     ;\
logic  [6:0]  txdat_``P``_bits_DBID      ;\
logic         txdat_``P``_bits_Opcode    ;\
logic  [1:0]  txdat_``P``_bits_RespErr   ;\
logic  [2:0]  txdat_``P``_bits_Resp      ;\
logic  [4:0]  txdat_``P``_bits_DataSource;\
logic  [2:0]  txdat_``P``_bits_CBusy     ;\
logic         txdat_``P``_bits_DataID    ;\
logic  [31:0] txdat_``P``_bits_Data [0:7];\
logic         txdat_``P``_bits_WayValid  ;\
logic  [3:0]  txdat_``P``_bits_Way       ;\
logic         txdat_``P``_bits_TraceTag  ;\
logic         rxdat_``P``_valid          ;\
logic [6:0]   rxdat_``P``_bits_TxnID     ;\
logic [4:0]   rxdat_``P``_bits_SrcID     ;\
logic [4:0]   rxdat_``P``_bits_TgtID     ;\
logic [1:0]   rxdat_``P``_bits_Opcode    ;\
logic [1:0]   rxdat_``P``_bits_RespErr   ;\
logic [2:0]   rxdat_``P``_bits_Resp      ;\
logic         rxdat_``P``_bits_DataID    ;\
logic [31:0]  rxdat_``P``_bits_Data [0:7];\
logic [31:0]  rxdat_``P``_bits_BE        ;\
logic         rxdat_``P``_bits_TraceTag  ;\
logic         rxdat_``P``_ready          ;

`define VENUS_V3_T1_PORT(P) \
    ,.cchi_t1p``P``_rxevt_valid             (rxevt_``P``_valid          ) /*input */ \
    ,.cchi_t1p``P``_rxevt_bits_TxnID        (rxevt_``P``_bits_TxnID     ) /*input */ \
    ,.cchi_t1p``P``_rxevt_bits_SrcID        (rxevt_``P``_bits_SrcID     ) /*input */ \
    ,.cchi_t1p``P``_rxevt_bits_TgtID        (rxevt_``P``_bits_TgtID     ) /*input */ \
    ,.cchi_t1p``P``_rxevt_bits_Opcode       (rxevt_``P``_bits_Opcode    ) /*input */ \
    ,.cchi_t1p``P``_rxevt_bits_Addr         (rxevt_``P``_bits_Addr      ) /*input */ \
    ,.cchi_t1p``P``_rxevt_bits_NS           (rxevt_``P``_bits_NS        ) /*input */ \
    ,.cchi_t1p``P``_rxevt_bits_MemAttr      (rxevt_``P``_bits_MemAttr   ) /*input */ \
    ,.cchi_t1p``P``_rxevt_bits_WayValid     (rxevt_``P``_bits_WayValid  ) /*input */ \
    ,.cchi_t1p``P``_rxevt_bits_Way          (rxevt_``P``_bits_Way       ) /*input */ \
    ,.cchi_t1p``P``_rxevt_bits_TraceTag     (rxevt_``P``_bits_TraceTag  ) /*input */ \
    ,.cchi_t1p``P``_rxevt_ready             (rxevt_``P``_ready          ) /*output*/ \
    ,.cchi_t1p``P``_rxreq_valid             (rxreq_``P``_valid          ) /*input */ \
    ,.cchi_t1p``P``_rxreq_bits_TxnID        (rxreq_``P``_bits_TxnID     ) /*input */ \
    ,.cchi_t1p``P``_rxreq_bits_SrcID        (rxreq_``P``_bits_SrcID     ) /*input */ \
    ,.cchi_t1p``P``_rxreq_bits_TgtID        (rxreq_``P``_bits_TgtID     ) /*input */ \
    ,.cchi_t1p``P``_rxreq_bits_Opcode       (rxreq_``P``_bits_Opcode    ) /*input */ \
    ,.cchi_t1p``P``_rxreq_bits_Size         (rxreq_``P``_bits_Size      ) /*input */ \
    ,.cchi_t1p``P``_rxreq_bits_Addr         (rxreq_``P``_bits_Addr      ) /*input */ \
    ,.cchi_t1p``P``_rxreq_bits_TagAlias     (rxreq_``P``_bits_TagAlias  ) /*input */ \
    ,.cchi_t1p``P``_rxreq_bits_NS           (rxreq_``P``_bits_NS        ) /*input */ \
    ,.cchi_t1p``P``_rxreq_bits_Order        (rxreq_``P``_bits_Order     ) /*input */ \
    ,.cchi_t1p``P``_rxreq_bits_MemAttr      (rxreq_``P``_bits_MemAttr   ) /*input */ \
    ,.cchi_t1p``P``_rxreq_bits_Excl         (rxreq_``P``_bits_Excl      ) /*input */ \
    ,.cchi_t1p``P``_rxreq_bits_ExpCompData  (rxreq_``P``_bits_ExpCompDat) /*input */ \
    ,.cchi_t1p``P``_rxreq_bits_TraceTag     (rxreq_``P``_bits_TraceTag  ) /*input */ \
    ,.cchi_t1p``P``_rxreq_bits_WayValid     (rxreq_``P``_bits_WayValid  ) /*input */ \
    ,.cchi_t1p``P``_rxreq_bits_Way          (rxreq_``P``_bits_Way       ) /*input */ \
    ,.cchi_t1p``P``_rxreq_ready             (rxreq_``P``_ready          ) /*output*/ \
    ,.cchi_t1p``P``_txsnp_ready             (txsnp_``P``_ready          ) /*input */ \
    ,.cchi_t1p``P``_txsnp_valid             (txsnp_``P``_valid          ) /*output*/ \
    ,.cchi_t1p``P``_txsnp_bits_TxnID        (txsnp_``P``_bits_TxnID     ) /*output*/ \
    ,.cchi_t1p``P``_txsnp_bits_SrcID        (txsnp_``P``_bits_SrcID     ) /*output*/ \
    ,.cchi_t1p``P``_txsnp_bits_TgtID        (txsnp_``P``_bits_TgtID     ) /*output*/ \
    ,.cchi_t1p``P``_txsnp_bits_Opcode       (txsnp_``P``_bits_Opcode    ) /*output*/ \
    ,.cchi_t1p``P``_txsnp_bits_Addr         (txsnp_``P``_bits_Addr      ) /*output*/ \
    ,.cchi_t1p``P``_txsnp_bits_NS           (txsnp_``P``_bits_NS        ) /*output*/ \
    ,.cchi_t1p``P``_txsnp_bits_TraceTag     (txsnp_``P``_bits_TraceTag  ) /*output*/ \
    ,.cchi_t1p``P``_txrsp_ready             (txrsp_``P``_ready          ) /*input */ \
    ,.cchi_t1p``P``_txrsp_valid             (txrsp_``P``_valid          ) /*output*/ \
    ,.cchi_t1p``P``_txrsp_bits_TxnID        (txrsp_``P``_bits_TxnID     ) /*output*/ \
    ,.cchi_t1p``P``_txrsp_bits_SrcID        (txrsp_``P``_bits_SrcID     ) /*output*/ \
    ,.cchi_t1p``P``_txrsp_bits_TgtID        (txrsp_``P``_bits_TgtID     ) /*output*/ \
    ,.cchi_t1p``P``_txrsp_bits_DBID         (txrsp_``P``_bits_DBID      ) /*output*/ \
    ,.cchi_t1p``P``_txrsp_bits_Opcode       (txrsp_``P``_bits_Opcode    ) /*output*/ \
    ,.cchi_t1p``P``_txrsp_bits_RespErr      (txrsp_``P``_bits_RespErr   ) /*output*/ \
    ,.cchi_t1p``P``_txrsp_bits_Resp         (txrsp_``P``_bits_Resp      ) /*output*/ \
    ,.cchi_t1p``P``_txrsp_bits_CBusy        (txrsp_``P``_bits_CBusy     ) /*output*/ \
    ,.cchi_t1p``P``_txrsp_bits_WayValid     (txrsp_``P``_bits_WayValid  ) /*output*/ \
    ,.cchi_t1p``P``_txrsp_bits_Way          (txrsp_``P``_bits_Way       ) /*output*/ \
    ,.cchi_t1p``P``_txrsp_bits_TraceTag     (txrsp_``P``_bits_TraceTag  ) /*output*/ \
    ,.cchi_t1p``P``_rxrsp_valid             (rxrsp_``P``_valid          ) /*input */ \
    ,.cchi_t1p``P``_rxrsp_bits_TxnID        (rxrsp_``P``_bits_TxnID     ) /*input */ \
    ,.cchi_t1p``P``_rxrsp_bits_SrcID        (rxrsp_``P``_bits_SrcID     ) /*input */ \
    ,.cchi_t1p``P``_rxrsp_bits_TgtID        (rxrsp_``P``_bits_TgtID     ) /*input */ \
    ,.cchi_t1p``P``_rxrsp_bits_Opcode       (rxrsp_``P``_bits_Opcode    ) /*input */ \
    ,.cchi_t1p``P``_rxrsp_bits_RespErr      (rxrsp_``P``_bits_RespErr   ) /*input */ \
    ,.cchi_t1p``P``_rxrsp_bits_Resp         (rxrsp_``P``_bits_Resp      ) /*input */ \
    ,.cchi_t1p``P``_rxrsp_bits_TraceTag     (rxrsp_``P``_bits_TraceTag  ) /*input */ \
    ,.cchi_t1p``P``_rxrsp_ready             (rxrsp_``P``_ready          ) /*output*/ \
    ,.cchi_t1p``P``_txdat_ready             (txdat_``P``_ready          ) /*input */ \
    ,.cchi_t1p``P``_txdat_valid             (txdat_``P``_valid          ) /*output*/ \
    ,.cchi_t1p``P``_txdat_bits_TxnID        (txdat_``P``_bits_TxnID     ) /*output*/ \
    ,.cchi_t1p``P``_txdat_bits_SrcID        (txdat_``P``_bits_SrcID     ) /*output*/ \
    ,.cchi_t1p``P``_txdat_bits_TgtID        (txdat_``P``_bits_TgtID     ) /*output*/ \
    ,.cchi_t1p``P``_txdat_bits_DBID         (txdat_``P``_bits_DBID      ) /*output*/ \
    ,.cchi_t1p``P``_txdat_bits_Opcode       (txdat_``P``_bits_Opcode    ) /*output*/ \
    ,.cchi_t1p``P``_txdat_bits_RespErr      (txdat_``P``_bits_RespErr   ) /*output*/ \
    ,.cchi_t1p``P``_txdat_bits_Resp         (txdat_``P``_bits_Resp      ) /*output*/ \
    ,.cchi_t1p``P``_txdat_bits_DataSource   (txdat_``P``_bits_DataSource) /*output*/ \
    ,.cchi_t1p``P``_txdat_bits_CBusy        (txdat_``P``_bits_CBusy     ) /*output*/ \
    ,.cchi_t1p``P``_txdat_bits_DataID       (txdat_``P``_bits_DataID    ) /*output*/ \
    ,.cchi_t1p``P``_txdat_bits_Data         (txdat_``P``_bits_Data       ) /*output*/ \
    ,.cchi_t1p``P``_txdat_bits_WayValid     (txdat_``P``_bits_WayValid  ) /*output*/ \
    ,.cchi_t1p``P``_txdat_bits_Way          (txdat_``P``_bits_Way       ) /*output*/ \
    ,.cchi_t1p``P``_txdat_bits_TraceTag     (txdat_``P``_bits_TraceTag  ) /*output*/ \
    ,.cchi_t1p``P``_rxdat_valid             (rxdat_``P``_valid          ) /*input */ \
    ,.cchi_t1p``P``_rxdat_bits_TxnID        (rxdat_``P``_bits_TxnID     ) /*input */ \
    ,.cchi_t1p``P``_rxdat_bits_SrcID        (rxdat_``P``_bits_SrcID     ) /*input */ \
    ,.cchi_t1p``P``_rxdat_bits_TgtID        (rxdat_``P``_bits_TgtID     ) /*input */ \
    ,.cchi_t1p``P``_rxdat_bits_Opcode       (rxdat_``P``_bits_Opcode    ) /*input */ \
    ,.cchi_t1p``P``_rxdat_bits_RespErr      (rxdat_``P``_bits_RespErr   ) /*input */ \
    ,.cchi_t1p``P``_rxdat_bits_Resp         (rxdat_``P``_bits_Resp      ) /*input */ \
    ,.cchi_t1p``P``_rxdat_bits_DataID       (rxdat_``P``_bits_DataID    ) /*input */ \
    ,.cchi_t1p``P``_rxdat_bits_Data         (rxdat_``P``_bits_Data       ) /*input */ \
    ,.cchi_t1p``P``_rxdat_bits_BE           (rxdat_``P``_bits_BE        ) /*input */ \
    ,.cchi_t1p``P``_rxdat_bits_TraceTag     (rxdat_``P``_bits_TraceTag  ) /*input */ \
    ,.cchi_t1p``P``_rxdat_ready             (rxdat_``P``_ready          ) /*output*/   

    // AXI4 master port P (top-level boundary, served by the C++ AXIMemory)
    `define VENUS_V3_AXI_PORT_DECL \
    output logic                 axi_m0_awvalid, \
    input  wire                  axi_m0_awready, \
    output logic [47:0]          axi_m0_awaddr, \
    output logic [3:0]           axi_m0_awid, \
    output logic [7:0]           axi_m0_awlen, \
    output logic [2:0]           axi_m0_awsize, \
    output logic [1:0]           axi_m0_awburst, \
    output logic                 axi_m0_wvalid, \
    input  wire                  axi_m0_wready, \
    output logic [255:0]         axi_m0_wdata, \
    output logic [31:0]          axi_m0_wstrb, \
    output logic                 axi_m0_wlast, \
    input  wire                  axi_m0_bvalid, \
    output logic                 axi_m0_bready, \
    input  wire [3:0]            axi_m0_bid, \
    input  wire [1:0]            axi_m0_bresp, \
    output logic                 axi_m0_arvalid, \
    input  wire                  axi_m0_arready, \
    output logic [47:0]          axi_m0_araddr, \
    output logic [3:0]           axi_m0_arid, \
    output logic [7:0]           axi_m0_arlen, \
    output logic [2:0]           axi_m0_arsize, \
    output logic [1:0]           axi_m0_arburst, \
    input  wire                  axi_m0_rvalid, \
    output logic                 axi_m0_rready, \
    input  wire [255:0]          axi_m0_rdata, \
    input  wire [3:0]            axi_m0_rid, \
    input  wire [1:0]            axi_m0_rresp, \
    input  wire                  axi_m0_rlast

    `define VENUS_V3_AXI_PORT(P) \
    ,.axi_m``P``_awvalid(axi_m``P``_awvalid) \
    ,.axi_m``P``_awready(axi_m``P``_awready) \
    ,.axi_m``P``_awaddr(axi_m``P``_awaddr) \
    ,.axi_m``P``_awid(axi_m``P``_awid) \
    ,.axi_m``P``_awlen(axi_m``P``_awlen) \
    ,.axi_m``P``_awsize(axi_m``P``_awsize) \
    ,.axi_m``P``_awburst(axi_m``P``_awburst) \
    ,.axi_m``P``_wvalid(axi_m``P``_wvalid) \
    ,.axi_m``P``_wready(axi_m``P``_wready) \
    ,.axi_m``P``_wdata(axi_m``P``_wdata) \
    ,.axi_m``P``_wstrb(axi_m``P``_wstrb) \
    ,.axi_m``P``_wlast(axi_m``P``_wlast) \
    ,.axi_m``P``_bvalid(axi_m``P``_bvalid) \
    ,.axi_m``P``_bready(axi_m``P``_bready) \
    ,.axi_m``P``_bid(axi_m``P``_bid) \
    ,.axi_m``P``_bresp(axi_m``P``_bresp) \
    ,.axi_m``P``_arvalid(axi_m``P``_arvalid) \
    ,.axi_m``P``_arready(axi_m``P``_arready) \
    ,.axi_m``P``_araddr(axi_m``P``_araddr) \
    ,.axi_m``P``_arid(axi_m``P``_arid) \
    ,.axi_m``P``_arlen(axi_m``P``_arlen) \
    ,.axi_m``P``_arsize(axi_m``P``_arsize) \
    ,.axi_m``P``_arburst(axi_m``P``_arburst) \
    ,.axi_m``P``_rvalid(axi_m``P``_rvalid) \
    ,.axi_m``P``_rready(axi_m``P``_rready) \
    ,.axi_m``P``_rdata(axi_m``P``_rdata) \
    ,.axi_m``P``_rid(axi_m``P``_rid) \
    ,.axi_m``P``_rresp(axi_m``P``_rresp) \
    ,.axi_m``P``_rlast(axi_m``P``_rlast)

    // Passive all-output monitor taps of the AXI buses
    `define VENUS_V3_AXI_MON(P) \
    ,.mon_axi``P``_awvalid                    () /*output*/ \
    ,.mon_axi``P``_awready                    () /*output*/ \
    ,.mon_axi``P``_awaddr                     () /*output*/ \
    ,.mon_axi``P``_awid                       () /*output*/ \
    ,.mon_axi``P``_awlen                      () /*output*/ \
    ,.mon_axi``P``_awsize                     () /*output*/ \
    ,.mon_axi``P``_awburst                    () /*output*/ \
    ,.mon_axi``P``_wvalid                     () /*output*/ \
    ,.mon_axi``P``_wready                     () /*output*/ \
    ,.mon_axi``P``_wdata                      () /*output*/ \
    ,.mon_axi``P``_wstrb                      () /*output*/ \
    ,.mon_axi``P``_wlast                      () /*output*/ \
    ,.mon_axi``P``_bvalid                     () /*output*/ \
    ,.mon_axi``P``_bready                     () /*output*/ \
    ,.mon_axi``P``_bid                        () /*output*/ \
    ,.mon_axi``P``_bresp                      () /*output*/ \
    ,.mon_axi``P``_arvalid                    () /*output*/ \
    ,.mon_axi``P``_arready                    () /*output*/ \
    ,.mon_axi``P``_araddr                     () /*output*/ \
    ,.mon_axi``P``_arid                       () /*output*/ \
    ,.mon_axi``P``_arlen                      () /*output*/ \
    ,.mon_axi``P``_arsize                     () /*output*/ \
    ,.mon_axi``P``_arburst                    () /*output*/ \
    ,.mon_axi``P``_rvalid                     () /*output*/ \
    ,.mon_axi``P``_rready                     () /*output*/ \
    ,.mon_axi``P``_rdata                      () /*output*/ \
    ,.mon_axi``P``_rid                        () /*output*/ \
    ,.mon_axi``P``_rresp                      () /*output*/ \
    ,.mon_axi``P``_rlast                      () /*output*/

// 例化的时候用
`define VENUS_V3_T1_CONN(P) \
        .cchi_t1p``P``_rxevt_valid(cchi_t1p``P``_rxevt_valid), \
        .cchi_t1p``P``_rxevt_bits_TxnID(cchi_t1p``P``_rxevt_bits_TxnID), \
        .cchi_t1p``P``_rxevt_bits_SrcID(cchi_t1p``P``_rxevt_bits_SrcID), \
        .cchi_t1p``P``_rxevt_bits_TgtID(cchi_t1p``P``_rxevt_bits_TgtID), \
        .cchi_t1p``P``_rxevt_bits_Opcode(cchi_t1p``P``_rxevt_bits_Opcode), \
        .cchi_t1p``P``_rxevt_bits_Addr(cchi_t1p``P``_rxevt_bits_Addr), \
        .cchi_t1p``P``_rxevt_bits_NS(cchi_t1p``P``_rxevt_bits_NS), \
        .cchi_t1p``P``_rxevt_bits_MemAttr(cchi_t1p``P``_rxevt_bits_MemAttr), \
        .cchi_t1p``P``_rxevt_bits_WayValid(cchi_t1p``P``_rxevt_bits_WayValid), \
        .cchi_t1p``P``_rxevt_bits_Way(cchi_t1p``P``_rxevt_bits_Way), \
        .cchi_t1p``P``_rxevt_bits_TraceTag(cchi_t1p``P``_rxevt_bits_TraceTag), \
        .cchi_t1p``P``_rxevt_ready(cchi_t1p``P``_rxevt_ready), \
        .cchi_t1p``P``_rxreq_valid(cchi_t1p``P``_rxreq_valid), \
        .cchi_t1p``P``_rxreq_bits_TxnID(cchi_t1p``P``_rxreq_bits_TxnID), \
        .cchi_t1p``P``_rxreq_bits_SrcID(cchi_t1p``P``_rxreq_bits_SrcID), \
        .cchi_t1p``P``_rxreq_bits_TgtID(cchi_t1p``P``_rxreq_bits_TgtID), \
        .cchi_t1p``P``_rxreq_bits_Opcode(cchi_t1p``P``_rxreq_bits_Opcode), \
        .cchi_t1p``P``_rxreq_bits_Size(cchi_t1p``P``_rxreq_bits_Size), \
        .cchi_t1p``P``_rxreq_bits_Addr(cchi_t1p``P``_rxreq_bits_Addr), \
        .cchi_t1p``P``_rxreq_bits_TagAlias(cchi_t1p``P``_rxreq_bits_TagAlias), \
        .cchi_t1p``P``_rxreq_bits_NS(cchi_t1p``P``_rxreq_bits_NS), \
        .cchi_t1p``P``_rxreq_bits_Order(cchi_t1p``P``_rxreq_bits_Order), \
        .cchi_t1p``P``_rxreq_bits_MemAttr(cchi_t1p``P``_rxreq_bits_MemAttr), \
        .cchi_t1p``P``_rxreq_bits_Excl(cchi_t1p``P``_rxreq_bits_Excl), \
        .cchi_t1p``P``_rxreq_bits_ExpCompData(cchi_t1p``P``_rxreq_bits_ExpCompData), \
        .cchi_t1p``P``_rxreq_bits_TraceTag(cchi_t1p``P``_rxreq_bits_TraceTag), \
        .cchi_t1p``P``_rxreq_bits_WayValid(cchi_t1p``P``_rxreq_bits_WayValid), \
        .cchi_t1p``P``_rxreq_bits_Way(cchi_t1p``P``_rxreq_bits_Way), \
        .cchi_t1p``P``_rxreq_ready(cchi_t1p``P``_rxreq_ready), \
        .cchi_t1p``P``_txsnp_ready(cchi_t1p``P``_txsnp_ready), \
        .cchi_t1p``P``_txsnp_valid(cchi_t1p``P``_txsnp_valid), \
        .cchi_t1p``P``_txsnp_bits_TxnID(cchi_t1p``P``_txsnp_bits_TxnID), \
        .cchi_t1p``P``_txsnp_bits_SrcID(cchi_t1p``P``_txsnp_bits_SrcID), \
        .cchi_t1p``P``_txsnp_bits_TgtID(cchi_t1p``P``_txsnp_bits_TgtID), \
        .cchi_t1p``P``_txsnp_bits_Opcode(cchi_t1p``P``_txsnp_bits_Opcode), \
        .cchi_t1p``P``_txsnp_bits_Addr(cchi_t1p``P``_txsnp_bits_Addr), \
        .cchi_t1p``P``_txsnp_bits_NS(cchi_t1p``P``_txsnp_bits_NS), \
        .cchi_t1p``P``_txsnp_bits_TraceTag(cchi_t1p``P``_txsnp_bits_TraceTag), \
        .cchi_t1p``P``_txrsp_ready(cchi_t1p``P``_txrsp_ready), \
        .cchi_t1p``P``_txrsp_valid(cchi_t1p``P``_txrsp_valid), \
        .cchi_t1p``P``_txrsp_bits_TxnID(cchi_t1p``P``_txrsp_bits_TxnID), \
        .cchi_t1p``P``_txrsp_bits_SrcID(cchi_t1p``P``_txrsp_bits_SrcID), \
        .cchi_t1p``P``_txrsp_bits_TgtID(cchi_t1p``P``_txrsp_bits_TgtID), \
        .cchi_t1p``P``_txrsp_bits_DBID(cchi_t1p``P``_txrsp_bits_DBID), \
        .cchi_t1p``P``_txrsp_bits_Opcode(cchi_t1p``P``_txrsp_bits_Opcode), \
        .cchi_t1p``P``_txrsp_bits_RespErr(cchi_t1p``P``_txrsp_bits_RespErr), \
        .cchi_t1p``P``_txrsp_bits_Resp(cchi_t1p``P``_txrsp_bits_Resp), \
        .cchi_t1p``P``_txrsp_bits_CBusy(cchi_t1p``P``_txrsp_bits_CBusy), \
        .cchi_t1p``P``_txrsp_bits_WayValid(cchi_t1p``P``_txrsp_bits_WayValid), \
        .cchi_t1p``P``_txrsp_bits_Way(cchi_t1p``P``_txrsp_bits_Way), \
        .cchi_t1p``P``_txrsp_bits_TraceTag(cchi_t1p``P``_txrsp_bits_TraceTag), \
        .cchi_t1p``P``_rxrsp_valid(cchi_t1p``P``_rxrsp_valid), \
        .cchi_t1p``P``_rxrsp_bits_TxnID(cchi_t1p``P``_rxrsp_bits_TxnID), \
        .cchi_t1p``P``_rxrsp_bits_SrcID(cchi_t1p``P``_rxrsp_bits_SrcID), \
        .cchi_t1p``P``_rxrsp_bits_TgtID(cchi_t1p``P``_rxrsp_bits_TgtID), \
        .cchi_t1p``P``_rxrsp_bits_Opcode(cchi_t1p``P``_rxrsp_bits_Opcode), \
        .cchi_t1p``P``_rxrsp_bits_RespErr(cchi_t1p``P``_rxrsp_bits_RespErr), \
        .cchi_t1p``P``_rxrsp_bits_Resp(cchi_t1p``P``_rxrsp_bits_Resp), \
        .cchi_t1p``P``_rxrsp_bits_TraceTag(cchi_t1p``P``_rxrsp_bits_TraceTag), \
        .cchi_t1p``P``_rxrsp_ready(cchi_t1p``P``_rxrsp_ready), \
        .cchi_t1p``P``_txdat_ready(cchi_t1p``P``_txdat_ready), \
        .cchi_t1p``P``_txdat_valid(cchi_t1p``P``_txdat_valid), \
        .cchi_t1p``P``_txdat_bits_TxnID(cchi_t1p``P``_txdat_bits_TxnID), \
        .cchi_t1p``P``_txdat_bits_SrcID(cchi_t1p``P``_txdat_bits_SrcID), \
        .cchi_t1p``P``_txdat_bits_TgtID(cchi_t1p``P``_txdat_bits_TgtID), \
        .cchi_t1p``P``_txdat_bits_DBID(cchi_t1p``P``_txdat_bits_DBID), \
        .cchi_t1p``P``_txdat_bits_Opcode(cchi_t1p``P``_txdat_bits_Opcode), \
        .cchi_t1p``P``_txdat_bits_RespErr(cchi_t1p``P``_txdat_bits_RespErr), \
        .cchi_t1p``P``_txdat_bits_Resp(cchi_t1p``P``_txdat_bits_Resp), \
        .cchi_t1p``P``_txdat_bits_DataSource(cchi_t1p``P``_txdat_bits_DataSource), \
        .cchi_t1p``P``_txdat_bits_CBusy(cchi_t1p``P``_txdat_bits_CBusy), \
        .cchi_t1p``P``_txdat_bits_DataID(cchi_t1p``P``_txdat_bits_DataID), \
        .cchi_t1p``P``_txdat_bits_Data(cchi_t1p``P``_txdat_bits_Data), \
        .cchi_t1p``P``_txdat_bits_WayValid(cchi_t1p``P``_txdat_bits_WayValid), \
        .cchi_t1p``P``_txdat_bits_Way(cchi_t1p``P``_txdat_bits_Way), \
        .cchi_t1p``P``_txdat_bits_TraceTag(cchi_t1p``P``_txdat_bits_TraceTag), \
        .cchi_t1p``P``_rxdat_valid(cchi_t1p``P``_rxdat_valid), \
        .cchi_t1p``P``_rxdat_bits_TxnID(cchi_t1p``P``_rxdat_bits_TxnID), \
        .cchi_t1p``P``_rxdat_bits_SrcID(cchi_t1p``P``_rxdat_bits_SrcID), \
        .cchi_t1p``P``_rxdat_bits_TgtID(cchi_t1p``P``_rxdat_bits_TgtID), \
        .cchi_t1p``P``_rxdat_bits_Opcode(cchi_t1p``P``_rxdat_bits_Opcode), \
        .cchi_t1p``P``_rxdat_bits_RespErr(cchi_t1p``P``_rxdat_bits_RespErr), \
        .cchi_t1p``P``_rxdat_bits_Resp(cchi_t1p``P``_rxdat_bits_Resp), \
        .cchi_t1p``P``_rxdat_bits_DataID(cchi_t1p``P``_rxdat_bits_DataID), \
        .cchi_t1p``P``_rxdat_bits_Data(cchi_t1p``P``_rxdat_bits_Data), \
        .cchi_t1p``P``_rxdat_bits_BE(cchi_t1p``P``_rxdat_bits_BE), \
        .cchi_t1p``P``_rxdat_bits_TraceTag(cchi_t1p``P``_rxdat_bits_TraceTag), \
        .cchi_t1p``P``_rxdat_ready(cchi_t1p``P``_rxdat_ready)


    // DCache To Venus Logic Signals
    `define DCACHE_TO_VENUS_LOGIC_SIGNALS \
logic         io_l2_req_ready;              \
logic         io_l2_req_valid;              \
logic [7:0]   io_l2_req_bits_txnID;         \
logic [6:0]   io_l2_req_bits_srcID;         \
logic [6:0]   io_l2_req_bits_tgtID;         \
logic [5:0]   io_l2_req_bits_opcode;        \
logic [2:0]   io_l2_req_bits_size;          \
logic [47:0]  io_l2_req_bits_addr;          \
logic [1:0]   io_l2_req_bits_tagAlias;      \
logic         io_l2_req_bits_ns;            \
logic [1:0]   io_l2_req_bits_order;         \
logic [3:0]   io_l2_req_bits_memAttr;       \
logic         io_l2_req_bits_excl;          \
logic         io_l2_req_bits_expCompData;   \
logic         io_l2_req_bits_expCompStash;  \
logic         io_l2_req_bits_wayValid;      \
logic [1:0]   io_l2_req_bits_way;           \
logic         io_l2_req_bits_traceTag;      \
logic         io_l2_evt_ready;              \
logic         io_l2_evt_valid;              \
logic [7:0]   io_l2_evt_bits_txnID;         \
logic [6:0]   io_l2_evt_bits_srcID;         \
logic [6:0]   io_l2_evt_bits_tgtID;         \
logic         io_l2_evt_bits_opcode;        \
logic [47:0]  io_l2_evt_bits_addr;          \
logic         io_l2_evt_bits_ns;            \
logic         io_l2_evt_bits_memAttr;       \
logic         io_l2_evt_bits_wayValid;      \
logic [1:0]   io_l2_evt_bits_way;           \
logic         io_l2_evt_bits_traceTag;      \
logic         io_l2_txRsp_ready;            \
logic         io_l2_txRsp_valid;            \
logic [7:0]   io_l2_txRsp_bits_txnID;       \
logic [6:0]   io_l2_txRsp_bits_srcID;       \
logic [6:0]   io_l2_txRsp_bits_tgtID;       \
logic         io_l2_txRsp_bits_opcode;      \
logic [1:0]   io_l2_txRsp_bits_respErr;     \
logic [2:0]   io_l2_txRsp_bits_resp;        \
logic         io_l2_txRsp_bits_traceTag;    \
logic         io_l2_txDat_ready;            \
logic         io_l2_txDat_valid;            \
logic [7:0]   io_l2_txDat_bits_txnID;       \
logic [6:0]   io_l2_txDat_bits_srcID;       \
logic [6:0]   io_l2_txDat_bits_tgtID;       \
logic [1:0]   io_l2_txDat_bits_opcode;      \
logic [1:0]   io_l2_txDat_bits_respErr;     \
logic [2:0]   io_l2_txDat_bits_resp;        \
logic         io_l2_txDat_bits_dataID;      \
logic [255:0] io_l2_txDat_bits_data;        \
logic [31:0]  io_l2_txDat_bits_byteEnable;  \
logic         io_l2_txDat_bits_traceTag;    \
logic         io_l2_rxRsp_ready;            \
logic         io_l2_rxRsp_valid;            \
logic [7:0]   io_l2_rxRsp_bits_txnID;       \
logic [6:0]   io_l2_rxRsp_bits_srcID;       \
logic [6:0]   io_l2_rxRsp_bits_tgtID;       \
logic [2:0]   io_l2_rxRsp_bits_opcode;      \
logic [7:0]   io_l2_rxRsp_bits_dbID;        \
logic [1:0]   io_l2_rxRsp_bits_respErr;     \
logic [2:0]   io_l2_rxRsp_bits_resp;        \
logic [2:0]   io_l2_rxRsp_bits_cBusy;       \
logic         io_l2_rxRsp_bits_traceTag;    \
logic         io_l2_rxDat_ready;            \
logic         io_l2_rxDat_valid;            \
logic [7:0]   io_l2_rxDat_bits_txnID;       \
logic [6:0]   io_l2_rxDat_bits_srcID;       \
logic [6:0]   io_l2_rxDat_bits_tgtID;       \
logic         io_l2_rxDat_bits_opcode;      \
logic [7:0]   io_l2_rxDat_bits_dbID;        \
logic [1:0]   io_l2_rxDat_bits_respErr;     \
logic [2:0]   io_l2_rxDat_bits_resp;        \
logic [4:0]   io_l2_rxDat_bits_dataSource;  \
logic [2:0]   io_l2_rxDat_bits_cBusy;       \
logic         io_l2_rxDat_bits_dataID;      \
logic [255:0] io_l2_rxDat_bits_data;        \
logic         io_l2_rxDat_bits_traceTag;    \
logic         io_l2_rxSnp_ready;            \
logic         io_l2_rxSnp_valid;            \
logic [7:0]   io_l2_rxSnp_bits_txnID;       \
logic [6:0]   io_l2_rxSnp_bits_srcID;       \
logic [6:0]   io_l2_rxSnp_bits_tgtID;       \
logic [1:0]   io_l2_rxSnp_bits_opcode;      \
logic [44:0]  io_l2_rxSnp_bits_addr;        \
logic [1:0]   io_l2_rxSnp_bits_tagAlias;    \
logic         io_l2_rxSnp_bits_ns;          \
logic         io_l2_rxSnp_bits_traceTag;


// DCache CPU side: top-level ports and DCache instance connections
`define DCACHE_CPU_PORT_DECL \
    output          io_load_0_req_ready, \
    input           io_load_0_req_valid, \
    input  [4:0]    io_load_0_req_bits_cmd, \
    input  [47:0]   io_load_0_req_bits_vaddr, \
    input  [47:0]   io_load_0_req_bits_vaddr_dup, \
    input  [127:0]  io_load_0_req_bits_data, \
    input  [15:0]   io_load_0_req_bits_mask, \
    input  [5:0]    io_load_0_req_bits_id, \
    input  [3:0]    io_load_0_req_bits_instrtype, \
    input           io_load_0_req_bits_isFirstIssue, \
    input  [3:0]    io_load_0_req_bits_replayCarry_real_way_en, \
    input           io_load_0_req_bits_replayCarry_valid, \
    input           io_load_0_req_bits_lqIdx_flag, \
    input  [3:0]    io_load_0_req_bits_lqIdx_value, \
    input           io_load_0_resp_ready, \
    output          io_load_0_resp_valid, \
    output [127:0]  io_load_0_resp_bits_data, \
    output [5:0]    io_load_0_resp_bits_id, \
    output          io_load_0_resp_bits_miss, \
    output          io_load_0_resp_bits_replay, \
    output [3:0]    io_load_0_resp_bits_replayCarry_real_way_en, \
    output          io_load_0_resp_bits_replayCarry_valid, \
    output [3:0]    io_load_0_resp_bits_mshr_id, \
    output          io_load_0_resp_bits_handled, \
    output          io_load_0_resp_bits_real_miss, \
    output          io_load_0_resp_bits_replacementUpdated, \
    input           io_load_0_s1_kill_data_read, \
    input           io_load_0_s1_kill, \
    input           io_load_0_s2_kill, \
    input  [47:0]   io_load_0_s0_pc, \
    input  [47:0]   io_load_0_s1_pc, \
    input  [47:0]   io_load_0_s2_pc, \
    input           io_load_0_replacementUpdated, \
    input           io_load_0_is128Req, \
    input  [47:0]   io_load_0_s1_paddr_dup_lsu, \
    input  [47:0]   io_load_0_s1_paddr_dup_dcache, \
    output          io_load_0_s1_disable_fast_wakeup, \
    output          io_load_0_s2_hit, \
    output          io_load_0_s2_first_hit, \
    output          io_load_0_s2_bank_conflict, \
    output          io_load_0_s2_wpu_pred_fail, \
    output          io_load_0_s2_mq_nack, \
    output          io_load_1_req_ready, \
    input           io_load_1_req_valid, \
    input  [4:0]    io_load_1_req_bits_cmd, \
    input  [47:0]   io_load_1_req_bits_vaddr, \
    input  [47:0]   io_load_1_req_bits_vaddr_dup, \
    input  [127:0]  io_load_1_req_bits_data, \
    input  [15:0]   io_load_1_req_bits_mask, \
    input  [5:0]    io_load_1_req_bits_id, \
    input  [3:0]    io_load_1_req_bits_instrtype, \
    input           io_load_1_req_bits_isFirstIssue, \
    input  [3:0]    io_load_1_req_bits_replayCarry_real_way_en, \
    input           io_load_1_req_bits_replayCarry_valid, \
    input           io_load_1_req_bits_lqIdx_flag, \
    input  [3:0]    io_load_1_req_bits_lqIdx_value, \
    input           io_load_1_resp_ready, \
    output          io_load_1_resp_valid, \
    output [127:0]  io_load_1_resp_bits_data, \
    output [5:0]    io_load_1_resp_bits_id, \
    output          io_load_1_resp_bits_miss, \
    output          io_load_1_resp_bits_replay, \
    output [3:0]    io_load_1_resp_bits_replayCarry_real_way_en, \
    output          io_load_1_resp_bits_replayCarry_valid, \
    output [3:0]    io_load_1_resp_bits_mshr_id, \
    output          io_load_1_resp_bits_handled, \
    output          io_load_1_resp_bits_real_miss, \
    output          io_load_1_resp_bits_replacementUpdated, \
    input           io_load_1_s1_kill_data_read, \
    input           io_load_1_s1_kill, \
    input           io_load_1_s2_kill, \
    input  [47:0]   io_load_1_s0_pc, \
    input  [47:0]   io_load_1_s1_pc, \
    input  [47:0]   io_load_1_s2_pc, \
    input           io_load_1_replacementUpdated, \
    input           io_load_1_is128Req, \
    input  [47:0]   io_load_1_s1_paddr_dup_lsu, \
    input  [47:0]   io_load_1_s1_paddr_dup_dcache, \
    output          io_load_1_s1_disable_fast_wakeup, \
    output          io_load_1_s2_hit, \
    output          io_load_1_s2_first_hit, \
    output          io_load_1_s2_bank_conflict, \
    output          io_load_1_s2_wpu_pred_fail, \
    output          io_load_1_s2_mq_nack, \
    output          io_store_req_ready, \
    input           io_store_req_valid, \
    input  [4:0]    io_store_req_bits_cmd, \
    input  [47:0]   io_store_req_bits_vaddr, \
    input  [47:0]   io_store_req_bits_addr, \
    input  [511:0]  io_store_req_bits_data, \
    input  [63:0]   io_store_req_bits_mask, \
    input  [5:0]    io_store_req_bits_id, \
    input           io_store_main_pipe_hit_resp_ready, \
    output          io_store_main_pipe_hit_resp_valid, \
    output          io_store_main_pipe_hit_resp_bits_miss, \
    output          io_store_main_pipe_hit_resp_bits_replay, \
    output [5:0]    io_store_main_pipe_hit_resp_bits_id, \
    input           io_store_refill_hit_resp_ready, \
    output          io_store_refill_hit_resp_valid, \
    output          io_store_refill_hit_resp_bits_miss, \
    output          io_store_refill_hit_resp_bits_replay, \
    output [5:0]    io_store_refill_hit_resp_bits_id, \
    input           io_store_replay_resp_ready, \
    output          io_store_replay_resp_valid, \
    output          io_store_replay_resp_bits_miss, \
    output          io_store_replay_resp_bits_replay, \
    output [5:0]    io_store_replay_resp_bits_id, \
    output          io_atomics_req_ready, \
    input           io_atomics_req_valid, \
    input  [4:0]    io_atomics_req_bits_cmd, \
    input  [47:0]   io_atomics_req_bits_vaddr, \
    input  [47:0]   io_atomics_req_bits_addr, \
    input  [1:0]    io_atomics_req_bits_tagAlias, \
    input  [5:0]    io_atomics_req_bits_id, \
    input  [3:0]    io_atomics_req_bits_missId, \
    input  [47:0]   io_atomics_req_bits_pc, \
    input  [2:0]    io_atomics_req_bits_wordIdx, \
    input  [127:0]  io_atomics_req_bits_amoData, \
    input  [15:0]   io_atomics_req_bits_amoMask, \
    input  [127:0]  io_atomics_req_bits_amoCmp, \
    input  [1:0]    io_atomics_req_bits_probeOp, \
    input           io_atomics_req_bits_needData, \
    input  [7:0]    io_atomics_req_bits_snpTxnId, \
    input  [3:0]    io_atomics_req_bits_replaceWay, \
    input           io_atomics_resp_ready, \
    output          io_atomics_resp_valid, \
    output [5:0]    io_atomics_resp_bits_id, \
    output [4:0]    io_atomics_resp_bits_cmd, \
    output [127:0]  io_atomics_resp_bits_data, \
    output          io_atomics_resp_bits_success, \
    input           io_atomics_replay_ready, \
    output          io_atomics_replay_valid, \
    output          io_atomics_replay_bits_miss, \
    output          io_atomics_replay_bits_replay, \
    output [5:0]    io_atomics_replay_bits_id, \
    output          io_cmoReq_ready, \
    input           io_cmoReq_valid, \
    input  [5:0]    io_cmoReq_bits_id, \
    input  [5:0]    io_cmoReq_bits_opcode, \
    input  [47:0]   io_cmoReq_bits_addr, \
    input  [1:0]    io_cmoReq_bits_alias, \
    input           io_cmoResp_ready, \
    output          io_cmoResp_valid, \
    output [5:0]    io_cmoResp_bits_id, \
    output          io_cmoResp_bits_done, \
    output          io_cmoResp_bits_error, \
    input           io_wfi_req, \
    output          io_wfi_safe, \
    output          io_forwardChi_valid, \
    output [3:0]    io_forwardChi_bits_id, \
    output          io_forwardChi_bits_half, \
    output [255:0]  io_forwardChi_bits_data, \
    input  [3:0]    io_forwardMshr_id, \
    input           io_forwardMshr_half, \
    output          io_forwardMshr_data_valid, \
    output [255:0]  io_forwardMshr_data_bits, \
    input           io_refillWakeup_ready, \
    output          io_refillWakeup_valid, \
    output [3:0]    io_refillWakeup_bits_id, \
    output [47:0]   io_refillWakeup_bits_addr, \
    output [1:0]    io_refillWakeup_bits_alias, \
    input           io_loadReplay_ready, \
    output          io_loadReplay_valid, \
    output [3:0]    io_loadReplay_bits_id, \
    output [47:0]   io_loadReplay_bits_addr, \
    output [1:0]    io_loadReplay_bits_alias

`define DCACHE_CPU_PORT_CONN \
    ,.io_load_0_req_ready(io_load_0_req_ready) \
    ,.io_load_0_req_valid(io_load_0_req_valid) \
    ,.io_load_0_req_bits_cmd(io_load_0_req_bits_cmd) \
    ,.io_load_0_req_bits_vaddr(io_load_0_req_bits_vaddr) \
    ,.io_load_0_req_bits_vaddr_dup(io_load_0_req_bits_vaddr_dup) \
    ,.io_load_0_req_bits_data(io_load_0_req_bits_data) \
    ,.io_load_0_req_bits_mask(io_load_0_req_bits_mask) \
    ,.io_load_0_req_bits_id(io_load_0_req_bits_id) \
    ,.io_load_0_req_bits_instrtype(io_load_0_req_bits_instrtype) \
    ,.io_load_0_req_bits_isFirstIssue(io_load_0_req_bits_isFirstIssue) \
    ,.io_load_0_req_bits_replayCarry_real_way_en(io_load_0_req_bits_replayCarry_real_way_en) \
    ,.io_load_0_req_bits_replayCarry_valid(io_load_0_req_bits_replayCarry_valid) \
    ,.io_load_0_req_bits_lqIdx_flag(io_load_0_req_bits_lqIdx_flag) \
    ,.io_load_0_req_bits_lqIdx_value(io_load_0_req_bits_lqIdx_value) \
    ,.io_load_0_resp_ready(io_load_0_resp_ready) \
    ,.io_load_0_resp_valid(io_load_0_resp_valid) \
    ,.io_load_0_resp_bits_data(io_load_0_resp_bits_data) \
    ,.io_load_0_resp_bits_id(io_load_0_resp_bits_id) \
    ,.io_load_0_resp_bits_miss(io_load_0_resp_bits_miss) \
    ,.io_load_0_resp_bits_replay(io_load_0_resp_bits_replay) \
    ,.io_load_0_resp_bits_replayCarry_real_way_en(io_load_0_resp_bits_replayCarry_real_way_en) \
    ,.io_load_0_resp_bits_replayCarry_valid(io_load_0_resp_bits_replayCarry_valid) \
    ,.io_load_0_resp_bits_mshr_id(io_load_0_resp_bits_mshr_id) \
    ,.io_load_0_resp_bits_handled(io_load_0_resp_bits_handled) \
    ,.io_load_0_resp_bits_real_miss(io_load_0_resp_bits_real_miss) \
    ,.io_load_0_resp_bits_replacementUpdated(io_load_0_resp_bits_replacementUpdated) \
    ,.io_load_0_s1_kill_data_read(io_load_0_s1_kill_data_read) \
    ,.io_load_0_s1_kill(io_load_0_s1_kill) \
    ,.io_load_0_s2_kill(io_load_0_s2_kill) \
    ,.io_load_0_s0_pc(io_load_0_s0_pc) \
    ,.io_load_0_s1_pc(io_load_0_s1_pc) \
    ,.io_load_0_s2_pc(io_load_0_s2_pc) \
    ,.io_load_0_replacementUpdated(io_load_0_replacementUpdated) \
    ,.io_load_0_is128Req(io_load_0_is128Req) \
    ,.io_load_0_s1_paddr_dup_lsu(io_load_0_s1_paddr_dup_lsu) \
    ,.io_load_0_s1_paddr_dup_dcache(io_load_0_s1_paddr_dup_dcache) \
    ,.io_load_0_s1_disable_fast_wakeup(io_load_0_s1_disable_fast_wakeup) \
    ,.io_load_0_s2_hit(io_load_0_s2_hit) \
    ,.io_load_0_s2_first_hit(io_load_0_s2_first_hit) \
    ,.io_load_0_s2_bank_conflict(io_load_0_s2_bank_conflict) \
    ,.io_load_0_s2_wpu_pred_fail(io_load_0_s2_wpu_pred_fail) \
    ,.io_load_0_s2_mq_nack(io_load_0_s2_mq_nack) \
    ,.io_load_1_req_ready(io_load_1_req_ready) \
    ,.io_load_1_req_valid(io_load_1_req_valid) \
    ,.io_load_1_req_bits_cmd(io_load_1_req_bits_cmd) \
    ,.io_load_1_req_bits_vaddr(io_load_1_req_bits_vaddr) \
    ,.io_load_1_req_bits_vaddr_dup(io_load_1_req_bits_vaddr_dup) \
    ,.io_load_1_req_bits_data(io_load_1_req_bits_data) \
    ,.io_load_1_req_bits_mask(io_load_1_req_bits_mask) \
    ,.io_load_1_req_bits_id(io_load_1_req_bits_id) \
    ,.io_load_1_req_bits_instrtype(io_load_1_req_bits_instrtype) \
    ,.io_load_1_req_bits_isFirstIssue(io_load_1_req_bits_isFirstIssue) \
    ,.io_load_1_req_bits_replayCarry_real_way_en(io_load_1_req_bits_replayCarry_real_way_en) \
    ,.io_load_1_req_bits_replayCarry_valid(io_load_1_req_bits_replayCarry_valid) \
    ,.io_load_1_req_bits_lqIdx_flag(io_load_1_req_bits_lqIdx_flag) \
    ,.io_load_1_req_bits_lqIdx_value(io_load_1_req_bits_lqIdx_value) \
    ,.io_load_1_resp_ready(io_load_1_resp_ready) \
    ,.io_load_1_resp_valid(io_load_1_resp_valid) \
    ,.io_load_1_resp_bits_data(io_load_1_resp_bits_data) \
    ,.io_load_1_resp_bits_id(io_load_1_resp_bits_id) \
    ,.io_load_1_resp_bits_miss(io_load_1_resp_bits_miss) \
    ,.io_load_1_resp_bits_replay(io_load_1_resp_bits_replay) \
    ,.io_load_1_resp_bits_replayCarry_real_way_en(io_load_1_resp_bits_replayCarry_real_way_en) \
    ,.io_load_1_resp_bits_replayCarry_valid(io_load_1_resp_bits_replayCarry_valid) \
    ,.io_load_1_resp_bits_mshr_id(io_load_1_resp_bits_mshr_id) \
    ,.io_load_1_resp_bits_handled(io_load_1_resp_bits_handled) \
    ,.io_load_1_resp_bits_real_miss(io_load_1_resp_bits_real_miss) \
    ,.io_load_1_resp_bits_replacementUpdated(io_load_1_resp_bits_replacementUpdated) \
    ,.io_load_1_s1_kill_data_read(io_load_1_s1_kill_data_read) \
    ,.io_load_1_s1_kill(io_load_1_s1_kill) \
    ,.io_load_1_s2_kill(io_load_1_s2_kill) \
    ,.io_load_1_s0_pc(io_load_1_s0_pc) \
    ,.io_load_1_s1_pc(io_load_1_s1_pc) \
    ,.io_load_1_s2_pc(io_load_1_s2_pc) \
    ,.io_load_1_replacementUpdated(io_load_1_replacementUpdated) \
    ,.io_load_1_is128Req(io_load_1_is128Req) \
    ,.io_load_1_s1_paddr_dup_lsu(io_load_1_s1_paddr_dup_lsu) \
    ,.io_load_1_s1_paddr_dup_dcache(io_load_1_s1_paddr_dup_dcache) \
    ,.io_load_1_s1_disable_fast_wakeup(io_load_1_s1_disable_fast_wakeup) \
    ,.io_load_1_s2_hit(io_load_1_s2_hit) \
    ,.io_load_1_s2_first_hit(io_load_1_s2_first_hit) \
    ,.io_load_1_s2_bank_conflict(io_load_1_s2_bank_conflict) \
    ,.io_load_1_s2_wpu_pred_fail(io_load_1_s2_wpu_pred_fail) \
    ,.io_load_1_s2_mq_nack(io_load_1_s2_mq_nack) \
    ,.io_store_req_ready(io_store_req_ready) \
    ,.io_store_req_valid(io_store_req_valid) \
    ,.io_store_req_bits_cmd(io_store_req_bits_cmd) \
    ,.io_store_req_bits_vaddr(io_store_req_bits_vaddr) \
    ,.io_store_req_bits_addr(io_store_req_bits_addr) \
    ,.io_store_req_bits_data(io_store_req_bits_data) \
    ,.io_store_req_bits_mask(io_store_req_bits_mask) \
    ,.io_store_req_bits_id(io_store_req_bits_id) \
    ,.io_store_main_pipe_hit_resp_ready(io_store_main_pipe_hit_resp_ready) \
    ,.io_store_main_pipe_hit_resp_valid(io_store_main_pipe_hit_resp_valid) \
    ,.io_store_main_pipe_hit_resp_bits_miss(io_store_main_pipe_hit_resp_bits_miss) \
    ,.io_store_main_pipe_hit_resp_bits_replay(io_store_main_pipe_hit_resp_bits_replay) \
    ,.io_store_main_pipe_hit_resp_bits_id(io_store_main_pipe_hit_resp_bits_id) \
    ,.io_store_refill_hit_resp_ready(io_store_refill_hit_resp_ready) \
    ,.io_store_refill_hit_resp_valid(io_store_refill_hit_resp_valid) \
    ,.io_store_refill_hit_resp_bits_miss(io_store_refill_hit_resp_bits_miss) \
    ,.io_store_refill_hit_resp_bits_replay(io_store_refill_hit_resp_bits_replay) \
    ,.io_store_refill_hit_resp_bits_id(io_store_refill_hit_resp_bits_id) \
    ,.io_store_replay_resp_ready(io_store_replay_resp_ready) \
    ,.io_store_replay_resp_valid(io_store_replay_resp_valid) \
    ,.io_store_replay_resp_bits_miss(io_store_replay_resp_bits_miss) \
    ,.io_store_replay_resp_bits_replay(io_store_replay_resp_bits_replay) \
    ,.io_store_replay_resp_bits_id(io_store_replay_resp_bits_id) \
    ,.io_atomics_req_ready(io_atomics_req_ready) \
    ,.io_atomics_req_valid(io_atomics_req_valid) \
    ,.io_atomics_req_bits_cmd(io_atomics_req_bits_cmd) \
    ,.io_atomics_req_bits_vaddr(io_atomics_req_bits_vaddr) \
    ,.io_atomics_req_bits_addr(io_atomics_req_bits_addr) \
    ,.io_atomics_req_bits_tagAlias(io_atomics_req_bits_tagAlias) \
    ,.io_atomics_req_bits_id(io_atomics_req_bits_id) \
    ,.io_atomics_req_bits_missId(io_atomics_req_bits_missId) \
    ,.io_atomics_req_bits_pc(io_atomics_req_bits_pc) \
    ,.io_atomics_req_bits_wordIdx(io_atomics_req_bits_wordIdx) \
    ,.io_atomics_req_bits_amoData(io_atomics_req_bits_amoData) \
    ,.io_atomics_req_bits_amoMask(io_atomics_req_bits_amoMask) \
    ,.io_atomics_req_bits_amoCmp(io_atomics_req_bits_amoCmp) \
    ,.io_atomics_req_bits_probeOp(io_atomics_req_bits_probeOp) \
    ,.io_atomics_req_bits_needData(io_atomics_req_bits_needData) \
    ,.io_atomics_req_bits_snpTxnId(io_atomics_req_bits_snpTxnId) \
    ,.io_atomics_req_bits_replaceWay(io_atomics_req_bits_replaceWay) \
    ,.io_atomics_resp_ready(io_atomics_resp_ready) \
    ,.io_atomics_resp_valid(io_atomics_resp_valid) \
    ,.io_atomics_resp_bits_id(io_atomics_resp_bits_id) \
    ,.io_atomics_resp_bits_cmd(io_atomics_resp_bits_cmd) \
    ,.io_atomics_resp_bits_data(io_atomics_resp_bits_data) \
    ,.io_atomics_resp_bits_success(io_atomics_resp_bits_success) \
    ,.io_atomics_replay_ready(io_atomics_replay_ready) \
    ,.io_atomics_replay_valid(io_atomics_replay_valid) \
    ,.io_atomics_replay_bits_miss(io_atomics_replay_bits_miss) \
    ,.io_atomics_replay_bits_replay(io_atomics_replay_bits_replay) \
    ,.io_atomics_replay_bits_id(io_atomics_replay_bits_id) \
    ,.io_cmoReq_ready(io_cmoReq_ready) \
    ,.io_cmoReq_valid(io_cmoReq_valid) \
    ,.io_cmoReq_bits_id(io_cmoReq_bits_id) \
    ,.io_cmoReq_bits_opcode(io_cmoReq_bits_opcode) \
    ,.io_cmoReq_bits_addr(io_cmoReq_bits_addr) \
    ,.io_cmoReq_bits_alias(io_cmoReq_bits_alias) \
    ,.io_cmoResp_ready(io_cmoResp_ready) \
    ,.io_cmoResp_valid(io_cmoResp_valid) \
    ,.io_cmoResp_bits_id(io_cmoResp_bits_id) \
    ,.io_cmoResp_bits_done(io_cmoResp_bits_done) \
    ,.io_cmoResp_bits_error(io_cmoResp_bits_error) \
    ,.io_wfi_req(io_wfi_req) \
    ,.io_wfi_safe(io_wfi_safe) \
    ,.io_forwardChi_valid(io_forwardChi_valid) \
    ,.io_forwardChi_bits_id(io_forwardChi_bits_id) \
    ,.io_forwardChi_bits_half(io_forwardChi_bits_half) \
    ,.io_forwardChi_bits_data(io_forwardChi_bits_data) \
    ,.io_forwardMshr_id(io_forwardMshr_id) \
    ,.io_forwardMshr_half(io_forwardMshr_half) \
    ,.io_forwardMshr_data_valid(io_forwardMshr_data_valid) \
    ,.io_forwardMshr_data_bits(io_forwardMshr_data_bits) \
    ,.io_refillWakeup_ready(io_refillWakeup_ready) \
    ,.io_refillWakeup_valid(io_refillWakeup_valid) \
    ,.io_refillWakeup_bits_id(io_refillWakeup_bits_id) \
    ,.io_refillWakeup_bits_addr(io_refillWakeup_bits_addr) \
    ,.io_refillWakeup_bits_alias(io_refillWakeup_bits_alias) \
    ,.io_loadReplay_ready(io_loadReplay_ready) \
    ,.io_loadReplay_valid(io_loadReplay_valid) \
    ,.io_loadReplay_bits_id(io_loadReplay_bits_id) \
    ,.io_loadReplay_bits_addr(io_loadReplay_bits_addr) \
    ,.io_loadReplay_bits_alias(io_loadReplay_bits_alias)

`define DCACHE_L2_PORT_CONN \
    ,.io_l2_req_ready(io_l2_req_ready) \
    ,.io_l2_req_valid(io_l2_req_valid) \
    ,.io_l2_req_bits_txnID(io_l2_req_bits_txnID) \
    ,.io_l2_req_bits_srcID(io_l2_req_bits_srcID) \
    ,.io_l2_req_bits_tgtID(io_l2_req_bits_tgtID) \
    ,.io_l2_req_bits_opcode(io_l2_req_bits_opcode) \
    ,.io_l2_req_bits_size(io_l2_req_bits_size) \
    ,.io_l2_req_bits_addr(io_l2_req_bits_addr) \
    ,.io_l2_req_bits_tagAlias(io_l2_req_bits_tagAlias) \
    ,.io_l2_req_bits_ns(io_l2_req_bits_ns) \
    ,.io_l2_req_bits_order(io_l2_req_bits_order) \
    ,.io_l2_req_bits_memAttr(io_l2_req_bits_memAttr) \
    ,.io_l2_req_bits_excl(io_l2_req_bits_excl) \
    ,.io_l2_req_bits_expCompData(io_l2_req_bits_expCompData) \
    ,.io_l2_req_bits_expCompStash(io_l2_req_bits_expCompStash) \
    ,.io_l2_req_bits_wayValid(io_l2_req_bits_wayValid) \
    ,.io_l2_req_bits_way(io_l2_req_bits_way) \
    ,.io_l2_req_bits_traceTag(io_l2_req_bits_traceTag) \
    ,.io_l2_evt_ready(io_l2_evt_ready) \
    ,.io_l2_evt_valid(io_l2_evt_valid) \
    ,.io_l2_evt_bits_txnID(io_l2_evt_bits_txnID) \
    ,.io_l2_evt_bits_srcID(io_l2_evt_bits_srcID) \
    ,.io_l2_evt_bits_tgtID(io_l2_evt_bits_tgtID) \
    ,.io_l2_evt_bits_opcode(io_l2_evt_bits_opcode) \
    ,.io_l2_evt_bits_addr(io_l2_evt_bits_addr) \
    ,.io_l2_evt_bits_ns(io_l2_evt_bits_ns) \
    ,.io_l2_evt_bits_memAttr(io_l2_evt_bits_memAttr) \
    ,.io_l2_evt_bits_wayValid(io_l2_evt_bits_wayValid) \
    ,.io_l2_evt_bits_way(io_l2_evt_bits_way) \
    ,.io_l2_evt_bits_traceTag(io_l2_evt_bits_traceTag) \
    ,.io_l2_txRsp_ready(io_l2_txRsp_ready) \
    ,.io_l2_txRsp_valid(io_l2_txRsp_valid) \
    ,.io_l2_txRsp_bits_txnID(io_l2_txRsp_bits_txnID) \
    ,.io_l2_txRsp_bits_srcID(io_l2_txRsp_bits_srcID) \
    ,.io_l2_txRsp_bits_tgtID(io_l2_txRsp_bits_tgtID) \
    ,.io_l2_txRsp_bits_opcode(io_l2_txRsp_bits_opcode) \
    ,.io_l2_txRsp_bits_respErr(io_l2_txRsp_bits_respErr) \
    ,.io_l2_txRsp_bits_resp(io_l2_txRsp_bits_resp) \
    ,.io_l2_txRsp_bits_traceTag(io_l2_txRsp_bits_traceTag) \
    ,.io_l2_txDat_ready(io_l2_txDat_ready) \
    ,.io_l2_txDat_valid(io_l2_txDat_valid) \
    ,.io_l2_txDat_bits_txnID(io_l2_txDat_bits_txnID) \
    ,.io_l2_txDat_bits_srcID(io_l2_txDat_bits_srcID) \
    ,.io_l2_txDat_bits_tgtID(io_l2_txDat_bits_tgtID) \
    ,.io_l2_txDat_bits_opcode(io_l2_txDat_bits_opcode) \
    ,.io_l2_txDat_bits_respErr(io_l2_txDat_bits_respErr) \
    ,.io_l2_txDat_bits_resp(io_l2_txDat_bits_resp) \
    ,.io_l2_txDat_bits_dataID(io_l2_txDat_bits_dataID) \
    ,.io_l2_txDat_bits_data(io_l2_txDat_bits_data) \
    ,.io_l2_txDat_bits_byteEnable(io_l2_txDat_bits_byteEnable) \
    ,.io_l2_txDat_bits_traceTag(io_l2_txDat_bits_traceTag) \
    ,.io_l2_rxRsp_ready(io_l2_rxRsp_ready) \
    ,.io_l2_rxRsp_valid(io_l2_rxRsp_valid) \
    ,.io_l2_rxRsp_bits_txnID(io_l2_rxRsp_bits_txnID) \
    ,.io_l2_rxRsp_bits_srcID(io_l2_rxRsp_bits_srcID) \
    ,.io_l2_rxRsp_bits_tgtID(io_l2_rxRsp_bits_tgtID) \
    ,.io_l2_rxRsp_bits_opcode(io_l2_rxRsp_bits_opcode) \
    ,.io_l2_rxRsp_bits_dbID(io_l2_rxRsp_bits_dbID) \
    ,.io_l2_rxRsp_bits_respErr(io_l2_rxRsp_bits_respErr) \
    ,.io_l2_rxRsp_bits_resp(io_l2_rxRsp_bits_resp) \
    ,.io_l2_rxRsp_bits_cBusy(io_l2_rxRsp_bits_cBusy) \
    ,.io_l2_rxRsp_bits_traceTag(io_l2_rxRsp_bits_traceTag) \
    ,.io_l2_rxDat_ready(io_l2_rxDat_ready) \
    ,.io_l2_rxDat_valid(io_l2_rxDat_valid) \
    ,.io_l2_rxDat_bits_txnID(io_l2_rxDat_bits_txnID) \
    ,.io_l2_rxDat_bits_srcID(io_l2_rxDat_bits_srcID) \
    ,.io_l2_rxDat_bits_tgtID(io_l2_rxDat_bits_tgtID) \
    ,.io_l2_rxDat_bits_opcode(io_l2_rxDat_bits_opcode) \
    ,.io_l2_rxDat_bits_dbID(io_l2_rxDat_bits_dbID) \
    ,.io_l2_rxDat_bits_respErr(io_l2_rxDat_bits_respErr) \
    ,.io_l2_rxDat_bits_resp(io_l2_rxDat_bits_resp) \
    ,.io_l2_rxDat_bits_dataSource(io_l2_rxDat_bits_dataSource) \
    ,.io_l2_rxDat_bits_cBusy(io_l2_rxDat_bits_cBusy) \
    ,.io_l2_rxDat_bits_dataID(io_l2_rxDat_bits_dataID) \
    ,.io_l2_rxDat_bits_data(io_l2_rxDat_bits_data) \
    ,.io_l2_rxDat_bits_traceTag(io_l2_rxDat_bits_traceTag) \
    ,.io_l2_rxSnp_ready(io_l2_rxSnp_ready) \
    ,.io_l2_rxSnp_valid(io_l2_rxSnp_valid) \
    ,.io_l2_rxSnp_bits_txnID(io_l2_rxSnp_bits_txnID) \
    ,.io_l2_rxSnp_bits_srcID(io_l2_rxSnp_bits_srcID) \
    ,.io_l2_rxSnp_bits_tgtID(io_l2_rxSnp_bits_tgtID) \
    ,.io_l2_rxSnp_bits_opcode(io_l2_rxSnp_bits_opcode) \
    ,.io_l2_rxSnp_bits_addr(io_l2_rxSnp_bits_addr) \
    ,.io_l2_rxSnp_bits_tagAlias(io_l2_rxSnp_bits_tagAlias) \
    ,.io_l2_rxSnp_bits_ns(io_l2_rxSnp_bits_ns) \
    ,.io_l2_rxSnp_bits_traceTag(io_l2_rxSnp_bits_traceTag)
