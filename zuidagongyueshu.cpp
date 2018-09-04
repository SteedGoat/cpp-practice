/*题目描述
以递归思想计算最大公约数gcd(m,n)。

tips：若m%n等于0，则gcd(m,n)等于n；否则gcd(m,n)=gcd(n,m%n)

输入格式
每一行输入两个数m,n（均为正整数），中间以空格隔开，可能会有多行输入

输出格式
输出最大公约数

样例输入
12 16
9 7
2 10
样例输出
4
1
2
*/
#include <iostream>
using namespace std;

int a,b;
int gcd(int a, int b);
int main()
{   
    while(cin>>a>>b)
        cout<<gcd(a,b)<<endl;
}

int gcd(int a, int b)
{
    if(a%b==0)
        return b;
    else 
        return gcd(b, a%b);
}