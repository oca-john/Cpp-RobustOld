#include <iostream>
#include <stdlib.h> // 引入标准库
#include <ctime>    // 引入时间库，时间转为数字

// 用rand随机数函数模拟抛硬币游戏

int main() {
  srand (time(NULL));     // 随机数发生器初始化
  int coin = rand() % 2;  // 初始化coin状态，随机产生数字，测试对2取余的结果（只有0和1）
  if (coin == 0) {
    std::cout << "Heads.\n";  // 余0则输出正面，否则输出反面
  } else {
    std::cout << "Tails.\n";
  }
  return 0:
}
