//
//  main.cpp
//  jan_try
//
//  Created by suke on 2018/1/23.
//  Copyright © 2018年 suke. All rights reserved.
//

#include <iostream>
using namespace std;
//const float PI = 3.1416;

struct MyTimeStruct
{   unsigned int year;
    unsigned int month;
    unsigned int day;
    
    unsigned int hour;
    unsigned int min;
    unsigned int sec;
    
};


int main(int argc, const char * argv[]) {
    // task1
    //cout << "Hello, World!\n";
    
    // task2
    //cout << "This size of an long is : " << sizeof(int) << "bytes.\n";
    //cout << "This size of an long is : " << sizeof(long) << "bytes.\n";
    
    // task3
    /*
    int x;
    unsigned int y = 100;
    unsigned int z = 50;
    x = y-z;
    cout << "difference id :" << x<<"\n";
    x = z-y ;
    cout << "difference id :" << x<<endl;
    */
    
    // task 4
    /*
    int a,b,x;
    cout<<"input value of a:\n";
    cin >>a;
    cout<<"input value of b:\n";
    cin >>b;
    x = (a-b)>0?(a-b):(b-a);
    cout << "The difference of a and b is:"<<x<<"\n";
    */
    
    
    // task 5
    // 用do-while语句从1加到10
    /*
     int sum = 0,i = 1;
    do{
        sum += i;
        i ++ ;
    }while(i<=10);
    cout << "sum = "<<sum<<endl;
    */
    

    // task 6
    // 用for语句从1加到10
    /*
    int sum = 0;
     int i ;
     for(i=1;i<=10;i++){
        sum += i;
     }
     cout << "sum = "<<sum<<endl;
    */
    
    //task 7
    // 选择形状计算面积
    /*
    int itype;
    float radius,a,b,area;
    
    cout<< "请输入图像类型（1-圆形 2-长方形 3-正方形）:";
    cin >> itype;
    switch(itype){
        case 1:
            cout<<"圆的半径是：";
            cin >>radius;
            area = PI * radius*radius;
            cout <<"面积为："<<area<<endl;
            break;
        case 2:
            cout<<"长方形的长是：";
            cin >>a;
            cout<<"长方形的宽是：";
            cin >>b;
            area = a*b;
            cout <<"面积为："<<area<<endl;
            break;
        case 3:
            cout<<"正方形的边长是：";
            cin >>a;
            area = a*a;
            cout <<"面积为："<<area<<endl;
            break;
    }
    */

    //task 8
    
/*
    MyTimeStruct myTime = {2015,3,16,12,0,0};
 
    cout<<"please input year:"<<endl;
    cin>>myTime.year;
    cout<<"please input month:"<<endl;
    cin>>myTime.month;
    cout<<"please input day:"<<endl;
    cin>>myTime.day;
    
    cout<<"please input hour:"<<endl;
    cin>>myTime.hour;
    cout<<"please input min:"<<endl;
    cin>>myTime.min;
    cout<<"please input sec:"<<endl;
    cin>>myTime.sec;
 
    cout<<"the time is set to:"<<myTime.year<<"/"<<myTime.month<<"/"<<myTime.day<<" "
                                <<myTime.hour<<":"<<myTime.min<<":"<<myTime.sec<<endl;
    
   */

    
    return 0;
}
