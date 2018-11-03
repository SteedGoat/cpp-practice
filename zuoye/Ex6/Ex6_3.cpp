/*题目3：甲、乙、丙3人猜"石头剪刀布"，猜了10轮。
现记录了甲、乙、丙的10次分别为：
char a[10]={'S', 'S', 'P', 'R', 'P', 'R', 'S', 'S', 'P', 'R'};
char b[10]={'S', 'P', 'R', 'R', 'S', 'S', 'P', 'R', 'P', 'P'};
char c[10]={'S', 'S', 'P', 'P', 'P', 'R', 'R', 'P', 'R', 'S'};
请编程统计，谁总体上赢得多（几胜几负？）。
注："石头剪刀布"的逻辑判断，请参考以前的作业。字符'R'代表"石头"；字符'P'或代表"布"；字符'S'或代表"剪刀"。
三人对决，如果每次出拳结果都一样（SSS）或都不一样（SRP），视作平局。
程序不需要输入，首先输出每个人的胜、负、平情况，最后输出胜最多，负最少的人。
输出格式如下（示例）：
甲3胜5负2平
……
甲获胜
*/
#include <stdio.h>
void judge(char a,char b,char c,int *an,int *bn,int *cn);
int main()
{
    char a[10]={'S', 'S', 'P', 'R', 'P', 'R', 'S', 'S', 'P', 'R'};
    char b[10]={'S', 'P', 'R', 'R', 'S', 'S', 'P', 'R', 'P', 'P'};
    char c[10]={'S', 'S', 'P', 'P', 'P', 'R', 'R', 'P', 'R', 'S'};
    int an[3]={0},bn[3]={0},cn[3]={0};
    for(int i=0;i<10;i++)
    {
        if((a[i]==b[i]&&b[i]==c[i])||(a[i]!=b[i]&&a[i]!=c[i]&&b[i]!=c[i]))
            {
                an[2]++;
                bn[2]++;
                cn[2]++;
            }
        else
            judge(a[i],b[i],c[i],an,bn,cn);
    }
    printf("甲%d胜%d负%d平\n",an[0],an[1],an[2]);
    printf("乙%d胜%d负%d平\n",bn[0],bn[1],bn[2]);
    printf("丙%d胜%d负%d平\n",cn[0],cn[1],cn[2]);
    if(an[0]>bn[0]&&an[0]>cn[0])
        printf("甲获胜\n");
    else if(bn[0]>an[0]&&bn[0]>cn[0])
        printf("乙获胜\n");
    else
        printf("丙获胜\n");
}

void judge(char a,char b,char c,int *an,int *bn,int *cn)
{   
    if(a==b)
    {
        if((a=='R'&&c=='S')||(a=='S'&&c=='P')||(a=='P'&&c=='R')){
            an[0]++;
            bn[0]++;
            cn[1]++;
        }
        else{
            an[1]++;
            bn[1]++;
            cn[0]++;
        }
    }
    if(a==c)
    {
        if((a=='R'&&b=='S')||(a=='S'&&b=='P')||(a=='P'&&b=='R')){
            an[1]++;
            bn[0]++;
            cn[1]++;
        }
        else{
            an[0]++;
            bn[1]++;
            cn[0]++;
        }
    }
    if(b==c)
    {
        if((b=='R'&&a=='S')||(b=='S'&&a=='P')||(b=='P'&&a=='R')){
            an[0]++;
            bn[1]++;
            cn[1]++;
        }
        else{
            an[1]++;
            bn[0]++;
            cn[0]++;
        }
    }
}