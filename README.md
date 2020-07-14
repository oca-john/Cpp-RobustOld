# Cpp.Clang-xi

## Cpp
C++是一门健壮又古老的语言，效率较高，又相对灵活。  
另外C++是Qt的基础，传统的Qt开发都是基于C++代码的；即使现在出现了QML标记语言，但Qt开发最灵活高效的还是C++。  

`sudo zypper in gcc-c++`以安装g++编译器。

## C lang
C lang是现代计算机历史上最光辉的一页。是执行效率最高的一类编程语言，属于编译型语言。  
现代操作系统自Unix开始，而Unix就是基于C语言的，同时C语言是现在硬件驱动程序编写的首选语言。  
C lang可用于系统级开发，对C++的学习会有帮助，但考虑到未来不会有系统级开发需求，暂时搁置学习C lang。  

`sudo zypper in gcc`以安装gcc编译器。

## Qt & Qt-creator
Qt是KDE的基石，目前采用LGPL协议，是GUI绘制的不错选择。Gtk、Wx等虽都开源，但开发速度和易用性较Qt仍然略差。  
Qt在Linux下直接从YaST中安装`patterns-libqt5`，在Windows下直接从清华源下载，离线安装不会出现订购页面。  
Qt的C++/C开发流程。在Qt-creator中新建项目，选择`Qt Widgets Application`开发桌面应用。  

项目中`.ui`文件用于绘制GUI负责操作逻辑，而`.h`头文件和`.cpp`代码文件用于写业务逻辑。  
直接在Qt-creator内编译或Debug即可。  
项目完成后，配置构建设置进行构建。  
