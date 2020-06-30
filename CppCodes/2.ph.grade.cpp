#include <iostream>

// 对初始化的ph值进行判断，分为中性、酸性、碱性

int main() {
  double ph =4.6;                   // 初始化ph值
  if (ph > 7) {                     // 第一个判断条件，大于7是碱性
    std::cout << "It is Basic.\n";
  } else if (ph < 7) {              // 第二个判断条件，小于7是酸性
    std::cout << "It is Acidic.\n";
  } else {                          // 等于7是中性
    std::cout << "It is Neutral.\n";
  }
  return 0;
}
