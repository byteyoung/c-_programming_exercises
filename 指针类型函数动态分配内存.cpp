#include <iostream>
using namespace std;

int main(){
    int* newintvar();
    int* intptr = newintvar();
    *intptr = 5;
    cout<<*intptr<<endl;
    delete intptr;
    return 0;
}

int *newintvar(){
    int* p=new int();
    return p;
}