/*题目2：输入一个整数（不多于6位）。确定这个数有几位？如果高于6位，就提示"暂时无法确定几位"之类的提示。
如：1375，位数是4位。
*/
#include <stdio.h>
#include <cmath>
int main()
{   
    int a;
    int n;
    printf("请输入一个整数（不多于6位）\n");
    scanf("%d",&a);
    a=(a>=0)?a:-a;
    if(a>999999)
        printf("暂时无法确定几位\n");
    else if(a==0)
        printf("这个数有1位\n");
    else{
        for(n=6;n>=0;n--){
            if(a>=pow(10,n-1))
                break;
        }
        printf("这个数共有%d位\n",n);}
    return 0;
}