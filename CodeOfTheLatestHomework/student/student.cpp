#include <iostream>
#include "student.h"
#include<fstream>
#include<cstring>
using namespace std;

void demo(char *filename)
{   int m;
    ofstream outfile(filename);
    ifstream in;
    fstream io;
    //创建二进制文件，文件名由函数参数指定
    if(!outfile){cout<<"create file error\n";}
    cin>>m;
    //从键盘读入学生人数m
    for(int i=0;i<m;i++){
        Stu stu;
        cin>>stu.ID>>stu.name>>stu.birth>>stu.phone;
        outfile.write(reinterpret_cast<char*>(&stu),sizeof (stu));
    }
    //从键盘读入每个学生学号ID[12],姓名name[20],出生年月birth[7],电话phone[12]，并写入文件
    outfile.close();
    //关闭文件
    io.open(filename);
    int n;
    cin>>n;
    Stu stu;
    io.seekp((n-1)*sizeof (12+20+7+12));
    io.read(reinterpret_cast<char*>(&stu.ID),sizeof(stu));
    cout<<stu.ID<<stu.name<<stu.birth<<stu.phone;
    //重新打开文件，键盘输入整数n(0<=n<m)，输出文件中第n个记录
    char ID[12];
    for(int i=0;i<12;i++){
        cin>>ID[i];}
   for(int i=0;i<m;i++){
       io.seekp(i*sizeof (stu));
       if(strcmp(ID,stu.ID)==0){
           char phone[12];
           for(int j=0;j<12;j++){
               cin>>phone[j];
           }
           strcpy(stu.phone,phone);
       }
       cout<<stu.ID<<stu.name<<stu.birth<<stu.phone;
    }//键盘输入一个ID，找到该学生，用键盘输入的新电话号码替换其原有电话号码
    io.close();//关闭文件
}
