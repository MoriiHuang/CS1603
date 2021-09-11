#include<iostream>
#include"student.h"
using namespace std;
int main(){
  student *Student=new student[1000];
  int countnum=0;
  showinstruction();//显示菜单
  getinstruction(Student,countnum);
  return 0;
}
