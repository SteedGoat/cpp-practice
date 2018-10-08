#include <iostream>
using namespace std;
int main()
{
    int min=1000,pos=-1,cards[13];
    int i,j;
    for(i=0;i<13;i++)
    {
        int target=cards[i];
        int a=0,b=1000;
        int mid=i/2;
        while(a<b)
        {
            if(cards[mid]<target)
            {
                b=mid-1;
            }
            else
            {
                a=mid+1;
            }
            pos=mid;
        }
        for(j=i;j>pos;j--)
        {
            cards[j]=cards[j-1];
        }
        cards[pos]=target;
        pos=mid;
    }
    return 0;
}