#include "LongLongInt.h"
#include <iostream>
#include <cstring>
using namespace std;

int main()
{   const char* a;
    const char* b;
   char s1[1000];
   char s2[1000];
   cin>>s1>>s2;
   a=s1;
   b=s2;
    LongLongInt aLong(a);
    LongLongInt bLong(b);
    LongLongInt cLong = aLong+bLong;
    cout<<cLong<<endl<<aLong-bLong<<endl;
}
