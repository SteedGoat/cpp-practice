#include <iostream>
using namespace std;
int main()
{
    int min=10000,pos=-1,n;
    int times;

    cout<<"times = ";
    cin>>times;

    int a[times];
    for(int j=1;j<=times;j++)
    {
        cin>>a[j];
    }

    for(n=1;n<=times;n++)
    {    
        if(a[n]<=min)
        {
            min=a[n];
            pos=n;
        }   
    }
    return pos;
}