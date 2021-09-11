#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <iostream>
#include<iomanip>
using namespace std;
struct student
{
    long long number;
    char *name=new char[50];
    int subject[3];
};
void input(student sample[],int &countnum);
void change(student sample[],const int countnum);
void showall(student sample[],int &countnum);
void numfound(student sample[],const int countnum);
void namefound(student sample[],const int countnum);
void numorder(student sample[],const int countnum);
void gradeorder(student sample[],const int countnum);
void showinstruction();
void getinstruction(student sample[],int &countnum);
#endif // !STUDENT_H_INCLUDED
