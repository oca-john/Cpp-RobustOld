#include <iostream>

// use for loop to judge if a num can be divided by 15/5/3?

int main() {
  for (int i = 1; i <= 100; i++) {            // for循环内，初始化i...
    if (i % 15 == 0) {                        // if判断，套用else if
      std::cout << "Can be divided by 15.\n";
    } else if (i % 5 == 0) {
      std::cout << "Can be divided by 5.\n";
    } else if (i % 3 == 0) {
      std::cout << "Can be divided by 3.\n";
    } else {
      std::cout << i << "\n";
    }
  }
  return 0;                                   // 返回0
}
