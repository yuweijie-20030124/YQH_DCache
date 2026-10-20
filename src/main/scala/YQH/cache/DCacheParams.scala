package YQH.cache

import chisel3._
import chisel3.util._

/*
 * DCache 参数配置
 *
 * 集中管理 DCache 的容量、组织结构、
 * 并发请求能力和队列深度。
 */

case class DCacheParameters(
    nSets       :Int = 256   ,
    nways       :Int = 4     ,
    blockBytes  :Int = 64    ,
    rowBits     :Int = 64    ,
    nMissEntries:Int = 8     ,

    //bank

    // tag
    tagBits     :Int = 48-13 ,
    vtagBits    :Int = 48-12 ,

    //loadpipe个数。
    LoadPipelineWidth:Int = 3,

    //OUTSIDE (SoC / Core设置)
    PAddrBits   :Int  = 48  ,
    VAddrBits   :Int  = 48  ,
    XLEN        :Int  = 64  ,
    reqIdWidth  :Int  = 5,
    
)

/*
 * Dcache的特性
 * 并非微架构参数等，写到特性这里来
*/

trait HasDCacheParameters{
  // 具体配置由使用方（Bundle / Module）通过 implicit val p 提供
  implicit val p: DCacheParameters
  def nSourceType = 10
  def sourceTypeWidth = log2Up(nSourceType)
  // non-prefetch source < 3
  def LOAD_SOURCE = 0
  def STORE_SOURCE = 1
  def AMO_SOURCE = 2
  // prefetch source >= 3
  def DCACHE_PREFETCH_SOURCE = 3
  def SOFT_PREFETCH = 4

  // cacheline help
  def idxBits = log2Up(p.nSets)
  
  // val赋值
  val nways         = p.nways
  val nMissEntries  = p.nMissEntries
  val reqIdWidth    = 6 //Dcache请求/响应的id字段位宽 暂时不知道多少,我先填一个6
  // bankded dcache support
  def DCacheSets     = p.nSets        // 不再硬编码
  def DCacheWordBits = p.rowBits
  
  // SoC
  val PAddrBits = p.PAddrBits
  val VAddrBits = p.VAddrBits
  val XLEN      = p.XLEN  
  val VLEN      = 128
  val lqentries = 16
  
}

trait MemoryOpConstants {
  val NUM_XA_OPS = 9
  val M_SZ      = 5
  def M_X       = BitPat("b?????")
  def M_XRD     = "b00000".U // int load
  def M_XWR     = "b00001".U // int store
  def M_PFR     = "b00010".U // prefetch with intent to read
  def M_PFW     = "b00011".U // prefetch with intent to write
  def M_XA_SWAP = "b00100".U
  def M_FLUSH_ALL = "b00101".U  // flush all lines
  def M_XLR     = "b00110".U
  def M_XSC     = "b00111".U
  def M_XA_ADD  = "b01000".U
  def M_XA_XOR  = "b01001".U
  def M_XA_OR   = "b01010".U
  def M_XA_AND  = "b01011".U
  def M_XA_MIN  = "b01100".U
  def M_XA_MAX  = "b01101".U
  def M_XA_MINU = "b01110".U
  def M_XA_MAXU = "b01111".U
  def M_FLUSH   = "b10000".U // write back dirty data and cede R/W permissions
  def M_PWR     = "b10001".U // partial (masked.U store
  def M_PRODUCE = "b10010".U // write back dirty data and cede W permissions
  def M_CLEAN   = "b10011".U // write back dirty data and retain R/W permissions
  def M_SFENCE  = "b10100".U // flush TLB
  def M_WOK     = "b10111".U // check write permissions but don't perform a write
  def M_XA_CASQ = "b11000".U // AMOCAS.Q
  def M_XA_CASW = "b11010".U // AMOCAS.W
  def M_XA_CASD = "b11011".U // AMOCAS.D

  def isAMOLogical(cmd: UInt) = cmd === M_XA_SWAP || cmd === M_XA_XOR || cmd === M_XA_OR || cmd === M_XA_AND
  def isAMOArithmetic(cmd: UInt) = cmd === M_XA_ADD || cmd === M_XA_MIN || cmd === M_XA_MAX || cmd === M_XA_MINU || cmd === M_XA_MAXU
  def isAMOCAS(cmd: UInt) = cmd === M_XA_CASW || cmd === M_XA_CASD || cmd === M_XA_CASQ
  def isAMOCASQ(cmd: UInt) = cmd === M_XA_CASQ
  def isAMO(cmd: UInt) = isAMOLogical(cmd) || isAMOArithmetic(cmd) || isAMOCAS(cmd)
  def isPrefetch(cmd: UInt) = cmd === M_PFR || cmd === M_PFW
  def isRead(cmd: UInt) = cmd === M_XRD || cmd === M_XLR || cmd === M_XSC || isAMO(cmd)
  def isWrite(cmd: UInt) = cmd === M_XWR || cmd === M_PWR || cmd === M_XSC || isAMO(cmd)
  def isWriteIntent(cmd: UInt) = isWrite(cmd) || cmd === M_PFW || cmd === M_XLR
}

