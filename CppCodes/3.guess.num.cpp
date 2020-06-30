#include <iostream>

// guess number system

int main() {
  int answer = 8;                       // 初始化答案
  int guess;                            // 初始化猜数变量
  std::cout << "I have a num 1-20.\n";
  std::cout << "Please guess it: ";
  std::cin >> guess;                    // 输入猜数
  // while loop judge it right or wrong.
  while (guess != 8) {                  // while判断对否，错误重猜
    std::cout "Wrong num, retry: ";
    std::cin >> guess;
  }
  std::cout << "You are right.\n";      // 正确则跳出
  return 0;                             // 返回0
}
