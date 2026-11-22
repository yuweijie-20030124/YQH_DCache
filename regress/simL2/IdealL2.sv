module IdealL2(
// System signals
   input         clock
  ,input         reset
// Compact Chi interface for L2 cache
  ,output        io_l2_req_ready                       
  ,input         io_l2_req_valid                       
  ,input [7:0]   io_l2_req_bits_txnID                  
  ,input [6:0]   io_l2_req_bits_srcID                  
  ,input [6:0]   io_l2_req_bits_tgtID                  
  ,input [5:0]   io_l2_req_bits_opcode                 
  ,input [2:0]   io_l2_req_bits_size                   
  ,input [47:0]  io_l2_req_bits_addr                   
  ,input [1:0]   io_l2_req_bits_tagAlias               
  ,input         io_l2_req_bits_ns                     
  ,input [1:0]   io_l2_req_bits_order                  
  ,input [3:0]   io_l2_req_bits_memAttr                
  ,input         io_l2_req_bits_excl                   
  ,input         io_l2_req_bits_expCompData            
  ,input         io_l2_req_bits_expCompStash           
  ,input         io_l2_req_bits_wayValid               
  ,input [1:0]   io_l2_req_bits_way                    
  ,input         io_l2_req_bits_traceTag               
  ,output        io_l2_evt_ready                       
  ,input         io_l2_evt_valid                       
  ,input [7:0]   io_l2_evt_bits_txnID                  
  ,input [6:0]   io_l2_evt_bits_srcID                  
  ,input [6:0]   io_l2_evt_bits_tgtID                  
  ,input         io_l2_evt_bits_opcode                 
  ,input [47:0]  io_l2_evt_bits_addr                   
  ,input         io_l2_evt_bits_ns                     
  ,input         io_l2_evt_bits_memAttr                
  ,input         io_l2_evt_bits_wayValid               
  ,input [1:0]   io_l2_evt_bits_way                    
  ,input         io_l2_evt_bits_traceTag               
  ,output        io_l2_txRsp_ready                     
  ,input         io_l2_txRsp_valid                     
  ,input [7:0]   io_l2_txRsp_bits_txnID                
  ,input [6:0]   io_l2_txRsp_bits_srcID                
  ,input [6:0]   io_l2_txRsp_bits_tgtID                
  ,input         io_l2_txRsp_bits_opcode               
  ,input [1:0]   io_l2_txRsp_bits_respErr              
  ,input [2:0]   io_l2_txRsp_bits_resp                 
  ,input         io_l2_txRsp_bits_traceTag             
  ,output        io_l2_txDat_ready                     
  ,input         io_l2_txDat_valid                     
  ,input [7:0]   io_l2_txDat_bits_txnID                
  ,input [6:0]   io_l2_txDat_bits_srcID                
  ,input [6:0]   io_l2_txDat_bits_tgtID                
  ,input [1:0]   io_l2_txDat_bits_opcode               
  ,input [1:0]   io_l2_txDat_bits_respErr              
  ,input [2:0]   io_l2_txDat_bits_resp                 
  ,input         io_l2_txDat_bits_dataID               
  ,input [255:0] io_l2_txDat_bits_data                 
  ,input [31:0]  io_l2_txDat_bits_byteEnable           
  ,input         io_l2_txDat_bits_traceTag             
  ,input         io_l2_rxRsp_ready                     
  ,output        io_l2_rxRsp_valid                     
  ,output[7:0]   io_l2_rxRsp_bits_txnID                
  ,output[6:0]   io_l2_rxRsp_bits_srcID                
  ,output[6:0]   io_l2_rxRsp_bits_tgtID                
  ,output[2:0]   io_l2_rxRsp_bits_opcode               
  ,output[7:0]   io_l2_rxRsp_bits_dbID                 
  ,output[1:0]   io_l2_rxRsp_bits_respErr              
  ,output[2:0]   io_l2_rxRsp_bits_resp                 
  ,output[2:0]   io_l2_rxRsp_bits_cBusy                
  ,output        io_l2_rxRsp_bits_traceTag             
  ,input         io_l2_rxDat_ready                     
  ,output        io_l2_rxDat_valid                     
  ,output[7:0]   io_l2_rxDat_bits_txnID                
  ,output[6:0]   io_l2_rxDat_bits_srcID                
  ,output[6:0]   io_l2_rxDat_bits_tgtID                
  ,output        io_l2_rxDat_bits_opcode               
  ,output[7:0]   io_l2_rxDat_bits_dbID                 
  ,output[1:0]   io_l2_rxDat_bits_respErr              
  ,output[2:0]   io_l2_rxDat_bits_resp                 
  ,output[4:0]   io_l2_rxDat_bits_dataSource           
  ,output[2:0]   io_l2_rxDat_bits_cBusy                
  ,output        io_l2_rxDat_bits_dataID               
  ,output[255:0] io_l2_rxDat_bits_data                 
  ,output        io_l2_rxDat_bits_traceTag             
  ,input         io_l2_rxSnp_ready                     
  ,output        io_l2_rxSnp_valid                     
  ,output[7:0]   io_l2_rxSnp_bits_txnID                
  ,output[6:0]   io_l2_rxSnp_bits_srcID                
  ,output[6:0]   io_l2_rxSnp_bits_tgtID                
  ,output[1:0]   io_l2_rxSnp_bits_opcode               
  ,output[44:0]  io_l2_rxSnp_bits_addr                 
  ,output[1:0]   io_l2_rxSnp_bits_tagAlias             
  ,output        io_l2_rxSnp_bits_ns                   
  ,output        io_l2_rxSnp_bits_traceTag             
  ,input         io_forwardChi_valid                   
  ,input [3:0]   io_forwardChi_bits_id                 
  ,input         io_forwardChi_bits_half               
  ,input [255:0] io_forwardChi_bits_data               
  ,output[3:0]   io_forwardMshr_id                     
  ,output        io_forwardMshr_half                   
  ,input         io_forwardMshr_data_valid             
  ,input [255:0] io_forwardMshr_data_bits              
  ,output        io_refillWakeup_ready                 
  ,input         io_refillWakeup_valid                 
  ,input [3:0]   io_refillWakeup_bits_id               
  ,input [47:0]  io_refillWakeup_bits_addr             
  ,input [1:0]   io_refillWakeup_bits_alias            
  ,output        io_loadReplay_ready                   
  ,input         io_loadReplay_valid                   
  ,input [3:0]   io_loadReplay_bits_id                 
  ,input [47:0]  io_loadReplay_bits_addr               
  ,input [1:0]   io_loadReplay_bits_alias               
);
//********************************** Import DPIC **********************************//
// import "DPI-C" function  void DPIC_

//********************************** DCACHE TXEVT **********************************//


//********************************** DCACHE TXREQ **********************************//
logic rxreq_ready;
logic rxreq_valid;
logic rxreq_fire;

// input assign
assign rxreq_valid = io_l2_req_valid;

always @(posedge clock) begin
    if(reset) begin
        rxreq_ready <= 1'b0;
    end
    else begin
        rxreq_ready <= 1'b1;
    end
end

assign io_l2_req_ready = rxreq_ready;

// DCache TXREQ Fire
assign rxreq_fire = rxreq_valid && rxreq_ready;

always @(posedge clock) begin
    if(rxreq_fire) begin
        //dpic
    end

end


//********************************** DCACHE RXSNP **********************************//


//********************************** DCACHE TXRSP **********************************//


//********************************** DCACHE TXDAT **********************************//


//********************************** DCACHE RXRSP **********************************//


//********************************** DCACHE RXDAT **********************************//



endmodule