import mill._
import mill.scalalib._
import mill.api.PathRef

object top extends ScalaModule {
  def scalaVersion = "2.12.18"
  // 固定用 build.sc 所在目录作为模块根，避免依赖进程 CWD（os.pwd）。
  override def millSourcePath = build.millSourcePath
  // DCache↔L2 的 Flit、宽度和 opcode 直接编译 Compact-CHI 仓库里的源码，不在 YQH 再抄一份。
  def compactChiSources = os.Path("/home/ywj/Compact-CHI/src/main/scala")
  override def sources = T.sources {
    Seq(
      PathRef(millSourcePath / "src" / "main" / "scala"),
      PathRef(compactChiSources)
    )
  }
  def scalacOptions = T {
    super.scalacOptions() ++ Seq(
      "-language:reflectiveCalls",
      "-deprecation",
      "-feature",
      "-Xcheckinit",
      "-Xsource:2.11"
    )
  }

  override def ivyDeps = Agg(
    ivy"edu.berkeley.cs::chisel3:3.6.1"
  )
  
  override def scalacPluginIvyDeps = Agg(
    ivy"edu.berkeley.cs:::chisel3-plugin:3.6.1",
  )

} 