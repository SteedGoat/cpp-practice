/*题目1：有3个整数a,b,c，由键盘输入，输出其中最大的数。
提示：定义3个整型变量，如n1, n2, n3。
*/
#include <stdio.h>
int main()
{
    int a,b,c,temp;
    printf("请输入三个整数\n");
    scanf("%d%d%d",&a,&b,&c);
    temp=(a>=b)?a:b;
    temp=(temp>=c)?temp:c;
    printf("%d\n",temp);
    return 0;
}