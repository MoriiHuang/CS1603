#ifndef MYSTACK_H
#define MYSTACK_H
#include<iostream>
using namespace std;
class mystack{

public:
    mystack(int num){
        n=num;
    }
    bool push(int n){
        if(isfull()){
           return false;
        }
        else{
            arr[++top]=n;
            return true;
        }
    }
    bool isempty(){return top<0;}
    bool isfull(){return top>=n-1;}
    int pop(int &date){
        date=arr[top];
        if(isempty()){return false;}
        else{return arr[top--];}
    };
private:
  int top=-1;
  int n;
  int* arr=new int[100];
};

#endif // MYSTACK_H
