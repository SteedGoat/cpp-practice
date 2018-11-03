#include <stdio.h>
#include <string.h>
int main()
{   
    int a=0,b=0,c=0;
    struct houxuan
    {
        char name[20];
        int n;
    }hx[3]={
        {"sad",a},
        {"asd",b},
        {"qwe",c}
    };
    char temp[20];
    for(int i=1;i<=5;i++)
    {
        scanf("%s",temp);
        for(int j=0;j<=2;j++)
        {
            if(0==strcmp(temp,hx[j].name))/*注意此处比较两个字符串的时候运用strcmp函数*/
                hx[j].n++;
        }
    }
    for(int k=0;k<=2;k++)
    {
        printf("%s得了%d票。\n",hx[k].name,hx[k].n);
    }
    return 0;
}