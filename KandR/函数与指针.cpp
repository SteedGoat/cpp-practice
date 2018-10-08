/*这里函数中的变量必须使用指针，否则交换的仅仅是a和b的副本的值*/
#include <stdio.h>
void swap(int *px, int *py);
int main()
{   
    int x,y;
    int *px,*py;
    scanf("%d %d",&x, &y);
    px = &x;
    py = &y;
    swap(px,py);
    printf("%d %d",x,y);
    return 0;
}

void swap(int *px, int *py)
{
    int temp;
    temp = *py;
    *py = *px;
    *px = temp;
}

