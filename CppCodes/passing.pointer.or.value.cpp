#include <iostream>
using namespace std;//使用标准命名空间
 
//通过指针进行值交换
void swap_1(int *a,int *b ){
    int c;
    c = *b;
    *b = *a;
    *a = c;
}
// 直接进行值交换
void swap_2(int x,int y ){
    int z;
    z = x;
    y = x;
    x = z;
}
 
int main() {
    int a = 10;
    int b = 20;
    int x = 10;
    int y = 20;
 
    swap_1(&a,&b);
    cout << "a的值：" << a << endl;
    cout << "b的值：" << b << endl;
 
    swap_2(x,y);
    cout << "x的值：" << x << endl;
    cout << "y的值：" << y << endl;
    return 0;
}
