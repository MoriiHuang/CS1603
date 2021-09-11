#include <iostream>
#include"longlongint.h"
#include"LLIComplex.h"
int main()
{
    longlongintcomplex r1("123332323434","133431"), r2("94324324234876","23234232"),r3;
    cout<<"r1="<<r1<<endl;
    cout<<"r2="<<r2<<endl;
    r3=r1+r2;
    cout<<"r3=r1+r2="<<r3<<endl;
    return 0;
}

