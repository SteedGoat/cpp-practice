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
    int64_t sum=0;
    int64_t n;
    for(n=2;n<=2000000;n++){
        if(isprime(n))
            sum+=n;
    }
    cout<<sum<<endl;
    return 0;
}