/*题目描述
已知f(n, 0) = 1, f(n,n) = 1

当n>m>0时，f(n,m) = f(n-1,m-1) + f(n-1, m)

求f(a, b)


输入格式
多行输入，每一行输入两个正整数a, b (1 <= b <= a <= 10),a，b以空格隔开

输出格式
每一行输出f（a，b）值*/
#include <iostream>
using namespace std;

int f(int a, int b);
int main()
{
   int a,b;
   while(cin>>a>>b)
   {   
       cout<<f(a,b)<<endl; 
   }
   return 0;
}

int f(int a, int b)
{
    if(b == 0 || a ==b)
        return 1;
    else if(1 <= b && b < a && a <= 10)
        return f(a-1, b-1)+f(a-1, b);
}