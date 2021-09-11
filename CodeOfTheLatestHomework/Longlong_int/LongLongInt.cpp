#include"LongLongInt.h"
void bigInt::read()
{
    cin.getline(this->num,1000);
    cin.clear();
}

void bigInt::show(){
    cout<<this->num<<endl;
}

bigInt::bigInt()
{
    this->num=new char[1000];
}
