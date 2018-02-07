#include <iostream>
using namespace std;
class Point{
private:
    int x,y;
public:
    Point(int x,int y):x(x),y(y){};
    int getx(){return x;};
    int gety(){return y;};
};
int main(){
    Point a(4,5);
    Point *ptr;
    ptr = &a;
    cout<<ptr->getx()<<endl;
    cout<<(*ptr).gety()<<endl;
    return 0;
}
