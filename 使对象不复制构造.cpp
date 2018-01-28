#include <iostream>
using namespace std;

//不希望对象被复制构造
class Point{
public:
    Point(int xx=0,int yy=0){x = xx;y = yy;}
    Point(const Point &p) // =delete;//指示编译器不要生成默认函数
    int getX();{return x;}
    int getY();{return y;}
private:
    int x,y ;
};

Point::Point(const Point &p){
    x = p.x;
    y = p.y;
    cout << "calling the copy constructor"<<endl;   
}

void fun1(Point p){
    cout <<p.getX()<<endl;
}

Point fun2(){
    Point a;
    return a;
}


int main (){
    Point a;
    Point b(a);//用a去初始化b 这里调用了复制构造函数 
    cout << b.getX()<<endl;
    fun1(b);//先进行行参和实参的结合 
    b = fun2();// 在返回的过程中 发生复制构造 构造临时对象  （赋值 有赋值函数）
    cout << b.getX()<<endl;
        return 0;
    
    
}
