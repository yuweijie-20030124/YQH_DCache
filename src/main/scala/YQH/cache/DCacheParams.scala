package YQH.cache

import chisel3._
import chisel3.util._
import anserl2.compactchi.{CompactChiParams, CompactChiUpstreamNodeId}

/*
 * DCache 参数配置
 *
 * 集中管理 DCache 的容量、组织结构、
 * 并发请求能力和队列深度。
 */

case class DCacheParameters(
    nSets       :Int = 256   ,
    nWays       :Int = 4     ,
    blockBytes  :Int = 64    ,
    rowBits     :Int = 64    ,
    nMissEntries:Int = 16    ,
    nProbeEntries:Int = 16   ,
    nReleaseEntries:Int = 18 ,

    // dcache大小 = 256 set * 4 way * 64 B = 64 KB

    // bank
    nBanks       :Int = 8    ,
    // 物理 tag 是 paddr[47:12]，36 bit。必须带上 paddr[13:12]：
    // set index 的高两位是虚拟别名，不是物理地址。若只存 paddr[47:14]，
    // 同 set 内仅 [13:12] 不同的两行会得到相同 tag。
    // vtagBits 只留给已停用的 WPU，当前不参与命中判断。
    tagBits     :Int = 48-12 ,
    vtagBits    :Int = 48-14 ,

    // LoadPipe 个数。上游接口定为 2。
    LoadPipelineWidth:Int = 2,

    // 第一版关闭。干净 victim 只发 Evict，不发 WriteEvictFull。
    alwaysReleaseData:Boolean = false,

    // 上游节点号用 Compact-CHI 的单核编号。DCache = 2。
    // Compact-CHI 没有下游节点号常量，L2 仍暂用 0。
    dcacheNodeId:Int = CompactChiUpstreamNodeId.DCache,
    l2NodeId:Int = 0,

    // L1↔L2 的字段宽度用 Compact-CHI 的 CompactChiParams。
    // tagAliasBits 不跟库的默认 1。256 set 的 index 含 vaddr[13:12]，必须是 2。
    chi: CompactChiParams = CompactChiParams(tagAliasBits = 2),

    //OUTSIDE (SoC / Core设置)
    PAddrBits   :Int  = 48  ,
    VAddrBits   :Int  = 48  ,
    XLEN        :Int  = 64  ,
    reqIdWidth  :Int  = 5,

) {
  // way 位宽不在 CompactChiParams 里。库的约定是按路数传入索引宽度：八路为 3，四路为 2。
  val chiWayBits: Int = log2Ceil(nWays)

  require(nSets == 256 && nWays == 4 && blockBytes == 64 && nBanks == 8)
  require(rowBits == 64)
  require(nMissEntries == 16 && nProbeEntries == 16 && nReleaseEntries == 18)
  require(nReleaseEntries > nMissEntries)
  require(LoadPipelineWidth == 2)
  require(!alwaysReleaseData)
  require(PAddrBits == 48 && tagBits == PAddrBits - 12)
  require(dcacheNodeId == CompactChiUpstreamNodeId.DCache && l2NodeId >= 0)
  require(chi.addrBits == PAddrBits)
  require(chi.dataBits == 256 && chi.dataBytes * 2 == blockBytes)
  require(chi.snoopAddrBits == PAddrBits - 3)
  require(chi.tagAliasBits == 2)
  require(chiWayBits == 2 && (1 << chiWayBits) == nWays)
}

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

  // val赋值
  val nsets         = p.nSets
  val nways         = p.nWays
  val blockBytes    = p.blockBytes
  val blockOffBits  = log2Up(blockBytes)

  // cacheline / tag 地址划分
  def idxBits = log2Up(p.nSets)
  def untagBits = blockOffBits + idxBits
  // 与 XiangShan 的 HasL1CacheParameters 一致：4 KiB 页内地址不参与物理 tag。
  def pgIdxBits = 12
  def pgUntagBits = untagBits min pgIdxBits
  val nMissEntries  = p.nMissEntries
  val nProbeEntries = p.nProbeEntries
  val nReleaseEntries = p.nReleaseEntries
  val loadPipelineWidth = p.LoadPipelineWidth
  val alwaysReleaseData = p.alwaysReleaseData
  val reqIdWidth    = 6 //Dcache请求/响应的id字段位宽 暂时不知道多少,我先填一个6
  val tagBits       = p.tagBits
  // txnId：0～15 是 MSHR，16 是 CMO，17～34 是 WritebackQueue。
  def cmoTxnIdInt: Int = nMissEntries
  def wbTxnIdBaseInt: Int = nMissEntries + 1
  def wbTxnIdInt(entry: Int): Int = {
    require(entry >= 0 && entry < nReleaseEntries)
    wbTxnIdBaseInt + entry
  }
  // banked dcache support
  def DCacheSets     = p.nSets        // 不再硬编码
  def DCacheWordBits = p.rowBits      // 一个 bank 一次读写的数据位宽
  val DCacheBanks    = p.nBanks       // dcache 中 bank 的数量

  // 地址位段：
  // [ tag | set | bank | bank 内字节偏移 ]
  // bank 内字节偏移由一个 row 的大小决定；set 位段位于 bank 位段之上。
  val DCacheWordBytes  = DCacheWordBits / 8
  val DCacheBankBits   = log2Ceil(DCacheBanks)
  val DCacheBankOffset = log2Ceil(DCacheWordBytes)
  val DCacheSetBits    = log2Ceil(DCacheSets)
  val DCacheSetOffset  = DCacheBankOffset + DCacheBankBits + DCacheSetBits
  val DCacheAboveIndexOffset = DCacheSetOffset + log2Up(nsets)

  require(DCacheWordBits % 8 == 0)
  require(DCacheBanks > 0 && (1 << DCacheBankBits) == DCacheBanks)
  require(DCacheSets > 0 && (1 << DCacheSetBits) == DCacheSets)
  require(p.blockBytes == DCacheBanks * DCacheWordBytes)

  // SoC
  // XLEN 必须在所有依赖它的字段之前初始化。否则 HasDCacheParameters
  // 在 Bundle 的父类构造阶段计算 blockWords 时会触发 -Xcheckinit。
  val PAddrBits = p.PAddrBits
  val VAddrBits = p.VAddrBits
  val XLEN      = p.XLEN
  val VLEN      = 128

  // MSHR
  val blockWords     = XLEN / 8

  // amo
  val QuadWordBits   = 2 * XLEN
  val QuadWordBytes  = QuadWordBits / 8
  val nLQEntries= 16

  // 方法定义 def 帮助取值，其实感觉相当于verilog中的function
  // 取 bank 编号。例如当前配置下：addr(5, 3)，结果宽度为 3 bit。
  def addr_to_dcache_bank(addr: UInt): UInt = {
    require(addr.getWidth >= DCacheBankOffset + DCacheBankBits)
    addr(DCacheBankOffset + DCacheBankBits - 1, DCacheBankOffset)
  }

  // 取 cache set 编号。例如当前配置下：addr(13, 6)，结果宽度为 8 bit。
  def addr_to_dcache_set(addr: UInt): UInt = {
    require(addr.getWidth >= DCacheSetOffset)
    addr(DCacheSetOffset - 1, DCacheBankOffset + DCacheBankBits)
  }

  // 取 cache set 的 index。
  // idx 的低位紧接在 bank 位之后，高位由 set 位宽决定。
  // 当前配置下等价于 addr(13, 6)，结果宽度为 DCacheSetBits = 8 bit。
  def get_idx(addr: UInt): UInt = {
    require(addr.getWidth >= untagBits)
    addr(untagBits - 1, blockOffBits)
  }

  // 物理 tag 的切分方式与 XiangShan 一致：paddr >> pgUntagBits。
  // 当前配置等价于 paddr(47, 12)，宽度为 tagBits = 36。
  def get_phy_tag(addr: UInt): UInt = {
    require(addr.getWidth >= PAddrBits)
    addr(PAddrBits - 1, pgUntagBits)
  }

  def chi = p.chi
  def chiWayBits = p.chiWayBits

  // 只有 SNP 地址是 paddr[47:3]。REQ 和 EVT 在 Compact-CHI 里都是完整的 48 bit。
  def chiSnoopAddr(byteAddr: UInt): UInt = {
    require(byteAddr.getWidth >= PAddrBits)
    byteAddr(PAddrBits - 1, 3)
  }

  def chiByteAddr(snoopAddr: UInt): UInt = {
    require(snoopAddr.getWidth >= chi.snoopAddrBits)
    Cat(snoopAddr(chi.snoopAddrBits - 1, 0), 0.U(3.W))
  }

  // 线上还原 set：{tagAlias, addr[11:6]}。tagAlias 固定 2 bit，结果是 8 bit，对应 256 set。
  def dcacheSet(tagAlias: UInt, byteAddr: UInt): UInt = {
    val aliasBits = chi.tagAliasBits
    require(byteAddr.getWidth >= 12 && tagAlias.getWidth >= aliasBits)
    if (aliasBits == 0) byteAddr(11, 6)
    else Cat(tagAlias(aliasBits - 1, 0), byteAddr(11, 6))
  }

  def get_tag(addr: UInt): UInt = get_phy_tag(addr)

  def get_direct_map_way(addr:UInt): UInt = {
    addr(DCacheAboveIndexOffset + log2Up(nways) - 1, DCacheAboveIndexOffset)
  }

  //时序优化 二叉树并行or
object ParallelOperation {
  def apply[T](xs: Seq[T], func: (T, T) => T): T = {
    require(xs.nonEmpty)
    xs match {
      case Seq(a) => a
      case Seq(a, b) => func(a, b)
      case _ =>
        apply(Seq(apply(xs take xs.size/2, func), apply(xs drop xs.size/2, func)), func)
    }
  }
}

object ParallelMux {
  def apply[T<:Data](in: Seq[(Bool, T)]): T = {
    val xs = in map { case (cond, x) => Mux(cond, x, 0.U.asTypeOf(x)) }
    ParallelOR(xs)
  }
  def apply[T <: Data](sel: Seq[Bool], in: Seq[T]): T = apply(sel.zip(in))
}

object ParallelPriorityMux {
  def apply[T <: Data](in: Seq[(Bool, T)]): T = {
    ParallelOperation(in, (a: (Bool, T), b: (Bool, T)) => (a._1 || b._1, Mux(a._1, a._2, b._2)))._2
  }
  def apply[T <: Data](sel: Bits, in: Seq[T]): T = apply((0 until in.size).map(sel(_)), in)
  def apply[T <: Data](sel: Seq[Bool], in: Seq[T]): T = apply(sel zip in)
}

object ParallelOR {
  def apply[T <: Data](xs: Seq[T]): T = {
    ParallelOperation(xs, (a: T, b: T) => (a.asUInt | b.asUInt).asTypeOf(xs.head))
  }
}

object ParallelORR {
  def apply(in: Seq[Bool]): Bool = ParallelOR(in)
  def apply(in: Bits): Bool = apply(in.asBools)
}

}

object MetaState {
  // L1 本地 Meta，2 bit。没有 SD。CHI Resp 是另一套 3 bit 编码，不能混用。
  def I  = 0.U(2.W)
  def SC = 1.U(2.W)
  def UC = 2.U(2.W)
  def UD = 3.U(2.W)
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

