#include <stdio.h>
int main()
{
   char c='K';	//定义字符变量c，且初始化为 ’K’
   c++;			//自增运算
   printf("%d   %c\n", c, c);
   c=c+256;		//加法运算、赋值
   printf("%d   %c\n", c, c);
   c=c+5;
   printf("%d   %c\n", c, c);

   return 0;
}

