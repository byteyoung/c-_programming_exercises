
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
    
    Point *ptr = new Point[2];
    ptr[0].move(1, 2);
    ptr[1].move(3, 4);
    cout<<"Deleting ..."<<endl;

    delete[] ptr;
    
    return 0;
}
