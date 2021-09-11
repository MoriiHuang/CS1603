#ifndef LONGLONGINT_H
#define LONGLONGINT_H
#include <iostream>
#include<cstring>
using namespace std;
class bigInt
{   friend void sum1(bigInt &a,bigInt &b,bigInt &c){
        int lenth1=strlen(a.num);
        int lenth2=strlen(b.num);
        char* result;
        result = new char[1000];
        reverse(a);
        reverse(b);
        int weight = 0;                 // 表示进位
            int sum = 0;
            int index = 0;                  // 表示result的下标，从0开始，相加结束后应翻转
            int i, j;

            i = 0;                          // 表示a.num的下标
            j = 0;                          // 表示b.num的下标

            while (i < lenth1 && j < lenth2)  // 两个数对应的每一位进行相加
            {
                sum = a.num[i] - '0' + b.num[j] - '0' + weight;
                weight = sum / 10;          // 计算是否要进位
                sum %= 10;
                result[index++] = sum + '0';
                i++;
                j++;
            }

            while (i < lenth1)             // b.num已经加完了，这时还要考虑a.num和b.num的最高位相加时是否有进位的情况
            {
                sum = a.num[i] - '0' + weight;
                weight = sum / 10;
                sum %= 10;
                result[index++] = sum + '0';
                i++;
            }

            while (j < lenth2)             // a.num已经加完了，这时还要考虑a.num和b.num的最高位相加时是否有进位的情况
            {
                sum = b.num[j] - '0' + weight;
                weight = sum / 10;
                sum %= 10;
                result[index++] = sum + '0';
                j++;
            }

            if (weight > 0)                  // a.num和b.num都已经加完了，这时还要考虑最后一步中是否产生了进位
            {
                result[index++] = weight + '0';
            }
            result[index] = '\0';
            c.num=result;
            reverse(c);
    };
    friend bigInt sum(bigInt &a,bigInt &b){
        bigInt sum0;
        sum1(a,b,sum0);
        return sum0;
    }
    friend void reverse(const bigInt &a){
        int i;
        int  n=strlen(a.num);
            for (i = 0; i < n/ 2; i++)
            {
                char tmp;
                tmp = a.num[i];
                a.num[i] = a.num[n-i-1];
                a.num[n-i-1] = tmp;
            }
    }

private:
   char* num=0;
public:
    void read();
  void show();
    bigInt();
  void sum();
};


#endif // LONGLONGINT_H
