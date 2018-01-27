#include <iostream>
using namespace std;
//版本 1.0
//钟表的类抽象
class Clock{
public:
    void setTime(int newH=0,int newM=0,int newS=0);
    void showTime();
private:
    int hour,minute,second;
};

void Clock::setTime(int newH,int newM,int newS){
    hour = newH;
    minute = newM;
    second = newS;
}
void Clock::showTime(){
    cout << hour<<":"<<minute<<":"<<second<<endl;
}

int main (){
    Clock myclock;
    myclock.setTime(8,30,30);
    myclock.showTime();
    return 0;
    
    
}


// 版本 2.0
class Clock{
public:
    Clock(int newH ,int newM,int newS);
    Clock();//构造函数
    void setTime(int newH=0,int newM=0,int newS=0);
    void showTime();
private:
    int hour,minute,second;
};

void Clock::setTime(int newH,int newM,int newS){
    hour = newH;
    minute = newM;
    second = newS;
}
inline void Clock::showTime(){
    cout << hour<<":"<<minute<<":"<<second<<endl;
}

//构造函数
Clock::Clock(int newH,int newM,int newS):hour(newH),minute(newM),second(newS){}

Clock::Clock():hour(0),minute(0),second(0){}

int main (){
    Clock c1(8,10,0);
    Clock c2;
    c1.showTime();
    return 0;
    
    
}