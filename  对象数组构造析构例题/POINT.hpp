//
//  POINT.hpp
//  jan_try2
//
//  Created by suke on 2018/2/6.
//  Copyright © 2018年 suke. All rights reserved.
//


#ifndef POINT_hpp
#define POINT_hpp


class Point{
public:
    Point();
    Point(int x,int y);
    //Point(const Point &p){x=p.x;y=p.y;};
    ~Point();
    void move(int newX,int newY);
    int getX(){return x;};
    int getY(){return y;};
    static void showCount();
private:
    int x,y;};


#endif /* POINT_hpp */
