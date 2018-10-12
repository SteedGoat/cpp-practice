#include <iostream>
using namespace std;
bool ishws(int);
int main()
{   
    int i,j,max=0;
    for(i=100;i<=999;i++){
        for(j=100;j<=999;j++){
            if(ishws(i*j)==true)
                if(max<i*j)
                    max=i*j;
        }
    }
    cout<<max<<endl;
}

bool ishws(int n)
{
    int a[7]={0};
    int i;
    for(i=1;i<=7&&n!=0;i++){
        a[i]=(n%10);
        n=(n-a[i])/10; 
    }
    int p=i-1;
    for(int i=1;i<=p/2;i++)
    {
        if(a[i]!=a[p+1-i])
            return false;
    }
    return true;
}