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
    nSets       :Int = 128   ,
    nways       :Int = 8     ,
    blockBytes  :Int = 64    ,
    rowBits     :Int = 64    ,
    nMissEntries:Int = 8     ,
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

  // bankded dcache support
  def DCacheSets     = p.nSets        // 不再硬编码
  def DCacheWordBits = p.rowBits
  val PmemWidth = 48  
  
}



