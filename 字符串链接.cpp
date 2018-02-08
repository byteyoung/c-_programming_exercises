/*
//bate1
#include<iostream>
using namespace std;

char *link(char* a,char*b){
    int m=0,n=0;
    while(a[m]!='\0')
        m++;
    while(b[n]!='\0')
        n++;
    char *c = new char[n+m+1];
    for(int i=0;i<m;i++)
        c[i]=a[i];
    for (int i=m; i<m+n; i++)
        c[i]=b[i-m];
    c[n+m]='\0';
    return c;
}

int main(){
    char a[]="abc";
    char b[]="hhdef";
    cout<<link(a, b)<<endl;
    return 0;
}

*/

//bate_2
#include<iostream>
#include <string>
using namespace std;


int main(){
    string s1="fef",s2="wqe";
    cout<<s1+s2<<endl;
    return 0;
}