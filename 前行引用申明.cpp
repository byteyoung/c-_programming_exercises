#include <iostream>
using namespace std;

class B;
class A{
public:
    void f(B b);
};
class B{
public:
    void g(A a);
};