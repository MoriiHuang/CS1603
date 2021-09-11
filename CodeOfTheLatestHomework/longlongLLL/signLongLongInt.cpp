#include"signLongLongInt.h"
signLLI::signLLI(const char *num)
    :LongLongInt{ num }, sign{ false }
{
    int length = strlen(num);
    if (this->num[length - 1] == '-')
    {
        sign = true;
        this->num[length - 1] = '\0';
    }
}

signLLI operator-(const signLLI &slli)
{
    signLLI result = slli;
    result.sign = !result.sign;
    return result;
}

signLLI operator+(const signLLI &slli1, const signLLI &slli2)
{
    const LongLongInt &lli1 = slli1, &lli2 = slli2;
    if (slli1.sign == slli2.sign)
        return signLLI{ lli1 + lli2, slli1.sign };
    else if (lli1 == lli2)
        return "0";
    else if (lli1 < lli2)
        return signLLI{ lli2 - lli1, slli2.sign };
    else
        return signLLI{ lli1 - lli2, slli1.sign };
}

ostream &operator<<(ostream &os, const signLLI &slli)
{
    if (slli.sign)
        os << '-';
    return os << static_cast<LongLongInt>(slli);
}
