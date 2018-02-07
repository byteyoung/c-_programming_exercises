#include <iostream>
#include <cassert>
using namespace std;

class Point{
private:
    int x,y;
public:
    Point():x(0),y(0){cout<<"Defuat Constructor called.\n";}
    Point(int x,int y):x(x),y(y){cout<<"Constructor called.\n";};
    ~Point(){cout<<"Destructor called.\n";}
    int getx(){return x;};
    int gety(){return y;};
    void move(int nx,int ny){x=nx;y=ny;}
};

class ArrayOfPoint{
public:
    ArrayOfPoint(int size):size(size){points =new Point[size];}
    ~ArrayOfPoint(){cout<<"Deleting ...";delete[] points;}
    Point& element(int index){
        assert(index >=0 && index<size);
        return points[index];
    }
private:
    int size;
    Point *points;
};

int main(){
    int count;
    cout <<"Please enter the count of points:";
    cin >> count;
    ArrayOfPoint points(count);
    points.element(0).move(5, 0);
    points.element(1).move(15, 20);
    
    
    
    return 0;
}

