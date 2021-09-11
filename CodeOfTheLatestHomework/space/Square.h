#ifndef SQUARE_H
#define SQUARE_H
#include"Shape.h"
#include"rectangle.h"
class Square:public Rectangle{
protected:
    double S;
public:
    Square(double sx,double sy,double ss ):Rectangle(sx,sy,ss,h){}
    double area() const {return w*w;}
    double circum() const {return 4*w;}
    void show_position() const
    {
         cout<<"("<<(int)x<<","<<(int)y<<")\n";

    }
};

#endif // SQUARE_H
