/*求1000以内的素数，从小到大存于数组中。最后5个一行统一输出全部符合要求的素数，要求对齐。以20以内素数为例，输出要求如下：
2	3	5	7	11
13	17	19		
请编程序实现。
*/
#include <stdio.h>
int isPrime(int);
int main()
{
    int a[500]={0},i,j;
    j=1;
    for(i=2;i<=1000;i++)
    {
        if(isPrime(i)){
            a[j]=i;
            j++;
        }
    }
    int N;
    for(j=1;j<500;j++)
        if(a[j]!=0)
            N=j;
    for(j=1;j<=N;j++)
        if(j%5==0)
            printf("%d\n",a[j]);
        else
            printf("%d\t",a[j]);
        j++;
    return 0;
}

int isPrime(int n)
{
    int k;
    for(k=2;k*k<=n;k++)
        if(n%k==0){
            return 0;
            break;
        }
    return 1;
}