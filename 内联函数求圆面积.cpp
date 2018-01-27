// 这个没有跑通的内联函数 让我很生气

#include <iostream>
using namespace std;

const double PI = 3.1415965358979;
inline double calArea（double radius){
    return PI*radius*radius;
}

int main(){
    double r = 3.0;
    double area = calArea(r);
    cout << area << endl;
    return 0;
    