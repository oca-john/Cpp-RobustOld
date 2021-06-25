#include <iostream>
using namespace std;
 
int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers;
    
    cout << "输入两个整数: ";
    cin >> firstNumber >> secondNumber;
 
    // 相加
    sumOfTwoNumbers = firstNumber + secondNumber;
 
    // 输出
    cout << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;     
 
    return 0;
}
