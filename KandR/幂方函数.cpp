#include <stdio.h>
int power(int m, int n);
int main()
{
    printf("%d\n",power(3,4));
    return 0;
}

int power(int m, int n)
{
    int p = 1;
    for(int i = 0; i<n;++i)
        p = p * m;
    return p;
}