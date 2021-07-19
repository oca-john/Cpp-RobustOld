#include <iostream>
using namespace std;

// With int return, 返回值为 int 类型，末尾有 return int;
int sayHello() {
	cout << "Hello Oca!\n";
	return 0;			// 返回 0(int) 表示程序正常执行完毕
}

// With no return, 返回值为 void/空值 类型
void sayHi() {
	cout << "Hi xi!\n";// 末尾无需返回值
}

// // 定义函数，返回值为整型
// int func(){
// 	func_body;
// 	return 0;
// }
// // 直接用函数名和参数调用
// func();

// The only one main function
int main()
{	
	sayHi();
	cout << "What is your name?" << endl;
	cin >> name;
	cout << "Nice to meet you, " << name << endl;
	return 0;
}
