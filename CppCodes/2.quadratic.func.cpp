#include <iostream>
#include <cmath>    // 除了简单的"iostream"库之外，引入数学库

// quadratic function (二次函数)

int main() {
  double a, b, c;
  double root1, root2;
  std::cout << "Enter a: ";   // 依次获得二次函数的三个参数
  std::cin >> a;
  std::cout << "Enter b: ";
  std::cin >> b;
  std::cout << "Enter c: ";
  std::cin >> c;
  
  root1 = (-b + std::sqrt(b*b - 4*a*c))/(2*a);  // 构造求根公式，求解两个根
  root2 = (-b - std::sqrt(b*b - 4*a*c))/(2*a);
  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";
  return 0;
}
