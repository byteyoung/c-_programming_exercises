#include <iostream>
using namespace std;

int computer(int a,int b,int(*func)(int,int)){return func(a,b);}
int max(int a,int b){return ((a>b)?a:b);}
int min(int a,int b){return ((a<b)?a:b);}
int sum(int a,int b){return a+b;}

int main(){
    int a,b,res;
    cout<<"Enter two number: ";
    cin>>a;
    cin>>b;
    
    res =computer(a, b, &max);
    cout <<"max = "<<res<<endl;
    
    res =computer(a, b, &min);
    cout <<"min = "<<res<<endl;
    
    res =computer(a, b, &sum);
    cout <<"sum = "<<res<<endl;
    
    
    return 0;
}

