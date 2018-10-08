#include <stdio.h>
void qsort(int v[], int left, int right);
int main()
{   
    int N = 0;
    int v[100000];
    int i;
    printf("N = ");
    scanf("%d", &N);
    printf("v[0] to v[%d] = ",N-1);
    for(i = 0;i!=N; i++)
    {
        scanf("%d", &v[i]);
    }
    qsort(v, 0, N-1);
    for(i = 0; i!=N; i++)
    {
        printf("%d ", v[i]);
    }
    return 0;
}

void qsort(int v[], int left, int right)
{
    int i, last;
    void swap(int v[], int i, int j);

    if(left >= right)
        return;
    swap(v, left, (left+right)/2);
    last = left;
    for(i = left + 1; i <= right; i++)
        if(v[i] < v[left])
            swap(v, ++last, i);
    swap(v, left, last);
    qsort(v, left, last-1);
    qsort(v, last+1, right);
}

void swap(int v[], int i, int j)
{
    int temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}