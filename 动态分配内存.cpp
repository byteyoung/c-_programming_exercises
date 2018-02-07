#include <iostream>
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

int main(){
    cout <<"Step one: "<<endl;
    Point *ptr1 = new Point;
    delete ptr1;
    
    cout<<"Step two: "<<endl;
    ptr1 =new Point(1,2);
    delete ptr1;

    return 0;
}
