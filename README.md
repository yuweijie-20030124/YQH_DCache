YQH_DCache

参数：
256sets
4way
8bank

## Scala / Chisel 编辑器支持

使用 VS Code 打开仓库根目录，并在当前工作环境安装推荐扩展
`scalameta.metals` 和 `scala-lang.scala`（Remote SSH / WSL 需要安装到远端）。
项目固定使用 Mill 0.12.17、Scala 2.12.18 和 Chisel 3.6.1；
调整 Mill 版本时需要同时核对 `build.sc` 的兼容性。

`build.sc` 显式将 `src/main/scala` 注册为源码目录。工作区启用了 Metals
自动导入构建，导入完成后可使用类型诊断、成员补全、参数提示和定义跳转。
`Ctrl+Space` 手动触发补全，`Ctrl+Shift+M` 查看问题列表。

如果编辑器提示 `no build target found`，在命令面板执行
`Metals: Import build`；必要时执行 `Metals: Restart server`。
可以在终端检查构建输入和编译结果：

```sh
mill --no-server show top.sources
mill --no-server top.compile
```

第一条命令应指向本仓库的 `src/main/scala`，不能指向 `out/`。
第二条命令会报告源码中真实存在的错误；有编译错误不等于语言服务失效。
如需重新生成 Mill BSP 连接配置，执行：

```sh
mill --no-server mill.bsp.BSP/install
```

`.bsp/`、`.bloop/`、`.metals/` 和 `out/` 是本机生成的文件，不提交到仓库。
