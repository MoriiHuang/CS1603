#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
using namespace std;
const double pi=3.1415926535898;
class Shape{
protected:
    double x,y;
public:
    Shape(double xx=0,double yy=0){x=xx;y=yy;}
    virtual double area() const{return 0.0;}
    virtual double circum() const{return 0.0;}
    virtual void show_position() const
    {
      cout<<"Position("<<(int)x<<","<<(int)y<<")\n";
    }
};
#endif // SHAPE_H
