//
//  CLIENT.hpp
//  jan_try2
//
//  Created by suke on 2018/2/6.
//  Copyright © 2018年 suke. All rights reserved.
//

#ifndef CLIENT_hpp//避免重复包含
#define CLIENT_hpp



class Client{
    static char ServerName;
    static int ClientNum;
public:
    static void ChangeServerName(char name);
    static int getClientNum();
};

#endif /* CLIENT_hpp */
