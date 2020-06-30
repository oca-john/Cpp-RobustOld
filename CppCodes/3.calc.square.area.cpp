#include <iostream>

// calculate area of aquare.

int main() {
  int i = 0;              // 初始化
  int square = 0;
  while (i < 10) {        // 限定输出10以内结果
    square = i * i;       // 计算公式
    std::cout << i << ": " << square << "\n";   // 连续cout输出，变量和"string"分开
    i++;
  }
  return 0:               // 返回0
}
