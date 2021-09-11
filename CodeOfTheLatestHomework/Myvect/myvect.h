#ifndef MYVECT_H
#define MYVECT_H
#include<iostream>
#include<cmath>
using namespace std;
class MyVect
{
    friend bool operator==(const MyVect &v1, const MyVect &v2);
    friend bool operator!=(const MyVect &v1, const MyVect &v2) { return !(v1 == v2); }
    friend MyVect operator+(const MyVect &v1, const MyVect &v2);
    friend istream &operator>>(istream &is, MyVect &v);
    friend ostream &operator<<(ostream &os, const MyVect &v);
private:
    static int count;
    static int living;
    int *vect;
    int n;

    void create_space(const MyVect& v);
public:
    MyVect(int i) :vect{ new int[i] }, n{ i } { ++count; ++living; }
    MyVect(const MyVect &other);
    MyVect &operator=(const MyVect &other);
    ~MyVect() { delete[] vect; --living; }

    int getlength() const { return n; }
    double getnorm() const;
    static int getcount() { return count; }
    static int getliving() { return living; }

    int &operator[](int i) { return vect[i]; }
    const int &operator[](int i) const { return vect[i]; }

    MyVect &operator++();
    MyVect operator++(int) { MyVect temp = *this; ++*this; --count; return temp; }
    MyVect &operator--();
    MyVect operator--(int) { MyVect temp = *this; --*this; --count; return temp; }
    operator double() const { return getnorm(); }
};

#endif // MYVECT_H
