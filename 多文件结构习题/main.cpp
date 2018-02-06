//
//  main.cpp
//  jan_try2
//
//  Created by suke on 2018/1/23.
//  Copyright © 2018年 suke. All rights reserved.
//

#include <iostream>
#include "CLIENT.hpp"
using namespace std;


int Client::ClientNum=0;
char Client::ServerName = 'a';

int main(){
    Client c1;
    c1.ChangeServerName('a');
    cout<<c1.getClientNum()<<endl;
    
    Client c2;
    c2.ChangeServerName('b');
    cout<<c2.getClientNum()<<endl;
    
        return 0;
}

