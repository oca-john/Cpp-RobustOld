#include <iostream>

// calc bmi index with height and weight data.

int main() {
  double height, weight, bmi;         // 一次定义多个新变量类型
  std::cout << "Type in your height (m): ";   // 提示输入身高
  std::cin >> height;                 // std::cin捕获用户输入的身高数据
  std::cout << "Type in your weight (kg): ";  // 提示输入体重
  std::cin >> weight;                 // std::cin捕获用户输入的体重数据
  bmi = weight / (height * height);   // 核心函数
  std::cout << "Your BMI is " << bmi << "\n";
  return 0;
}
