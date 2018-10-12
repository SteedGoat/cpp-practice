#include <iostream>
using namespace std;
bool zhengchu(int);
int main()
{
    int i;
    for(i=2520;!zhengchu(i);i+=2520)
        ;
    cout<<i<<endl;
    return 0;
}

bool zhengchu(int n)
{
    for(int i=1;i<=20;i++){
        if(n%i!=0)
            return false;
    }
 return true;
}