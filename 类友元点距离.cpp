#include <iostream>
#include <cmath>
using namespace std;

class Point{
private:
    int x;
    int y;
public:
    Point(int x=0,int y=0):x(x),y(y){};
    Point(Point &p){x=p.x;y=p.y;};
    ~Point(){};
    int getX(){return x;}
    int getY(){return y;}
    friend float dist(Point &a,Point &b);

};
float dist(Point &a,Point &b){
    double x= a.x-b.x;
    double y= a.y-b.y;
    return static_cast<float>(sqrt(x*x+y*y));
    
}


int main(){
    Point p1(4,5),p2(1,1);
    cout<<"The distance is:"<<dist(p1,p2)<<endl;

    return 0;
    
}