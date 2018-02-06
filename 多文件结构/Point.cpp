//
//  Point.cpp
//  jan_try2
//
//  Created by suke on 2018/2/6.
//  Copyright © 2018年 suke. All rights reserved.
//

#include "Point.hpp"
#include <cmath>

float dist(const Point &p1, const Point &p2){
    double x= p1.x-p2.x;
    double y= p1.y-p2.y;
    return static_cast<float>(sqrt(x*x+y*y));
}
