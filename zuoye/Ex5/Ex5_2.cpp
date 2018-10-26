/*编写程序，提示输入一个整数N（N<10000），然后显示出1~N之间所有偶数的平方数。如输入100，则应输出：
4
16
36
64
100
*/
#include <stdio.h>
#include <cmath>
int main()
{
    int i,a,N;
    printf("请输入一个正整数：");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {   
        a=sqrt(i);
        if(a*a==i&&i%2==0)
        printf("%d\n",i);
    }
    return 0;
}