#include<iostream>
using namespace std;

class B{
public:
    B(){b=0;cout<<"B's default constructor called."<<endl;};
    B(int i):b(i){cout<<"B's constructor called."<<endl;};
    ~B(){cout<<"B's destructor called."<<endl;};
    void print()const{cout<<b<<endl;};
private:
    int b;
};

class C:public B{
public:
    C(){c=0;cout<<"C's default constructor called."<<endl;};
    C(int i,int j):B(i),c(j){cout<<"C's constructor called."<<endl;};
    ~C(){cout<<"C's destructor called."<<endl;};
    void print() const{B::print();cout<<c<<endl;};
private:
    int c;
};
int main(){
    C obj,obj2(1,2);
    obj.print();
    obj2.print();
    return 0;
}

