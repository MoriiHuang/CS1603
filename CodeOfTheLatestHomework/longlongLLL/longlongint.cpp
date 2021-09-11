#include"longlongint.h"
LongLongInt::LongLongInt(const char *num)
{
    int length = strlen(num);
    this->num = new char[length + 1];
    strcpy(this->num, num);
    for (int i = length / 2 - 1; i >= 0; --i)
        swap(this->num[i], this->num[length - i - 1]);
}
LongLongInt operator+(const LongLongInt &lli1, const LongLongInt &lli2)
{
    char *ptr1 = lli1.num, *ptr2 = lli2.num;
    int new_len = max(strlen(ptr1), strlen(ptr2));
    if (new_len != strlen(ptr1))
        swap(ptr1, ptr2);

    char *result = new char[new_len + 2];
    int j = 0;
    for (int i = 0; i < new_len; ++i)
    {
        if (i >= strlen(ptr2))
            result[i] = ptr1[i] - '0' + j;
        else
            result[i] = ptr1[i] - '0' + ptr2[i] - '0' + j;

        j = static_cast<int>(result[i] >= 10);
        result[i] = result[i] % 10 + '0';
    }
    if (j > 0)
    {
        result[new_len] = j + '0';
        result[new_len + 1] = '\0';
    }
    else
        result[new_len] = '\0';
    return LongLongInt{ result };
}

LongLongInt operator-(const LongLongInt &lli1, const LongLongInt &lli2)
{
    char *ptr1 = lli1.num, *ptr2 = lli2.num;
    int new_len = strlen(ptr1);
    char *result = new char[new_len + 1];
    int j = 0;
    for (int i = 0; i < new_len; ++i)
    {
        if (i >= strlen(ptr2))
            result[i] = (ptr1[i] - '0') - j;
        else
            result[i] = (ptr1[i] - '0') - (ptr2[i] - '0') - j;

        j = static_cast<int>(result[i] < 0);
        result[i] = (result[i] + 10) % 10 + '0';
    }
    result[new_len] = '\0';
    while (result[new_len - 1] == '0' and new_len > 1)
    {
        result[new_len - 1] = '\0';
        --new_len;
    }
    return LongLongInt{ result };
}

bool operator!=(const LongLongInt &lli1, const LongLongInt &lli2)
{
    return static_cast<bool>(strcmp(lli1.num, lli2.num));
}

bool operator<(const LongLongInt &lli1, const LongLongInt &lli2)
{
    int length1 = strlen(lli1.num), length2 = strlen(lli2.num);
    if (length1 != length2)
        return length1 < length2;

    for (int i = length1 - 1; i >= 0; --i)
        if (lli1.num[i] != lli2.num[i])
            return lli1.num[i] < lli2.num[i];
    return false;
}

ostream &operator<<(ostream &os, const LongLongInt &lli)
{
    for (int i = strlen(lli.num) - 1; i >= 0; --i)
        os << lli.num[i];
    return os;
}
