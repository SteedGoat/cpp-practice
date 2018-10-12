#include <stdio.h>

int main()
{
	int score;

	printf("你好！你的《计算机程序设计基础》成绩预计得多少分？\n ");
	scanf( "%d", &score );    //输入成绩

	char grade; //以下7/8行，是通过选择语句，将成绩分数转化为等级。学习选择语句时再详细研究。
	if( score >= 93 && score <=100 )
		grade = 'A';
	else if( score >= 85 && score <=92 )
		grade = 'B';
	else if( score >= 77 && score <=84 )
		grade = 'C';
	else if( score >= 70 && score <=76 )
		grade = 'D';
	else if( score <= 69 )
		grade = 'F';

	printf("你的预计成绩等级为：%c \n", grade );  //输出等级

	return 0;
}