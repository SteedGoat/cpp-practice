/*��Ŀ1����3������a,b,c���ɼ������룬���������������
��ʾ������3�����ͱ�������n1, n2, n3��
*/
#include <stdio.h>
int main()
{
    int a,b,c,temp;
    printf("��������������\n");
    scanf("%d%d%d",&a,&b,&c);
    temp=(a>=b)?a:b;
    temp=(temp>=c)?temp:c;
    printf("%d\n",temp);
    return 0;
}