#include <iostream>
using namespace std;
// 输入变量a，输入运算符，输入变量b
// 完成运算，并赋值给变量a，继续输入，实现连续计算

int main()
{
    float num1, num2;
    char op;
 
    cout << "输入数字: ";   // Former Num
    cin >> num1;

    cout << "输入运算符：+、-、*、/ : ";
    cin >> op;
 
    cout << "输入数字: ";   // Later Num
    cin >> num2;
 
    switch(op)
    {
        case '+':
            num1 << num1+num2;
            break;
 
        case '-':
            num1 << num1-num2;
            break;
 
        case '*':
            num1 << num1*num2;
            break;
 
        case '/':
            if (num2 == 0)
            {
                cout << "error不能除以零";
                break;
            }
            else
            {
                num1 << num1 / num2;
                break;
            }
 
        default:
            // 如果运算符不是 +, -, * 或 /, 提示错误信息
            cout << "Error!  请输入正确运算符。";
            break;
    }

    cout << "输入新的数字: "; // New Num as Later Num
    cin >> num2;

 
    return 0;
}
