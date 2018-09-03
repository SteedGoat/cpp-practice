#include <iostream>
using namespace std;

int Jump(int s, int y);
int main()
{   
    int s, y;
    cout<<"输入柱子数：";
    cin>>s;
    cout<<"输入荷叶数：";
    cin>>y;
    cout<<"青蛙只数最多为："<<Jump(s, y)<<endl;
    return 0;
}

int Jump(int s, int y)
{
    int k = 0;
    if(s == 0)
        k = y + 1;
    else k = 2 * Jump(s-1, y);
    return k;
}