#include <iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=1000;i++){
        for(j=i;j<=1000;j++){
            if(i*i+j*j==(1000-i-j)*(1000-i-j))
                printf("%d",i*j*(1000-i-j));
        }
    }
    return 0;
}