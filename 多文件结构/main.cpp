//
//  main.cpp
//  jan_try2
//
//  Created by suke on 2018/1/23.
//  Copyright © 2018年 suke. All rights reserved.
//

#include <iostream>

#include "Point.hpp"
using namespace std;


int main(){
    const Point myp1(1,1),myp2(4,5);
    cout<<"The distance is :"<<dist(myp1,myp2)<<endl;
        return 0;
}
