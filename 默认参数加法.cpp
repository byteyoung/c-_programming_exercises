#include <iostream>
using namespace std;

int add(int x= 5,int y =6){
    return x+y;
}
int main(){
    cout << add(10,20)<<"\n";
    cout << add(10)<<"\n";
    cout << add()<<"\n";
}