#include <iostream>
#include <math.h>
using namespace std;

class Point{
private:
    float x,y;
public :
    Point(float xx,float yy);
    Point(Point &p);
    float getX();float getY();void draw();
};

Point::Point(float xx,float yy){x = xx;y =yy;}
Point::Point(Point &p){x = p.x;y =p.y;cout<<"calling"<<endl;}
float Point::getX(){return x;}
float Point::getY(){return y;}
void Point::draw(){}

//组合类 线段类
class Line{
    private :
        Point p1,p2;
        float len;
    
    public:
        float getLen();
        Line(Point a,Point b);
        Line(Line &l);
        void draw(void);
        };

//组合类的构造函数
Line::Line(Point xp1 , Point xp2 ):p1(xp1),p2(xp2){
    cout <<"Calling costructor of Line"<<endl;
    double x = static_cast<double>(p1.getX()-p2.getX());
    double y = static_cast<double>(p1.getY()-p2.getY());
    len = sqrt(x*x + y*y);
}
// 组合类的拷贝函数
Line::Line(Line &l):p1(l.p1),p2(l.p2){
    cout<<"Calling the copy cinstructor of line"<<endl;
    len = l.len; 
}

float Line::getLen(){
    return len;
};

int main (){
    Point myp1(1,1),myp2(4,5);
    Line line(myp1,myp2);
    Line line2(line);
    cout <<"This length of the line is :"<<line2.len<<endl;
}
