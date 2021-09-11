#include <iostream>
#include"myQueue.h"
using namespace std;

int main()
{
    int i,j,time,line[2],flag[2];
    Queue<int> q1;
    for(j=0;j<10;j++)
    {
        cin>>i;
        q1.in(i);
    }
    time=0;
    line[0]=0,line[1]=0;
    flag[0]=1,flag[1]=1;
    while(true)
    {
        for(j=0;j<2;j++)
        {
            if (!line[j]){
            flag[j]=q1.out(line[j]);
          }
            if(flag[j]) line[j]--;
        }
        if(!flag[0]&&!flag[1]) break;
        time++;
    }
    cout<<time<<endl;
    return 0;
}
