package YQH.cache

import chisel3._
import chisel3.util._

/*
 * Uncache 参数配置
 *
 * 集中管理 Uncache 的容量、组织结构、
 * 并发请求能力和队列深度。
 */

case class UncacheParameters(
    UncacheBufferSize:Int = 8     ,
)

/*
 * Uncache的特性
 * 并非微架构参数等，写到特性这里来
*/

trait HasUncacheParameters{
  // 具体配置由使用方（Bundle / Module）通过 implicit val p 提供
  implicit val p: UncacheParameters
  def UncacheBufferSize = p.UncacheBufferSize
}



