#include <iostream>
using namespace std;

int main()
{
    int min=1000,target,cards[13],pos=-1;
    int i,j;
   for(i=0;i<13;i++)
    {   
        target=cards[i];
       for(j=0;j<i;j++)
       {
           if(cards[i]<target)
           {
               min=cards[j];
               pos=j;
           }
       }
       if(pos!=-1)
       {
           for(j=i;j>pos;j--)
           cards[j]=cards[j-1];
           cards[pos]=target;
       }
    }
    return 0;
}