# Cpp.Clang-xi

## 1. 开发环境说明
c, gcc, cpp, gcc-c++, make, cmake 以及相关依赖包；

Terminal 作为编译和操作环境；

TextEditor 作为编辑环境。

## 2. C/C++ 语言说明
### 2.1 C++
C++ 是一门健壮又古老的语言，效率较高，又相对灵活。  
另外 C++ 是 Qt 的基础，传统的 Qt 开发都是基于 C++ 代码的；即使现在出现了 QML 标记语言，但 Qt 开发最灵活高效的还是 C++。  

`sudo zypper in gcc-c++`以安装 g++ 编译器。

### 2.2 C lang
C lang 是现代计算机历史上最光辉的一页。是执行效率最高的一类编程语言，属于编译型语言。  
现代操作系统自 Unix 开始，而 Unix 就是基于 C 语言的，同时 C 语言是现在硬件驱动程序编写的首选语言。  
C lang 可用于系统级开发，对 C++ 的学习会有帮助，但考虑到未来不会有系统级开发需求，暂时搁置学习 C lang。  

`sudo zypper in gcc`以安装 gcc 编译器。

### 2.3 Qt & Qt-creator
Qt 是 KDE 的基石，目前采用 LGPL 协议，是 GUI 绘制的不错选择。Gtk、Wx 等虽都开源，但开发速度和易用性较 Qt 仍然略差。  
Qt 在 Linux 下直接从 YaST 中安装`patterns-libqt5`，在 Windows 下直接从清华源下载，离线安装不会出现订购页面。  
Qt 的 C++/C 开发流程。在 Qt-creator 中新建项目，选择`Qt Widgets Application`开发桌面应用。  

项目中`.ui`文件用于绘制 GUI 负责操作逻辑，而`.h`头文件和`.cpp`代码文件用于写业务逻辑。  
直接在 Qt-creator 内编译或 Debug 即可。  
项目完成后，配置构建设置进行构建。  
