/*题目描述
给定一个数组，判断其中的数据序列是否左右对称：偶数个数时，左右两半部分正好逆序；奇数时，除中间位置数外，左右逆序

输入格式
第一行N表示一共有N个测试用例，也即接下来的输入数据共有N行。

接下来的每一行表示一个输入数组，第一个数字n表示该数组的元素个数，后面紧跟着n个数，中间都以空格隔开

输出格式
是逆序输出YES,否则输出NO（注意都是大写，小写判错）*/

/*这里实现的是一组数*/

#include<iostream>
using namespace std;


bool sw(int n);
int main()
{   
    int n;
    int a[n];
    cin>>n;
    for(int j=1; j<=n; j++)
    {
        cin>>a[j];
    }
    if(sw(n))
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else
    {
        cout<<"NO"<<endl;
        return 0;
    }
}

bool sw(int n)
{   
    int a[n];
    if(a[1]==a[n])
    {   
        for(int i=1;i<=n-2;i++)
            a[n]=a[n+1];
        n--;
        while(n<=1)
        {   
            break;
            return true;
        }
    }
    return false;
}