#include <iostream>
using namespace std;

//析构函数
class Point{
public:
    Point(int xx,int yy);
    ~Point();
private:
    int x,y ;
};

Point::Point(int xx,int yy){
    x = xx;
    y = yy;
    cout << "calling the copy constructor"<<endl;
}
Point::~Point(){
}

int main (){
        return 0;
}
