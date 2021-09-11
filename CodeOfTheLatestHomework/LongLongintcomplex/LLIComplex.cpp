#include"LLIComplex.h"
longlongintcomplex operator+(const longlongintcomplex &llic1, const longlongintcomplex &llic2)
{
    LongLongInt real = llic1.get_real() + llic2.get_real();
    LongLongInt imag = llic1.get_imag() + llic2.get_imag();
    return longlongintcomplex{ real, imag };
}

ostream &operator<<(ostream &os, const longlongintcomplex &llic)
{
    if (llic.get_real() != "0" || llic.get_imag() == "0")
        os << llic.get_real();
    if (llic.get_real() != "0" && llic.get_imag() != "0")
        os << '+';
    if (llic.get_imag() != "0")
        os << llic.get_imag() << 'i';
    return os;
}
