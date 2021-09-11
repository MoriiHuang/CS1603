#ifndef LONGLONGINT_H
#define LONGLONGINT_H
#include<iostream>
#include<cstring>
using namespace std;
class LongLongInt{
       friend LongLongInt operator+(const LongLongInt &lli1, const LongLongInt &lli2);
       friend LongLongInt operator-(const LongLongInt &lli1, const LongLongInt &lli2);
       friend ostream &operator<<(ostream &os, const LongLongInt &lli);
private:
   char *num;
   LongLongInt(char *num_rep) :num{ num_rep } { }
public:
   LongLongInt(const char *num);
   LongLongInt(const LongLongInt &other);
   ~LongLongInt(){delete[] num;}
};

#endif // LONGLONGINT_H
