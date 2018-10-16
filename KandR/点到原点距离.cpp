#include <stdio.h>
#include <cmath>
int main()
{
    struct point {
        float x;
        float y;
    };
    point pt;
    scanf("%f%f",&pt.x,&pt.y);
    printf("%.2f\n",sqrt(pt.x*pt.x+pt.y*pt.y));
    return 0;
}