#include <iostream>
using namespace std;


// With int return, 返回值为 int 类型，末尾有 return int;
int sayHi() {
	cout << "Hello Oca!\n";
	return 0;			// 返回 0(int) 表示程序正常执行完毕
}


// With no return, 返回值为 void/空值 类型
void sayHi() {
	cout << "Hello xi!\n";// 末尾无需返回值
}
