#include"myvect.h"
int MyVect::count = 0;
int MyVect::living = 0;

void MyVect::create_space(const MyVect &v)
{
    vect = new int[n];
    for (int i = 0; i < n; ++i)
        vect[i] = v.vect[i];
}

MyVect::MyVect(const MyVect &other)
    :n{ other.n }
{
    create_space(other);
    ++count;
    ++living;
}

MyVect &MyVect::operator=(const MyVect &other)
{
    if (this == &other)
        return *this;

    delete[] vect;
    n = other.n;
    create_space(other);
    return *this;
}

double MyVect::getnorm() const
{
    double sum_of_square = 0;
    for (int i = 0; i < n; ++i)
        sum_of_square += pow(vect[i], 2);
    return sqrt(sum_of_square);
}

MyVect &MyVect::operator++()
{
    for (int i = 0; i < n; ++i)
        ++vect[i];
    return *this;
}

MyVect &MyVect::operator--()
{
    for (int i = 0; i < n; ++i)
        --vect[i];
    return *this;
}

bool operator==(const MyVect &v1, const MyVect &v2)
{
    for (int i = 0; i < v1.n; ++i)
        if (v1.vect[i] != v2.vect[i])
            return false;
    return true;
}

MyVect operator+(const MyVect &v1, const MyVect &v2)
{
    MyVect result{ v1.n };
    for (int i = 0; i < result.n; ++i)
        result[i] = v1[i] + v2[i];
    return result;
}

istream &operator>>(istream &is, MyVect &v)
{
    for (int i = 0; i < v.getlength(); ++i)
        is >> v[i];
    return is;
}

ostream &operator<<(ostream &os, const MyVect &v)
{
    for (int i = 0; i < v.getlength() - 1; ++i)
        os << v[i] << ' ';
    os << v[v.getlength() - 1];
    return os;
}
