/*请编写程序计算输出从 1 到 N 共 N 个自然数中所有模 4 余 1 且是 3 的倍数的那些数的总和*/
#include <iostream>
using namespace std;
int main()
{
    int sum=0;
    int N,i;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        if(i%4==1&&i%3==0)
        {
            sum=sum+i;
        }
    }
    cout<<sum<<endl;
    return 0;
}