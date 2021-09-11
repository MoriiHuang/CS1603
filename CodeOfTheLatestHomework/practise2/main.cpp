#include <iostream>
#include<cmath>
using namespace std;

/*int col[9];
bool a[9], b[17],c[17];

void queen_a11(int k) //在8x8棋盘的第k列上找合理的配置
{int i, j;
 char awn;
 for(i = 1; i <9; i++) // 依次在l至8行上配置k列的皇后
     if ( a[i] && b[k+i-1] && c[8+k-i]) //可行位置
         { col[k] = i;
           a[i] = b[k+i-1] = c[8+k-i] = false; //置对应位置有皇后
           if (k == 8) // 找到一个可行解
               { for (j = 1; j <= 8; j++)  cout << j << col[j]<< '\t' ;
          cout << endl;
                 cin >> awn;
                 if (awn=='Q' || awn=='q') exit(0);
               }
              else  queen_a11(k+1);//递归至第k十1列
           a[i] = b[k+i-1] = c[8+k-i] = true; //恢复对应位置无皇后
         }
}
int main()
 { int j;
   for(j = 0; j <=8; j++) a[j] = true;
   for(j = 0; j <= 16; j++) b[j] = c[j] = true;
   queen_a11(1);
   return 0;
 }

int divide( int a[], int low, int high)
{ int k = a[low];
   do  { while (low<high && a[high]>=k) --high;
            if (low < high) { a[low] = a[high]; ++low;}
            while (low < high && a[low] <=k) ++low;
            if (low < high)  {a[high] = a[low]; --high;}
         } while (low != high);
   a[low] = k;
   return low;
}
void quicksort(int a[], int low, int high)
{ int mid;
   if (low >= high) return;
   mid = divide(a, low, high);
   quicksort( a, low, mid-1);
   quicksort( a, mid+1, high);
}
int main(){
    int low,high;
    int a[10];
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    low=a[0];
    high=a[9];
    quicksort(a,low,high);
    for(int i=0;i<10;i++){
        cout<<a[i];
    }
}

int main(){
    int Array[2]={1,2};
    int *p=Array;
   for(int i=0;i<2;i++){
       cout<<*Array;
       ++*Array;
   }
}

int main(){
    for(int k=5;k=0;--k){
        cout<<1;
    }
    return 0;
}

int x=3;int k=0;
char *f2(){
char *p=new char[x];
for(k=0;k<x-1;++k){
 p[k]='a'+k+1;
}p[k]=0;
return p;}
        int f1(){

            char *p=f2();
            int x=0;
            while(*p) x+=*(p++)-'a';
            delete[] p;
            return x;
        }
int main(){
    cout<<++x<<'\t';
    cout<<f1()<<endl;
    return 0;
}

int main()
{   int size=1024*1024*128,i=0;
    while(1)
    {   i++;   cout<<i<<endl;
        if(!new int[size]) break;    }
    cout<<"Finish!";    return 0; }

int main()
{   int size=1024*1024*128,i=0;
    while(1)
    {   i++;   cout<<i<<endl;
        if(!new (nothrow) int[size]) break;   }
    cout<<"Finish!";    return 0; }

class integral{
int  numOfCal = 1000;
    double (*f)(double);
public:
    integral(double(*g)(double)):f(g){};
    double operator()(double a,double b);
};
double integral::operator()(double a,double b){
    double sum=0,dlt=(b-a)/numOfCal;
    for(double h=a+dlt/2;h<b;h+=dlt)
        sum+=dlt*f(h);
    return sum;
}
double g(double x){
    return sqrt(x)+3;
}
int main()
{

    integral obj(g);
    cout<<obj(3,10);
    return 0;
}
*/
