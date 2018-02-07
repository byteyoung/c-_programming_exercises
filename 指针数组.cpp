#include <iostream>
using namespace std;


int main(){
    int line1[]={1,0,2};
    int line2[]={3,1,8};
    int line3[]={4,6,9};
    
    int *pLine[3]={line1,line2,line3};
    cout <<"Matrix text:"<<endl;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cout<<pLine[i][j]<<"\t";
        cout<<endl;
    }
}