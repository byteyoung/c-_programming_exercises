#include <iostream>
using namespace std;

enum class Side{ Right , Left };
enum class Thing{Wrong , Right};

int main(){
    Side s = Side::Right;
    Thing w = Thing::Wrong;
    cout << (s == w)<<endl; //会产生编译错误 因为底层类型不同
    return  0;
    
}
