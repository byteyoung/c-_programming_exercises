#include <iostream>
using namespace std;
void move(char src ,char dest){
    cout <<src << "-->"<<dest<<endl;
}
void hannoi(int n, char src ,char medium,char dest){
    if (n==1)
        move(src,dest);
    else {
        hannoi(n-1,src,dest,medium);
        move(src,dest);
        hannoi(n-1,medium,src,dest);
    }
}

int main(){
    int m;
    cout << "Please input the number of diskes:";
    cin >> m ;
    cout <<"the steps of moving "<<m<<" diskes"<<endl;
    hannoi(m,'A','B','C');
    return 0;
    
}