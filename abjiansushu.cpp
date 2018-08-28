/*输入两个正整数a、b，找出[a, b]之间的素数，由小到大输出。(2 <= a <= b <=1000000)
输入描述
每一行输入两个正整数，两数之间有一个空格，可能有多行输入!
tips：利用while(cin>>a>>b)语句实现循环输入变量
输出描述
输出[a,b]之间的素数，素数之间用一个空格隔开，每个输出占一行*/
#include <iostream>
using namespace std;

bool isPrime(int);
int main()
{   
    int a,b;
    int i;
    while(cin>>a>>b)
    {
        for(i=a;i<=b;i++)
        {
           if(isPrime(i)){
               cout<<i<<" ";
           } 
        }
        cout<<endl;
    }
    return 0;
}

bool isPrime(int a)
{
    int i;
    for(i=2;i*i<=a;i++)
    {
        if(a%i==0){
            return false;
            break;
        }
    }
    return true;
}