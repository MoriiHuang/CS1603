#include "student.h"
void input(student sample[],int &countnum)
{   long long temp;
    cin>>temp;
    int k=0;
    int grade[3];
    for(int i=0;i<=2;++i)
    {
        cin>>grade[i];
    };
    getchar();
    char *temp1=new char [50];
    cin.getline(temp1,50);
    for(k=0;k<countnum;)
    {
        if(sample[k].number!=temp) {++k;}
        else
        { for(int i=0;i<=2;++i){sample[k].subject[i]=grade[i];}
           sample[k].name=temp1;
            break;
        }
    }
    if(k==countnum)
    {  sample[countnum].number=temp;
       for(int i=0;i<=2;++i){sample[countnum].subject[i]=grade[i];}
       sample[countnum].name=temp1;
       countnum++;
    }
}
void change(student sample[],const int countnum)
{
    long long  temp;
    int grade[3];
    cin>>temp;
    for(int i=0;i<=2;++i)
    {
        cin>>grade[i];
    }
    getchar();
    char *temp1=new char[100];
    cin.getline(temp1,50);
    for(int t=0;t<countnum;++t)
    {if(temp==sample[t].number)
        {for(int k=0;k<=2;++k)
        {sample[t].subject[k]=grade[k];}
         sample[t].name=temp1;
        }
    }
}
void showall(student sample[],int &countnum)
{
   for(int t=0;t<countnum;++t)
    {
    cout<<sample[t].number<<" ";
    cout<<sample[t].name<<" ";
     for(int h=0;h<=2;++h)
     {cout<<sample[t].subject[h]<<" ";}
     cout<<endl;
    }
}
void numfound(student sample[],const int countnum)
{long long  temp;
cin>>temp;
for(int t=0;t<countnum;++t)
    {
    if(temp==sample[t].number)
        {
        cout<<sample[t].number<<" ";
        cout<<sample[t].name<<" ";
         for(int h=0;h<=2;++h)
         {cout<<sample[t].subject[h]<<" ";}
         cout<<endl;
        }
    }
}
void namefound(student sample[],const int countnum)
{   char k;
  cin.get(k);
    char *temp=new char[50];
    cin.getline(temp,50);
    for(int t=0;t<countnum;++t)
    {
        if(strcmp(temp,sample[t].name)==0)
        {
        cout<<sample[t].number<<" ";
        cout<<sample[t].name<<" ";
         for(int h=0;h<=2;++h)
         {cout<<sample[t].subject[h]<<" ";}
         cout<<endl;
        }
    }
}
void numorder(student sample[],const int countnum)
{
    for(int i=0;i<countnum;++i)
    {
        for(int t=i+1;t<countnum;++t)
        {
            if(sample[t].number<sample[i].number)
            {student temp;
            temp=sample[i];
            sample[i]=sample[t];
            sample[t]=temp;
             }
         }
    }
    for(int t=0;t<countnum;++t)
    {
         cout<<sample[t].number<<" ";
         cout<<sample[t].name<<" ";
         for(int h=0;h<=2;++h)
         cout<<sample[t].subject[h]<<" ";
         cout<<endl;
    }
}

void gradeorder(student sample[],const int countnum)
{
    for(int i=0;i<countnum;++i)
    {
        for(int t=i+1;t<countnum;++t)
        {
            if(sample[t].subject[0]+sample[t].subject[1]+sample[t].subject[2]>sample[i].subject[0]+sample[i].subject[1]+sample[i].subject[2])
            {student temp;
            temp=sample[i];
            sample[i]=sample[t];
            sample[t]=temp;
            }
            else if(sample[t].subject[0]+sample[t].subject[1]+sample[t].subject[2]==sample[i].subject[0]+sample[i].subject[1]+sample[i].subject[2])
            {
                if(sample[t].number<sample[i].number)
                {
                student temp;
                temp=sample[i];
                sample[i]=sample[t];
                sample[t]=temp;
                }
            }
        }

    }
    for(int t=0;t<countnum;++t)
    {
         cout<<sample[t].number<<" ";
         cout<<sample[t].name<<" ";
         for(int h=0;h<=2;++h)
         cout<<sample[t].subject[h]<<" ";
         cout<<endl;
    }
}
