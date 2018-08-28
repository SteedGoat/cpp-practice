#include <iostream>
using namespace std;
bool isPrime(int n);
int main()
{
    int n;
    for(n=2;n<=100;n++)
    {
        if(isPrime(n))
        {
            cout<<n<<' ';
        }
    }
    return 0;
}

bool isPrime(int n)
{   
    for(int i=2;i*i<=n;i++)
    {
        if(n%i == 0)
        {
           return false;
            break;
        }
    }
    return true;
}