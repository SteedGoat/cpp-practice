#include <stdio.h>
int main()
{
    
char C1='S', C2='p'; 
//char C1='S', C2='s'; 
//char C1='S', C2='r'; 
if(C1>='A'&&C1<='Z') C1=C1-'A'+'a';
if(C2>='A'&&C2<='Z') C2=C2-'A'+'a';
if( C1==C2 ) printf("平局");
else if (C1=='r'&&C2=='s'|| C1=='s'&&C2=='p'|| C1=='p'&&C2=='r') printf("甲胜");
else printf("乙胜");

return 0;
}