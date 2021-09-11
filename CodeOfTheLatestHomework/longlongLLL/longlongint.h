#ifndef LONGLONGINT_H
#define LONGLONGINT_H
#include<iostream>
using namespace std;
class LongLongInt
{
    friend LongLongInt operator+(const LongLongInt &lli1, const LongLongInt &lli2);
    friend LongLongInt operator-(const LongLongInt &lli1, const LongLongInt &lli2);
    friend bool operator!=(const LongLongInt &lli1, const LongLongInt &lli2);
    friend bool operator==(const LongLongInt &lli1, const LongLongInt &lli2) { return !(lli1 != lli2); }
    friend bool operator<(const LongLongInt &lli1, const LongLongInt &lli2);
    friend ostream &operator<<(ostream &os, const LongLongInt &lli);
protected:
    char *num;
    LongLongInt(char *num_rep) :num{ num_rep } { }
public:
    LongLongInt(const char *num);
    LongLongInt &operator=(const LongLongInt &other);
};

#endif // LONGLONGINT_H
