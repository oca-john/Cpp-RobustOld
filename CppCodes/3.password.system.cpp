#include <iostream>

// store your password in system, if you input wrong password, you should retry.

int main() {
  int passwd = 0;                               // 初始化密码变量
  int tries = 0;                                // 初始化尝试次数
  std::cout << "WELCOME TO BANK OF XI.\n";
  std::cout << "Please Enter Your Password: ";
  std::cin >> passwd;                           // 输入密码
  while (passwd != 123456) {                    // 与存储密码比对
    std::cout << "Wrong Password. Retry: ";
    std::cin >> passwd;                         // 错误，重输，计数器加一
    tries++;
  }
  std::cout << "Password accepted.\n";          // 正确后通过
  std::cout << "You now have access.\n";
  return 0;                                     // 返回0
}
