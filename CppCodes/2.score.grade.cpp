#include <iostream>

// divide your score into different level

int main() {
  int score = 57;         // 初始化一个分值
  if (score >= 60) {      // 判断条件
    std::cout << "Passed this time.\n";
  } else {
    std::cout << "Fail in this time.\n";
  }
  return 0;
}
