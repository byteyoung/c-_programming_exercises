#include <iostream>
using namespace std;

class Part { //部件类
public:
    Part();
    Part(int i);
    ~Part();
    void Print();
private:
    int val;
};

class Whole{
public:
    Whole();
    Whole(int i, int j, int k);
    ~Whole();
    void Print();
private:
    Part one;
    Part two;
    int date;
};

Whole::Whole(){date = 0;}
Whole::Whole(int i,int j,int k):two(i),one(j),date(k){}
// 不太明白对于类的初始化时候传入的如果需要时需要时整个类怎么办
// 可以Whole::Whole(Part &i);
// 不太明白如果一个类中需要传入多个初始化的值怎么办
