#include"student.h"
void getinstruction(student Student[],int &countnum){
    int n=1;
    while(n!=0){
        cin>>n;
        switch(n)
        {
        case 1:  input(Student,countnum);break;
        case 2:  change(Student,countnum);break;
        case 3:  showall(Student,countnum);break;
        case 4:  numfound(Student,countnum);break;
        case 5:  namefound(Student,countnum);break;
        case 6:  numorder(Student,countnum);break;
        case 7:  gradeorder(Student,countnum);break;
        case 0:  cout<<endl;break;
        };
    }
}
