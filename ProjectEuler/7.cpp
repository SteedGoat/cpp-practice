#include <iostream>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
        return false;
    return true;
}

int main()
{   
    int p=1,i=2;
    while(p!=10001){
        ++i;
        if(isprime(i))
            p++;
    }
    cout<<i<<endl;
    return 0;
}
