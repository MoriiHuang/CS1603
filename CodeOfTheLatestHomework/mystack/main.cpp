#include <iostream>
#include"myStack.h"
using namespace std;

int main()
    {
            mystack<char> stCh(4); //栈的初始规模为4
            for(int i=0;i<10;i++)    stCh.push('a'+i);
            while(!stCh.isEmpty()) cout<<stCh.pop()<<' ';
            cout<<endl;
            mystack<int> stint(4);
            for(int i=0;i<6;i++)      stint.push(i*i);
            while(!stint.isEmpty()) cout<<stint.pop()<<' ';
            cout<<endl;
            return 0;
    }
