#include <iostream>
using namespace std;

int main()
{   
    int cards[13],i;
    for(i=0;i<=13;i++)
    {
        int min=cards[i],min_id=i;
        for(int j=i+1;j<=13;j++)
        {
            if(cards[i]<min){
                min=cards[i];
                min_id=i;
            }
        }
    }
    return 0;
}
