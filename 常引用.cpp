#include <iostream>
#include <cmath>
using namespace std;

class Point{
public:
    Point(int x,int y):x(x),y(y){};
    Point(const Point &p){x=p.x;y=p.y;};
    ~Point(){};
    int getX(){return x;};
    int getY(){return y;};
    friend float dist(const Point &p1,const Point &p2);
private:
    int x,y;};

float dist(const Point &p1, const Point &p2){
    double x= p1.x-p2.x;
    double y= p1.y-p2.y;
    return static_cast<float>(sqrt(x*x+y*y));
}




int main(){
    const Point myp1(1,1),myp2(4,5);
    cout<<"The distance is :"<<dist(myp1,myp2)<<endl;
        return 0;
}