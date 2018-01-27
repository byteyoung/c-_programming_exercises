#include <iostream>
using namespace std;

//不希望对象被复制构造
class Point{
public:
    Point(int xx=0,int yy=0){x = xx;y = yy;}
    Point(const Point &p)=delete;//指示编译器不要生成默认函数
private:
    int x,y ;
};


int main (){
        return 0;
    
    
}