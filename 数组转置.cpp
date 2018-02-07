#include <iostream>
using namespace std;

void swap(int &a,int &b){int temp = a;a=b;b=temp;}

int main(){

    int M[3][3];
    cout<<"Pleace enter the matrix~"<<endl;
    
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>M[i][j];
    cout<<"The origin Matrix is："<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cout<<M[i][j]<<"\t";
        cout<<endl;
    }
    for(int i=0;i<3;i++)
        for(int j=0;j<i;j++)
            swap(M[i][j],M[j][i]);

    
    cout<<"The T-Matrix is："<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<M[i][j]<<"\t";
        }
        cout<<endl;
    }

}