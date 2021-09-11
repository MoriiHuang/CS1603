#ifndef LLICOMPLEX_H
#define LLICOMPLEX_H
#include"longlongint.h"
class longlongintcomplex
{
    friend longlongintcomplex operator+(const longlongintcomplex &llic1, const longlongintcomplex &llic2);
    friend ostream &operator<<(ostream &os, const longlongintcomplex &llic);
private:
    LongLongInt real, imag;

public:
    longlongintcomplex(LongLongInt r = "0", LongLongInt i = "0"):  real{ r }, imag{ i } { };
    LongLongInt get_real() const { return real; }
    LongLongInt get_imag() const { return imag; }
};
#endif // LLICOMPLEX_H
