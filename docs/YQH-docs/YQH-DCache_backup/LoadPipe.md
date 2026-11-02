## 框架图<img src="https://cdn.nlark.com/yuque/0/2026/png/35409901/1793193722819-d3e89162-18c9-465f-87a6-1732050c06c7.png" width="713.6" title="" crop="0,0,1,1" id="ue1b2dde9" class="ne-image">
设计的想法是没有 way predict，两级loadpipe流水线。与香山不一样的地方是s1流水线中行为不同，在s1获得物理地址后与4个tag进行比较获得真实way，再拿真实way去访问DataArray。

****

## 流水行为
**s0:**

在s0阶段，LoadPipe使用虚拟地址发起了Meta和Tag读请求，读的话是读选定的set中的所有way的tag和meta。  


**s1:**

在s1阶段，LoadPipe拿到全way的meta，全way的tag和MMU翻译之后的物理地址，此时可以进行tag比较得到真实way，判断hit/miss和一致性权限是否足够。但即使是拿到了真实way了，依旧是访问全部way的dataarray。  


**s2:**

在s2阶段，拿从s1中判断的出的miss/hit结果和一致性结果，发Missreq请求 或 发hit数据给LoadUnit，更新replace状态。  


## LoadPipe接口
| 字段 | 方向 | 信号 | 说明 |
| --- | --- | --- | --- |
| DCacheLoadIO | Flipped | lsu | DCache和LSU的接口 |
| MetaReadReq | DecoupledIO | meta_read | 读meta请求 |
| Meta | Input | meta_resp | 一致性信息结果 |
| TagReadReq | DecoupledIO | tag_read | 读tag请求 |
| Vec(nways, UInt(encTagBits.W)) | Input | tag_resp | 同时读4way出来 |
| L1BankedDataReadReqWithMask | DecoupledIO | banked_data_read | 读所有way的data请求 |
| Bool() | Output() | is128Req | 是否需要跨bank读 |
| Vec(2, new L1BankedDataReadResult()) | Input | banked_data_resp | 默认位宽是128bit，不跨bank就只有低64位有效，跨bank就全有效 |
| Bool() | Input | bank_conflict | 表示读bank有冲突 |
| MissReq | DecoupledIO | miss_req | 发MSHR请求 |
| MissResp | Input | miss_resp | 收MSHR数据 |
| UInt() | Valid | wbq_conflict_check | 查询下发的这个miss，有没有在WBQ中 |
| Bool() | Input | wbq_block_miss_req | 如果在要阻塞miss |
| ReplacementAccessBundle | ValidIO | replace_valid | 命中时，让替换策略更新状态 |
| Bool() | Input | disable_ld_fast_wakeup | 不能提前唤醒load |
| (log2 nSets.W) | Output | unqiue_occupy_set | 让MQ检查set的唯一权限事务占用 |
| Bool() | Input | unique_occupy_fail | MQ让本次权限升级取消 |




## 事务描述
### 非对齐访存
香山还有个跨16B访存得分成两条访存事务，不是很清楚啥原因，YQH不加这个feature。

目前的访存是按照1个bank 8B的颗粒度来访问的，如果说遇到地址没对齐的访存，可以使用is128Req来辅助跨bank读取数据，然后截取其中一部分给LSU。



### 权限升级取消
LoadPipe如果要申请UC权限(SC的情况下写预取)，需要向MissQueue申请MSHR。如果说 同一个set的所有way在权限升级中，会导致如果后续产生了miss，由于权限升级不能有victim，于是不能替换出去。于是香山的做法就是同一个set中最多只能有way-1条升级权限请求能成功，真miss的时候就能选中这条way作为victim。





### 查询WriteBack的Block
一条miss的load指令loadpipe在s2级流水线要访问WBQ，如果这条mmiss的物理行地址在WBQ中，也就是如果本次的miss已经在写回中，就不允许发出MissReq了。
