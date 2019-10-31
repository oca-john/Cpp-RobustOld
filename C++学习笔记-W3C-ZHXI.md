# C++学习笔记-W3C-ZHXI
内容源自 https://www.w3cschool.cn

## 1.C++基础
编辑器(vi/vscode)，编译器(g++);  
C++里的基本概念：  
- 对象：具有状态和行为/数据和操作，`某个人`；  
- 类：一群具有相同状态和行为的对象的集合/模板，`人类`；  
- 即时变量：对象具有独特的即时变量，用于创建对象的状态；  
- 方法：描述对象的行为或操作(写入逻辑、操作数据、执行动作)，一个类可以由多个方法；  

C++程序结构：  
``` c++
#include <iostream>     // io库，同C的头文件
using namespace std;

// main() 是程序开始执行的地方

int main()
{
   cout << "Hello World"; // 输出 Hello World    return 0; 
} 
```
