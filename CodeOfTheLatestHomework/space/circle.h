#ifndef CIRCLE_H
#define CIRCLE_H

#include"Shape.h"
class Circle :public Shape
{
protected:
    double r;
public:
    Circle(double xx,double yy,double rr): Shape(xx,yy),r(rr){}
    double area() const{return pi*r*r;}
    double circum() const{return 2*pi*r;}
    void show_position() const
    {
         cout<<"("<<(int) x<<","<<(int)y<<")\n";

    }
};

#endif // CIRCLE_H
