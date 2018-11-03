/*输入三个实数，判断以这3个实数作为边长，是否可以组成三角形？
（a）如果可以，则计算出三角形周长和面积（海伦公式，请自己找哦）。
（b）如果不可以，请输出错误信息。
注：
（1）	要学习用简单的例子做测试。比如，若输入3、4、5三个数，验证一下你的输出结果是不是跟口算结果一致？
（2）	scanf输入三个实数时，输入三个实数统一用一个空格分隔
输入示例：
请输入三个实数作为边长：
3  4  5
*/
#include <stdio.h>
#include <cmath>
int main()
{
    float a,b,c;
    float C,S,p;
    scanf("%f%f%f",&a,&b,&c);
    if((a+b)>c&&(a+c)>b&&(b+c)>a){
        C=a+b+c;
        p=0.5*C;
        S=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("周长为%.2f。\n",C);
        printf("面积为%.2f。\n",S);
    }
    else
        printf("不能组成三角形！\n");
    return 0;
}