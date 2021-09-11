#include <iostream>
#include<cstdio>
#include<fstream>
using namespace std;

//int main()
// {   int i=0;
//    char ch[100];
//  cin.get(ch[0]);
//for(i=0;ch[i]!='\n';i++)cin.get(ch[i+1]);
//ch[i]=0;
//}
/*int main(){
    const int SIZE=80;
    char buffer1[SIZE],buffer2[SIZE];
    cout<<"Enter a sentence:\n";
    cin>>buffer1;
    cout<<"\nThe string read with cin was:\n"<<buffer1<<endl;
    cin.get(buffer2,SIZE);
    cout<<"The string read with cin.get was:\n"<<buffer2<<endl;
    return 0;
}
*/
/*int main()
{ const int  SIZE = 80;   char buffer[ SIZE ];
   char ch;
   cout << "Enter a sentence:\n";
   cin.getline( buffer, SIZE,'.');
   cin.get(ch);
   cout << buffer <<ch<<endl;
   return 0;}
*/
/*int main()
{char buffer[ 80 ];
 cout << "Enter a sentence:\n";
 cin.read( buffer, 20 );
 cout << "\nThe sentence entered was:\n";
 cout.write( buffer, cin.gcount() );
 cout << endl;
 cout << "一共输入了" << cin.gcount() << "个字符\n";
 return 0;
}*/
/*#include <iostream>
#include <iomanip>
using namespace std;
int main()
{int n;
 cout << "Enter a octal number: ";
 cin >> oct >> n;
 cout << "octal " << oct << n << " in hexdecimal is:" << hex << n << '\n' ;
 cout << "hexdecimal " << n  << " in decimal is:" << dec << n << '\n' ;
 cout << setbase(8) << "octal " << n <<" in octal is:" << n << endl;
 return 0;
}
*/
/*class A
{
    int x,y;
public:
    A(int xx=0,int yy=3){x=xx,y=yy;cout<<"wu"<<endl;}
    A(const A&obj){x=obj.x,y=obj.y;cout<<4<<endl;}
    ~A(){cout<<2<<endl;}
    void show(){cout<<3<<"  "<<x<<" "<<y<<endl;}
};

int main()
{
    A a[3]={A(1,1),A(2,2)};
    A b=A(4,3);
    A c=10;
    A d=c;
    a[3].show();
    a[0].show();
    a[1].show();
    a[2].show();
    return 0;
}

class A{
int x;
public:
A& operator=(const A& obj){ x=obj.x;cout<<x<<' '<< "赋值重载"<<endl;return *this; }
A(int xx){x=xx;cout<<x<<' '<<"有参构造调用"<<endl;}
A(){x=1;cout<<x<<' '<< "无参构造调用"<<endl;}
A(const A& obj){x=obj.x;cout<<x<<' '<< "拷贝构造调用"<<endl; }
~A(){cout<<x<<' '<< "析构函数调用"<<endl;}
void show(){cout<<x<<endl;}
};
A g(int x){A a(x); return a; }
int main()
{
A a1;a1.show();
A a2(2);a2.show();
A a3=3;a3.show();
A a4=A(4);a4.show();
A a5(A(5));a5.show();
A a6;
a6=g(6);a6.show();
g(7);
A a=a1;a.show();
return 0;
}

#include <iostream>
using namespace std;

class test
{
friend ostream& operator<<(ostream& os, const test& obj){os<<obj.x<<'/'<<obj.y;return os;}
    int x,y;
public:
    test(int a=0,int b=1){x=a,y=b;}
    test operator++(int m){test tmp=*this;x++;y++;return tmp;}
    test &operator++(){x++;y++;return *this;}
    operator double()const{return double(x)/y;}
};
int main()
{   test a(1,2);
    cout<<a++<<endl;
    cout<<a;
    return 0;
}

?int  main()
{
    char s[2]={'A','C'};
    short *xx=(short *)s;
    cout<<*xx<<endl;
    return 0;
}

int **create(int row,int col)
{
    int i,j;
    int **p=new int*[row];
    for(i=0;i<row;i++)
        p[i]=new int[col];
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            p[i][j]=(i+1)*(j+1);
    return p;
}

void show(int**n,int row,int col)
{
    int i,j;
    cout<<typeid(n).name()<<endl;
    for(i=0;i<row;i++)
    {
        cout<<i<<":"<<n[i]<<"("<<typeid(n[i]).name()<<")\t";
        for(j=0;j<col;j++)
            cout<<n[i][j]<<"("<<&(n[i][j])<<")"<<'\t';
        cout<<endl;
    }
    for(i=0;i<row;i++)
    {
        cout<<i<<":"<<n[i]<<"\t";
        for(j=0;j<col;j++)
            cout<<*(n[i]+j)<<"("<<&(n[i][j])<<")"<<'\t';
        cout<<endl;
    }
}
int main()
{
    int **n,i,j,row,col;
    cin>>row>>col;
    n=create(row,col);
    show(n,row,col);
    for(i=0;i<row;i++) delete []n[i];
    delete n;
    return 0;
}

#define row 2
#define col 3
void show(int (*p)[col])
{
    int *q,i;
    for (i=0; i<row; ++i)  //每一行
    {
       for (q = *(p+i); q < *(p+i)+col; ++q)  //每一列
              cout << *q << '\t';
       cout << endl;
    }
}

void show2(int n[][col])
{
    int i,j;
    cout<<typeid(n).name()<<endl;
    for(i=0;i<row;i++)
    {
        cout<<i<<":"<<n[i]<<"("<<typeid(n[i]).name()<<")\t";
        for(j=0;j<col;j++)
            cout<<n[i][j]<<"("<<&(n[i][j])<<")"<<'\t';
        cout<<endl;
    }
    for(i=0;i<row;i++)
    {
        cout<<i<<":"<<n[i]<<"\t";
        for(j=0;j<col;j++)
            cout<<*(n[i]+j)<<"("<<&(n[i][j])<<")"<<'\t';
        cout<<endl;
    }
}

int main()
{
    int i,j;
    int n[row][col]={0};

    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            n[i][j]=(i+1)*(j+1);
    //int **p=n;
    //error: cannot convert 'int (*)[3]' to 'int**'
    int *p=n[0];
    cout<<n<<'\t'<<typeid(n).name()<<endl;
    cout<<n[0]<<'\t'<<typeid(n[0]).name()<<'\t'<<typeid(p).name()<<endl;
    cout<<n+1<<'\t'<<n[1]<<'\t'<<&n[1][0]<<endl;
    cout<<"_____________________"<<endl;
    show(n);
    cout<<"_____________________"<<endl;
    show2(n);
    return 0;
}

class B {  public:    	int m = 0;	void hello() const {        cout << "Hello world, this is B!\n";    }    };
class D : public B {public:  void hello() const {        cout << "Hello world, this is D!\n";    }    };
int main()
{
    // 1: initializing conversion
    int n = static_cast<int>(3.14);
    cout << "n = " << n << '\n';
    // 2: static downcast
    D d;
    B& br = d; // upcast via implicit conversion
    br.hello();
    D& another_d = static_cast<D&>(br); // downcast
    another_d.hello();
    return 0;
}

struct A  {    int a1,a2;  };
struct B  {    int b1,b2,b3;   };
int main()
{   A a[3]={{1,2},{3,4},{5,6}};
    B b[2];    int i;    ofstream in("file");
    for(i=0;i<3;i++)        in.write(reinterpret_cast<char*>(&a[i]),sizeof(A));
    in.close();    ifstream io("file");
    for(i=0;i<2;i++)
    {    io.read(reinterpret_cast<char*>(&b[i]),sizeof(B));
        cout<<b[i].b1<<'\t'<<b[i].b2<<'\t'<<b[i].b3<<endl;      }
    io.close();    return 0;
}


template <class T>
void reverseArray(T array[],int size){
    T temp;
    for(int i=0;i<size/2;i++){
        temp=array[i];
        array[i]=array[size-i-1];
        array[size-i-1]=temp;
    }
}
template <class T>
class Array{
    static int len;
    char arr[len];
public:Array(T a[]):arr(a){len=strlen(a);}
    void create(char a[],int n){for(int i=0;i<n;i++){
            cin>>a[i];
        }}
};
int main()
{   int size;
    Array<char> arr0(char a);
    Array<char> create(arr0.arr,size);
    reverseArray(a,size);
    for(int i=0;i<size;i++){cout<<a[i];}
    return 0;
}

int main()
{
    cout<<"c++,狗都不学";
    return 0;
}

int like[5][5];
int book[5]={1,1,1,1,1};
int take[5];
int n=0;
void trynext(int i)
{ int j, k;
  for (j=0; j<5; ++j)
     { if (like[i][j] && book[j])
              { take[i] = j; book[j] = false;
                 if (i == 4)  {
              n++;
                     cout << "\n第" << n << "种方案: "<< endl;
              cout << "人\t书" << endl;
                     for (k=0; k<5; k++)
                        cout << char(k+'A') << '\t' << take[k] << endl;
                    }
                   else { trynext(i+1); cout<<i+1;}
                 book[j] = true;
               }
        }
}
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>like[i][j];
        }
    }
    trynext(0);
return 0;
}
*/

