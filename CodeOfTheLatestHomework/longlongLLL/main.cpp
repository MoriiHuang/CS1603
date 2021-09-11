#include <iostream>
#include"longlongint.h"
#include"signLongLongInt.h"
using namespace std;

int main()
{
    char s[]="4067";
        signLLI a("123"),b("-123"),c(s);
        cout<<a<<endl<<b<<endl<<c<<endl;
        cout<<a-b+b-c-b-a-b-c+c<<endl;
        return 0;
return 0;
}
