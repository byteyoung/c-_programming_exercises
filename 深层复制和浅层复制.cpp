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
    ArrayOfPoint(const ArrayOfPoint& pointsArray);
    ~ArrayOfPoint(){cout<<"Deleting ...\n";delete[] points;}
    Point& element(int index){
        assert(index >=0 && index<size);
        return points[index];
    }
private:
    int size;
    Point *points;
};

ArrayOfPoint::ArrayOfPoint(const ArrayOfPoint& v){
    size = v.size;
    points = new Point[size];
    for(int i =0;i<size;i++)
        points[i] = v.points[i];
}

int main(){
    int count;
    cout<<"Please enter the count of points: ";
    cin>>count;
    
    ArrayOfPoint pointsArray1(count);
    pointsArray1.element(0).move(5, 10);
    pointsArray1.element(1).move(15, 20);
    
    ArrayOfPoint pointsArray2(pointsArray1);
    
    cout<<"Copy of pointsArray1: "<<endl;
    cout<<"Point_0 of array2:"<<pointsArray2.element(0).getx()<<"," << pointsArray2.element(0).gety()<<endl;
    cout<<"Point_0 of array2:"<<pointsArray2.element(1).getx()<<"," << pointsArray2.element(1).gety()<<endl;
    
    pointsArray1.element(0).move(35, 10);
    pointsArray1.element(1).move(25, 20);
    
    cout<<"Copy of pointsArray1: "<<endl;
    cout<<"Point_0 of array2:"<<pointsArray2.element(0).getx()<<"," << pointsArray2.element(0).gety()<<endl;
    cout<<"Point_0 of array2:"<<pointsArray2.element(1).getx()<<"," << pointsArray2.element(1).gety()<<endl;
    return 0;
}
