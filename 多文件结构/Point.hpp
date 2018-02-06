//
//  Point.hpp
//  jan_try2
//
//  Created by suke on 2018/2/6.
//  Copyright © 2018年 suke. All rights reserved.
//

#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>
#include <cmath>

#endif /* Point_hpp */

class Point{
public:
    Point(int x,int y):x(x),y(y){};
    Point(const Point &p){x=p.x;y=p.y;};
    ~Point(){};
    int getX(){return x;};
    int getY(){return y;};
    friend float dist(const Point &p1,const Point &p2);
private:
    int x,y;};

