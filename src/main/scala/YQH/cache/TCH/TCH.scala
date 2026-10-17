/*
* Transient Conflict Handler 
*  处理瞬时状态的模块
* TL 并非不会发生 Probe 与在途 Acquire 冲突；它把冲突排序的责任
* 主要放在 manager（L2）一侧，L1 client 只需维护稳定态并做局部背压。
* Compact CHI 则明确允许 Snoop 与 outstanding request 并发，RN-F 
* 必须自己记录 transient state、合并或转发，因此需要 TCH。
*/

package YQH.cache

class TCH {
  
}
