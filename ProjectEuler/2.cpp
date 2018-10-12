#include <iostream>
using namespace std;
int main()
{
    long long a[100];
    int i=0;
    a[0]=1;
    a[1]=1;
    long long sum=0;
    for(i = 2; i<=100&&a[i]<=4000000; i++)
    {
        a[i]=a[i-1]+a[i-2];
        if(a[i]%2==0&&a[i]<=4000000)
            sum+=a[i];
    }
    cout<<sum<<endl;
    return 0;
}