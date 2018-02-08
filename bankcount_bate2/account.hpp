//
//  account.hpp
//  ttd
//
//  Created by suke on 2018/2/8.
//  Copyright © 2018年 suke. All rights reserved.
//

#ifndef account_hpp
#define account_hpp

#include <string>
#include "date.hpp"


class SavingsAccount //储蓄账户类

{
    
private:
    
    std::string id; //账号
    
    double balance; //余额
    
    double rate; //存款的年利率
    
    Date  lastDate; //上次变更余额的日期
    
    double accumulation; //余额按日累加之和
    
    static double total; //所有账户的总金额
    
    //记录一笔账，date为日期，desc为说明,amount为金额
    
    void record(const Date &date, double amount,const std::string &desc);
    
    //报告错误信息
    void error(const std::string &msg)const;
    //获得到指定日期为止的存款金额按日累积值
    double accumulate(const Date &date) const
    
    {
        
        return accumulation + balance*date.distance(lastDate);
        
    }
    
public:
    
    //构造函数
    
    SavingsAccount(const Date &date, const std::string &id, double rate);
    
    const std::string &getId() const { return id; }
    
    double getBalance() const { return balance; }
    
    double getRate() const { return rate; }
    
    static double getTotal() { return total; }
    
    void deposit(const Date &date, double amount, const std::string &desc); //存入现金
    
    void withdraw(const Date &date, double amount,const std::string &desc); //取出现金
    
    //结算利息，每年1月1日调用一次该函数
    
    void settle(const Date &date);
    
    //显示账户信息
    
    
    
    void show() const;
    
};

#endif /* account_hpp */
