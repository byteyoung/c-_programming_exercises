#include<iostream>
#include <string>
using namespace std;

class Point{
private:
    float x,y;
public:
    void initPoint(float x=0,float y=0){this->x=x;this->y=y;}
    float getX()const{return x;}
    float getY()const{return y;}
    void move(float offx,float offy){x+=offx;y+=offy;}
};

class Rectangle:public Point{
public:
    void initRectangle(float x,float y,float w,float h){
        initPoint(x,y);
        this->w=w;
        this->h=h;
    }
    float getH()const{return h;}
    float getW()const{return w;}
private:
    float w,h;
};

int main(){
    Rectangle rect;
    rect.initRectangle(2, 3, 5, 4);
    rect.move(1,1);
    cout<<"This data of rect(x,y,w,h):"<<endl;
    cout<<rect.getX()<<" , "<<rect.getY()<<" , ";
    cout<<rect.getW()<<" , "<<rect.getH()<<endl;
    return 0;
}