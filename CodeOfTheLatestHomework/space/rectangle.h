#ifndef RECTANGLE_H
#define RECTANGLE_H

#include"Shape.h"
class Rectangle: public Shape
{
protected: double w,h;
public:
    Rectangle(double xx,double yy,double ww,double hh):
        Shape(xx,yy),w(ww),h(hh){}
    double area() const {return w*h;}
    double circum() const {return 2*(w+h);}
    void show_position() const
    {
         cout<<"("<<(int )x<<","<<(int )y<<")\n";

    }
};

#endif // RECTANGLE_H
