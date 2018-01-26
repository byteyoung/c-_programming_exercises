
#include <iostream>
#include <cstdlib>
using namespace std;

enum GameStatus{WIN,LOSE,PLAYING};
int rollDise();

int main(){
    int sum,mypoint=0;
    GameStatus status;
    unsigned seed;
    //int rollDice();
    cout<<"please enter an unsigned integer:";
    cin>>seed;
    srand(seed);
    sum = rollDise();
    switch(sum){
        case 7:
        case 11:
            status = WIN;
            break;
        case 2:
        case 3:
        case 12:
            status = LOSE;
            break;
        default:
            status = PLAYING;
            mypoint = sum;
            cout << "point is "<<mypoint<<endl;
            break;
    }
    while(status == PLAYING){
        sum = rollDise();
        if (sum == mypoint)
            status = WIN;
        else if(sum ==7)
            status  = LOSE;
    }
    if (status == WIN )
        cout <<"play wins"<<endl;
    else
        cout <<"play loses"<<endl;

    return 0;
    
}

int rollDise(){
    int die1 = 1+rand()%6;
    int die2 = 1+rand()%6;
    int sum = die1+die2;
    cout <<"play rolled"<<die1<<"+"<<die2<<"="<<sum<<endl;
    return sum;
    
}