//
//  CLIENT.cpp
//  jan_try2
//
//  Created by suke on 2018/2/6.
//  Copyright © 2018年 suke. All rights reserved.
//

#include "CLIENT.hpp"

void Client::ChangeServerName(char name){
    Client::ServerName = name;
    Client::ClientNum ++;
}

//对于静态都要用类名作为引用
int Client::getClientNum(){
    return Client::ClientNum;
}
