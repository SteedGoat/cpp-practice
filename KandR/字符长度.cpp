#include <stdio.h>
int strlen(char *s);
int main()
{
    char *s;
    scanf("%s",s);
    printf("%d",strlen(s));
    return 0;
}

int strlen(char *s)
{
    int n;

    for(n = 0; *s !='\0';s++)
        n++;
    return n;
}