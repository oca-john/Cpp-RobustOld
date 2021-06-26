#include <iostream>
using namespace std;
 
int main()
{    
    int divisor, dividend, quotient, remainder;
 
    cout << "输入被除数: ";
    cin >> dividend;
 
    cout << "输入除数: ";
    cin >> divisor;
 
    quotient = dividend / divisor;
    remainder = dividend % divisor;
 
    cout << "商 = " << quotient << endl;
    cout << "余数 = " << remainder;
 
    return 0;
}
