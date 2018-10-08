/*突然有一天，你忘记了今天是星期几，中国人凑吉利，所以你找来了八个人，让他们每人说两句话，
第一句为今天星期几，另一句为今天不是星期几，并且两句中一句真，一句假。可能第一句是真，也可能第二句是真。
最后请你确定今天是星期几，并输出。
*/
#include <iostream>

using namespace std;

int main()
{   
    int a[17]={0};
    int i,j;
    for(i=0;i<16;i+=2)
    {
        cin>>a[i]>>a[i+1];
    }
    for(int week_day=1;week_day<=7;week_day++)
    {
        int sum = 0;
            for(j=0;j<16;j+=2)
            {
                if((week_day==a[j])+(week_day!=a[j+1])==1)
                {
                    sum+=1;
                }
            }
            if(sum==8)
            {
                cout<<week_day<<endl;
            }

    }
    return 0;
}