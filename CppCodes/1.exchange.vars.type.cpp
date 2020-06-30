// 测试类型转换语法
// A方法：(data-type)x
// B方法：data-type(x)

#include <iostream>

int main() {
	int x;		// 初始化
	x = 7;		// 赋值
	std::cout << float(x)/3 << std::endl;
	return 0;
}
