

#include <iostream>
using namespace std;

class A{
    friend class B;
public:
    void display(){
        cout<<x<<endl;}
private:
    int x;
};

class B{
public:
    void set(int i);
    void display();
private:
    A a;
};

void B::set(int i){
    a.x=i;
}

void B::display(){
    a.display();
}