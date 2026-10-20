package YQH

import chisel3._
import chisel3.util._

import YQH.cache.HasDCacheParameters

abstract class YQHBundle extends Bundle with HasDCacheParameters
abstract class YQHModule extends Module with HasDCacheParameters

