#include <iostream>
using namespace std;
bool isprime(int);
int main()
{
    long long n=600851475143;
    long long i;
    long long max=1;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0&&isprime(i))
            max=i;
    }
    cout<<max<<endl;
    return 0;
}

bool isprime(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
        return false;
    return true;
}