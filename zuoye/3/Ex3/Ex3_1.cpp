#include "stdio.h"
int main() {
	int a=175,b=218;/*a,b应为整型，这样才能通过ASCII码得到合理的字符a,b*/
	printf("%c%c%c%c%c\n",a,b,a,b,a);
	printf("%c%c%c%c%c\n",a,a,b,a,a);/*print改为printf*/
	printf("%c%c%c%c%c\n",a,b,a,b,a);/*；改为;*/
	printf("%c%c%c%c%c\n",b,a,a,a,b);/*P改为p*/
	printf("%c%c%c%c%c\n",b,a,a,a,b);
return 0;
}
