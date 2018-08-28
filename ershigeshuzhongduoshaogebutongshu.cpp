/*题目描述
输入20个整数，输出其中出现了多少个不相同的数
输入格式
1行20个整数，用空格分开
输出格式
一个数字，表示多少个不相同的数*/
#include <iostream>
using namespace std;

int main()
{
    int a[19],b[19];
    int i,j,k;
    for(i=0;i!=20;i++){
        cin>>a[i];
    }
    for(i=0;i<20;i++)
    {   
        int target=a[i];
        int pos=-1;
        for(j=0;j<i;j++)
       {    
           if(target>b[j])
           {
               pos=j;
               break;
           }
       }
       if(pos!=-1)
       {
           for(k=i;k>pos;k--)
           {
               b[k]=b[k-1];
           }
           b[pos]=target;
        }
        else
       {
           b[i]=a[i];
        }
    }
    
    int count=1;
    for(i=0;i!=19;i++)
    {
        if(b[i+1]!=b[i])
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}