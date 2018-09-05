/*题目描述
以递归方法实现选择排序（从小到大），为便于检查，要求输出每一次操作后的数组元素的排列状况。

输入格式
两行输入，第一行表示数组元素个数，第二行表示数组元素，每个数之间以空格隔开

输出格式
每一行为一次操作后的输出

样例输入
5
3 1 5 4 2
样例输出
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5*/
#include <iostream>
using namespace std;

int N,b;
int *a;

void Sort(int *a, int N);
int main()
{
    cin>>N;
    int *a = new int [N];
    for(int i=0; i<N;i++)
    {
        cin >> a[i];
    }
    Sort(a, N);
    return 0;
}

void Sort(int *a,int n)
{   

    if(n==0)
        return;
    b=a[0];
    int pos = 0;
    for(int i=0; i<n;i++)
    {
        if(a[i]>b)
        {
            pos = i;
            b = a[i];
        }
    }
    a[pos] = a[n-1];
    a[n-1] = b;
    for(int i = n-1; i<N; i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<endl;
    Sort(a, n-1);
}