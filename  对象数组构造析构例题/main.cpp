//
//  main.cpp
//  jan_try2
//
//  Created by suke on 2018/1/23.
//  Copyright © 2018年 suke. All rights reserved.
//

#include <iostream>
#include "POINT.hpp"
using namespace std;

int main(){
    cout<<"Entering main..."<<endl;
    Point a[2]={Point(1,1)};
    for(int i=0;i<2;i++)
        a[i].move(i+10, i+20);
    cout<<"Exiting main..."<<endl;
    return 0;
}

