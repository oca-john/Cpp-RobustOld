#include <iostream>
#include <stdio.h>
 
using namespace std;            //使用标准命名空间
 
int main() {
    int i;
    int arr_1[] = {2,4,5,1,3};  //初始化
    //访问数组
    for (i=0;i<5;i++){
        printf("arr_1[%d] = %d\n",i,arr_1[i]);
    }
 
    return 0;
}
