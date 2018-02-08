
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class SavingsAccount{
private:
    int id;
    double balance;
    double rate;
    int lastDate;
    double accumulation;
    double accumulate(int date){
        return accumulation+balance*(date-lastDate);
    };
    void record(int date,double amount);
public:
    SavingsAccount(int date,int id,double rate);
    int getld(){return id;};
    double getBalance(){return balance;};
    double getRate(){return rate;};
    void show();
    void deposit(int date,double amount);
    void withdraw(int date,double amount);
    void settle(int date);
};

SavingsAccount::SavingsAccount(int date,int id,double rate):id(id),balance(0),rate(rate),lastDate(date),accumulation(0){cout<<id<<" is created"<<endl;};

void SavingsAccount::record(int date,double amount){
    accumulation=accumulate(date);
    lastDate=date;
    amount=floor(amount*100+0.5)/100;
    balance+=amount;
    cout<<date<<"\t"<<id<<"\t"<<amount<<"\t"<<balance<<endl;
};

void SavingsAccount::show(){cout<<"#"<<id<<"\tBalance:"<<balance<<endl;};
void SavingsAccount::deposit(int date,double amount){record(date,amount);};
void SavingsAccount::withdraw(int date,double amount){record(date,-amount);};

void SavingsAccount::settle(int date){
    double interest = accumulate(date)*rate/365;
    if (interest!=0)
        record(date, interest);
    accumulation=0;};

int main(){
    SavingsAccount sa0(1,10001,0.015);SavingsAccount sa1(1,10002,0.015);
    sa0.deposit(5, 5000);sa1.deposit(23,10000);
    sa0.deposit(45, 5500);sa1.withdraw(60, 2100);
    sa0.settle(90);sa1.settle(90);
    sa0.show();sa1.show();
    return 0;
}
