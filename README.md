# szuthesis 深圳大学学位论文 LaTeX 模板


## 特别注意
项目使用到的 ctex 宏包与 fancyhdr 4.0.X 版本目前存在冲突，如 fancyhdr 依然为 3.X 版本暂时请勿升级，已升级的同学请参考 [ctex-kit, issue #554](https://github.com/CTeX-org/ctex-kit/issues/554) 暂时解决此问题。
推荐的方法：
> 在使用相应ctex宏包时，去相应的源文件搜索"\ctex_patch_cmd:Nnn \ps@fancy"，替换成”\ctex_patch_cmd:Nnn \f@nch@initialise“，例如，使用ctexbook类，应该修改%TEXLIVE%\texmf-dist\tex\latex\ctex下的ctexbook.cls文件

ctex 宏包升级后将及时告知各位同学，欢迎 star 项目获取最新消息。


## 模板下载
- Code -> Download Zip
- `git clone git@github.com:yichengsu/szuthesis.git`


## 模板简介
* 本项目基于 [中国科学院大学学位论文模板 ucasthesis](https://github.com/mohuangrui/ucasthesis) 二次开发。相对于 ucasthesis ，本项目进行了许多改动，关键的变化如下：
  * 修改相关配置，使其符合深圳大学学位论文印刷格式样式；
  * 封装了更多的命令，极大化简了 Thesis.tex 中的内容；
  * 化简了许多操作，例如化简了字体相关补丁，遵循ctex字体关于粗体和斜体的相关设定，化简了参考文献格式等；
  * 参考了 [上海交通大学论文模板 SJTUThesis](https://github.com/sjtug/SJTUThesis) 的设计思路。

* szuthesis 提供了简单明了的 **模板使用说明.pdf**。无论你是否具有 LaTeX 使用经验，都可较为轻松地使用以完成学位论文的撰写和排版。感谢大家的测试、反馈和支持。

* 兼顾操作系统：Windows、Linux、MacOS；LaTeX 编译引擎：仅支持xelatex；文献编译引擎：biber (biblatex)。支持中文书签、中文渲染、拷贝 PDF 中的文本到其他文本编辑器等特性。

* 相对于 word 模板，LaTeX 模板拥有着诸多优势。例如，可以使用 git 进行版本控制，专注写作且无需关注格式，更便利的公式书写环境，支持注释等。

* 更多关于 szuthesis 编译和设计的问题，请先阅读 **模板使用说明.pdf**，如有问题可提出issue。

## 编译
推荐使用 Tex Live 2020 + VS Code(LaTeX Workshop插件)，本项目已经提供了`.vscode/settings.json`进行相关设置。

LaTeX Workshop 插件提供了诸如 Linting，Formatting，Intellisense，PDF 文件预览，公式预览，全文大纲，chktex 语法检查等诸多功能，更多功能请见 [LaTeX-Workshop](https://github.com/James-Yu/LaTeX-Workshop)。

推荐使用 **latexmk** 命令编译文档，latexmk 命令可以自动适应不同的编译顺序，因本项目使用 biber 作为参考文献引擎，所以编译顺序可以与通常的顺序不同。如使用 VS Code，只需安装插件后重启项目，点击 `TEX -> Build LaTeX project -> Recipe: latexmk` 即可，或在命令行使用命令：

``` sh
latexmk -synctex=1 -interaction=nonstopmode -file-line-error -pdfxe -outdir=./Temp -e ensure_path('TEXINPUTS','./texmf//') Thesis.tex
```

如初次接触 LaTeX 推荐使用上述方法进行编译，使用其他编辑软件请注意编译顺序。若使用 MiKTeX，在安装 latexmk 后可能会缺少 perl.exe，可安装 [Strawberry Perl](https://www.perl.org/get.html)。

Ubuntu 用户推荐安装完整 [adobe字体](https://github.com/mohuangrui/ucasthesis/wiki/%E5%AD%97%E4%BD%93%E9%85%8D%E7%BD%AE#adobe-%E5%AD%97%E4%BD%93%E4%B8%8B%E8%BD%BD%E5%9C%B0%E5%9D%80)。

## TODO
- [ ] 兼容本科毕业论文模板

## 软件许可证
深圳大校徽校名图片 `Image/logo.png` 的版权归属深圳大学所有。

项目其他内容遵循 GPLv3 授权。
