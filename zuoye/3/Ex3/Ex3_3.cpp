/*题目3：请编写一个将身高从cm转换成feet（英尺）单位的程序。要求先提示输出你的姓名（scanf输入），然后问身高多少cm（scanf输入）？输入后，求出对应的feet数，最后输出你的身高是多少feet（英尺）?
注： 1英尺 = 30.48 cm
*/
#include <stdio.h>
int main()
{
    float height;
    char a[10];
    printf("请输入您的姓名：");
    scanf("%s",a);
    printf("请问您的身高是（cm）：");
    scanf("%f",&height);
    printf("%s,你的身高为：%.2ffeet(英尺)\n",a,height/30.48);
}