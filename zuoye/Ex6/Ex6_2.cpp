/*题目2：
以下文本内容（斜体表示）：
存于字符数组中（每段不超过500字）：
char sentence1[500] = "(CNN) -- Beijing hosted one of the most memorable Summer Olympics in recent history -- now the Chinese capital is hoping to welcome the world's top Winter Games stars for the first time in a joint 2022 bid.";

对上述文字，统计每一段有多少大写字母（A-Z）、小写字母（a-z）、数字（0-9）、空格（仅考虑空格字符）、以及其他字符的个数。
提示：程序不需要输入，输出格式要求如下：
Sentence1:
  Uppercase letters: 10
  Lowercase letters: 25
  Numbers: 5
  Spaces: 3
  Others: 200

*/
#include <stdio.h>
int main()
{
    char sentence1[500] = "(CNN) -- Beijing hosted one of the most memorable Summer Olympics in recent history -- now the Chinese capital is hoping to welcome the world's top Winter Games stars for the first time in a joint 2022 bid.";
    int i,upper=0,lower=0,num=0,space=0,other=0;
    for(i=0;i<=sizeof(sentence1);i++){
        if(sentence1[i]>='A'&&sentence1[i]<='Z')
            upper++;
        else if(sentence1[i]>='a'&&sentence1[i]<='z')
            lower++;
        else if(sentence1[i]>='0'&&sentence1[i]<='9')
            num++;
        else if(sentence1[i]==' ')
            space++;
        else
            other++;
    }
    printf("Sentence1:\nUppercase letters: %d\nLowercase letters: %d\nNumbers: %d\nSpaces: %d\nOthers: %d",upper,lower,num,space,other);
    return 0;
}