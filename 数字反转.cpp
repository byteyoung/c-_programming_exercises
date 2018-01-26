
#include <iostream>
using namespace std;

bool symm(unsigned x);

int main(){
    unsigned i;
    
    for(i=11;i<99;i++){
        if (symm(i*i)&&symm(i*i*i)&&symm(i))
            cout<<"This num is huiwen num:"<<i<<"\n";
    }
    return 0;
};

bool symm(unsigned x){
    unsigned i = x;
    unsigned m = 0;
    while(i>0){
        m = m*10+i%10;
        i/=10;
    }
    return m==x;
}
 