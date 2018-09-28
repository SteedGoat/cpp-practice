#include <stdio.h>
float C,F;
int main()
{
    F = 100.0;
    C = 5 * (F - 32)/9;
    printf("%6.1f华氏度相当于%6.1f摄氏度",F,C);
    return 0;
}