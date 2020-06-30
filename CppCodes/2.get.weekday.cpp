#include <iostream>

// input a number, return the weekday of the number.
// use 'switch()' and 'case'.

int main() {
  int weekday;                      // 初始化变量
  std::cout << "Please input a number.\n";
  std::cin >> weekday;              // 用户输入该变量的值
  switch (weekday) {                // switch主函数，和输入(本身就是条件)
    case 1:                         // 逐个条件给出返回值
      std::cout << "Monday.\n";
      break;
    case 2:
      std::cout << "Tuesday.\n";
      break;
    case 3:
      std::cout << "Wednesday.\n";
      break;
    case 4:
      std::cout << "Thusday.\n";
      break;
    case 5:
      std::cout << "Friday.\n";
      break;
    case 6:
      std::cout << "Saturday.\n";
      break;
    case 7:
      std::cout << "Sunday.\n";
      break;
    default:                        // 需给出不符合以上条件时的默认输出
      std::cout << "No this day in a week.\n";
      break;
  }
  return 0;                         // 返回0
}
