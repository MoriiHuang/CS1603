#ifndef SIGNLONGLONGINT_H
#define SIGNLONGLONGINT_H
#include"longlongint.h"
class signLLI : public LongLongInt
{
    friend signLLI operator-(const signLLI &slli);
    friend signLLI operator+(const signLLI &slli1, const signLLI &slli2);
    friend signLLI operator-(const signLLI &slli1, const signLLI &slli2) { return slli1 + (-slli2); }
    friend ostream &operator<<(ostream &os, const signLLI &slli);
private:
    bool sign; // 0 for positive, 1 for negative
    signLLI(const LongLongInt &temp, bool s)
        :LongLongInt{ temp }, sign{ s } { }
public:
    signLLI(const char *num);
};
#endif // SIGNLONGLONGINT_H
