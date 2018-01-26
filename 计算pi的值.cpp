#include <iostream>
using namespace std;

double arctan(double x);

int main(){
    double pi;
     pi = 16*arctan(1/5.0)-4*arctan(1/239.0);
     cout<<"The value of pi is:"<<pi<<endl;
    
    return 0;
};

 double arctan(double x){
     int i = 1;
     double val = 0,item =x;
     while(item>=1e-15){
        val += (i%2==1)? item : -1*item;
         i += 1;
         item = item*x*x*(2*i-1)/(2*i+1);
     }
 return val;
 };

