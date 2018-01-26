
#include <iostream>
using namespace std;

int fac(int n){
    int f;
    if (n==1)
        f=1;
    else
        f=n*fac(n-1);
    return f;
}

int main(){
    unsigned n;
    cout<<"Enter a positive integer:";
    cin >> n;
    unsigned y = fac(n);
    cout << n<<"!="<<y<<endl;
    return 0;
    
}