/*题目4："石头剪刀布"（rock-paper-scissors）
甲/乙两人猜"石头剪刀布"。提示甲和乙的输入，统一约定为：
字符'R'或'r'代表"石头"；字符'P'或'p'代表"布"；字符'S'或's'代表"剪刀"。
用if语句，判断谁赢了并输出结果！
提示：定义字符变量 cInputA, cInputB。
*/

#include <stdio.h>
int main()
{
    char cInputA,cInputB;
    printf("请甲和乙出拳(字符'R'或'r'代表石头；字符'P'或'p'代表布；字符'S'或's'代表剪刀)\n");
    scanf("%c %c",&cInputA,&cInputB);
    cInputA=(cInputA>='A'&&cInputA<='Z')?cInputA-'A'+'a':cInputA;
    cInputB=(cInputB>='A'&&cInputB<='Z')?cInputB-'A'+'a':cInputB;
    switch(cInputA)
    {
        case 'r':
                printf("甲出的是石头\n");
                break;
        case 'p':
                printf("甲出的是布\n");
                break;
        case 's':
                printf("甲出的是剪刀\n");
                break;
        default:
                printf("无效输入\n");
    }
    switch(cInputB)
    {
        case 'r':
                printf("乙出的是石头\n");
                break;
        case 'p':
                printf("乙出的是布\n");
                break;
        case 's':
                printf("乙出的是剪刀\n");
                break;
        default:
                printf("无效输入\n");
    }

    if(cInputA==cInputB)
        printf("双方平局\n");
    else if((cInputA=='r'&&cInputB=='s')||(cInputA=='s'&&cInputB=='p')||(cInputA=='p'&&cInputB=='r'))
        printf("甲赢了！\n");
    else
        printf("乙赢了！\n");
    return 0;
}