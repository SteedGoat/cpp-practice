/*编写程序，显示本月的月历。首先提示本月的天数和本月1号是周几？
提示统一为：
请输入本月的天数？31
请输入1号是周几？2
排出这个月历：
					1	2
3	4	5	6	7	8	9
10	11	12	13	14	15	16
17	18	19	20	21	22	23
24	25	26	27	28	29	30
31						

提示：最重要的是使用变量i从1计数到N的for语句（N为本月天数），显示i，并判断i是不是一个星期的最后一天（周日），若是则需要输出一个换行符。
*/

#include <stdio.h>
int main()
{
    int i=1,nDays,a;
    printf("请输入本月的天数？");
    scanf("%d",&nDays);
    printf("请输入1号是周几？");
    scanf("%d",&a);
    for(int j=1;j<a;j++)
        printf("\t");
     do{
            if(a==7){
                printf("%d\n",i);
                a=1;
                i++;
            }
            else if(a>=1&&a<=6){
                printf("%d\t",i);
                a++;
                i++;
            }
        }
    while(i<=nDays);
    printf("\n");
    return 0;
}
