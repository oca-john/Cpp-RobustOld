#include <iostream>

// change the temp from 'f' to 'c'.

int main() {
  double tempf = 83.0;
  double tempc;
  tempc = (tempf - 32) / 1.8;     // 核心就是这个转换公式，本质是函数
  std::cout << "The temp is: " << tempc << " degress Celsius.\n";
  return 0;
}
