//
//  main.cpp
//  ttd
//
//  Created by suke on 2018/2/8.
//  Copyright © 2018年 suke. All rights reserved.
//

//第六章完整代码
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
#include "account.hpp"
#include "date.hpp"


int main(){
    Date date(2008, 11, 1);
    
    //建立几个账户
    SavingsAccount accounts[] = {
        
        SavingsAccount(date, "03755217", 0.015),
        
        SavingsAccount(date, "02342342", 0.015)
        
        
    };
    const int n = sizeof(accounts) / sizeof(SavingsAccount);//账户总数
    
    
    //11月的几笔账目
    
    accounts[0].deposit(Date(2008, 11, 5), 5000, "salary");
    accounts[1].deposit(Date(2008, 11, 25), 10000, "sell stock 0323");
    //12月的几笔账目
    accounts[0].deposit(Date(2008, 12, 5), 5500, "salary");
    accounts[1].withdraw(Date(2008, 12, 20), 4000, "buy a laptop");
    //结算所有的账户并输出各个账户信息
    cout << endl;
    for (int i = 0;i < n;i++) {
        accounts[i].settle(Date(2009, 1, 1));
        accounts[i].show();
        cout << endl;
    }
    cout << "Total: " << SavingsAccount::getTotal() << endl;
    return 0;
}
