#include <iostream>
#include <stdio.h>
 
using namespace std;//使用标准命名空间
 
int main() {
 
    char str_1[6] = {'H','e','l','l','o','\0'};
    //字符串实际上是使用 null 字符 \0 终止的一维字符数组
    //由于在数组的末尾存储了空字符，所以字符数组的大小比单词 Hello 的字符数多一个
 
    cout << str_1 << endl;
 
    //依据数组初始化规则，您可以把上面的语句写成以下语句：
    char str_2[] = "Hello";
    cout << str_2 << endl;
 
    return 0;
}
