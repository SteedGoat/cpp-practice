/*设圆半径r=1.5, 圆柱高h=2，求圆柱表面积、圆柱体积。
请编程实现：用scanf输入r和h数据，输出计算结果。输出时要有文字说明，取小数点后2位数字。
*/
#include <stdio.h>
int main()
{
    float r;
    int h;
    scanf("%f %d",&r,&h);
    printf("圆柱表面积为%.2f,圆柱体积为%.2f\n",6.28*r*(r+h),3.14*r*h);
    return 0;
}