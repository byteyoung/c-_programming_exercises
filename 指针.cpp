
#include <iostream>
using namespace std;

#if 0

int main(){
    int i;
    int *ptr=&i;
    i=10;
    cout<<"i="<<i<<endl;
    cout<<"*ptr="<<*ptr<<endl;
    return 0;
}

#else


int main(){
    void *pv;
    int i=5;
    pv = &i;
    int *pint = static_cast<int*>(pv);
    cout<<"*pint= "<<*pint<<endl;
    return 0;
}

#endif