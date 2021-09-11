#ifndef MISTAKE_H
#define MISTAKE_H
#include<iostream>
using namespace std;
class Base
{
public:
    int data;
    Base(int i=1){data=i;}
    Base operator+(const Base &r)  const{Base tmp; tmp.data=data+r.data;return tmp;}
};
   class Derived {
       friend ostream &operator<<(ostream &os,Derived &t3);
       friend Derived operator+(const Derived &t1,const Derived &t2){
        Derived tmp; tmp.n=t1.n+t2.n;return tmp;
       }
   public: Base n;
       Derived(int i=0):n(i){}
   };
   ostream &operator<<(ostream &os,Derived &t3){
       Base tmp=t3.n;
       os<<tmp.data;
       return os;
   }
#endif // MISTAKE_H
