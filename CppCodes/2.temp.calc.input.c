#include <iostream>

// after user input a temp, change it from 'f' to 'c'.

int main() {
  double tempf;                   // 定义变量类型
  double tempc;
  std::cout << "Enter the temperature in Fahrenheit: ";   // 用文本提示用户输入数据
  std::cin >> tempf;              // std库中的cin函数捕获用户输入
  tempc = (tempf - 32) / 1.8;     // 核心依然是函数（计算公式）
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  return 0;
}
