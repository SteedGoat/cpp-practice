#include <stdio.h>
int main()
{
   char c='K';	//�����ַ�����c���ҳ�ʼ��Ϊ ��K��
   c++;			//��������
   printf("%d   %c\n", c, c);
   c=c+256;		//�ӷ����㡢��ֵ
   printf("%d   %c\n", c, c);
   c=c+5;
   printf("%d   %c\n", c, c);

   return 0;
}

