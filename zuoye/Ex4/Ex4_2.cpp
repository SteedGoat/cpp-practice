/*��Ŀ2������һ��������������6λ����ȷ��������м�λ���������6λ������ʾ"��ʱ�޷�ȷ����λ"֮�����ʾ��
�磺1375��λ����4λ��
*/
#include <stdio.h>
#include <cmath>
int main()
{   
    int a;
    int n;
    printf("������һ��������������6λ��\n");
    scanf("%d",&a);
    a=(a>=0)?a:-a;
    if(a>999999)
        printf("��ʱ�޷�ȷ����λ\n");
    else if(a==0)
        printf("�������1λ\n");
    else{
        for(n=6;n>=0;n--){
            if(a>=pow(10,n-1))
                break;
        }
        printf("���������%dλ\n",n);}
    return 0;
}