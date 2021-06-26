#include <iostream>
using namespace std;//使用标准命名空间
 
class Mycircle{
private:
    double r;
    double s;
public:
    void setR(double r){
        this->r = r;
    }
    double gets(){
        return PI*r*r;
    }
};
 
int main() {
    Mycircle c1;
    c1.setR(4);
    cout << "半径为4的圆的面积为：" << c1.gets() << endl;
    return 0;
}
