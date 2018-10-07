#include <stdio.h>
#include <string.h>

int trim(char s[]);
int main()
{
    char s[10]="adada  ";
    printf("%d\n",trim(s));
    return 0;
}

int trim(char s[])
{
    int n;
    for(n = strlen(s)-1; n>=0; n--)
    {
        if(s[n]!=' '&&s[n]!='\n'&&s[n]!='\t')
            break;
    }
    s[n+1]='\0';
    return n/9;
}