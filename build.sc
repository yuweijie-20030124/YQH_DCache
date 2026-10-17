import mill._, scalalib._
import os.Path

object top extends ScalaModule {
  def scalaVersion = "2.12.18"
  override def millSourcePath = os.pwd
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