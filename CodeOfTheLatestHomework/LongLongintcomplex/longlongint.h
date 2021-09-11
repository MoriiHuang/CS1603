#ifndef LONGLONGINT_H
#define LONGLONGINT_H
#include<iostream>
#include<cstring>
using namespace std;
class LongLongInt{
        friend LongLongInt operator+(const LongLongInt &lli1, const LongLongInt &lli2);
        friend bool operator!=(const LongLongInt &lli1, const LongLongInt &lli2);
        friend bool operator==(const LongLongInt &lli1, const LongLongInt &lli2) { return !(lli1 != lli2); }
        friend ostream &operator<<(ostream &os, const LongLongInt &lli);
private:
    char* num;
   LongLongInt (char *num_rep, int): num{num_rep}{}
    void create_space(const LongLongInt &other);
public:
    LongLongInt(char *num);
    LongLongInt(const LongLongInt &other);
    LongLongInt &operator=(const LongLongInt &other);
    ~LongLongInt() { delete[] num; }
};
#endif // LONGLONGINT_H
