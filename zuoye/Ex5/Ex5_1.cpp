/*将英语26个字母由A到Z分别编上1到26的分数
你的知识(KNOWLEDGE)只能得到 11+14+15+23+12+5+4+7+5=96分；
你努力工作(HARDWORK)也只能得到8+1+18+4+23+15+18+11=98分； 
只有你的态度(ATTITUDE)才是左右你生命全部的1+20+20+9+20+21+4+5=100分。
试编程验证，例如，输入KNOWLEDGE，计算后输出为96分。
*/
#include <stdio.h>
int main()
{   
    char c[1000];
    int i=0;
    int sum=0;
    printf("请输入一串大写字母：");
    while(1){
        scanf("%c",&c[i]);
        if(c[i]>='A'&&c[i]<='Z'){
            sum+=c[i]-'A'+1;
        }
        else break;
    }
    printf("%d\n分",sum);
    return 0;
}