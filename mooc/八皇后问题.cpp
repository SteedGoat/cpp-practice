#include <iostream>
using namespace std;

const int Normalize = 9;
int Num;//方案数
int q[9];//八皇后行号

int S[9];//行是否安全
int L[17];//i-j对角线是否安全
int R[17];//i+j对角线是否安全

void Try(int col);

int main()
{
    Num = 0;

    for(int i = 0; i < 9; i++)
        S[i] = true;
    for(int i = 0; i < 17; i++)
        L[i]=R[i]=true;

    Try(1);

    return 0;   
}

void Try(int col)
{
    if(col == 9)
    {
        Num++;

        cout<<"方案"<<Num<<":";
        for(int i = 1; i<=8; i++)
            cout<<q[i]<<" ";
        cout<<endl;

        return;
    }

    for(int row = 1; row<=8; row++)
    {
        if(S[row] && R[col + row] && L[col - row + Normalize])
        {
            q[col] = row;

            S[row] = false;
            L[col - row + Normalize] = false;
            R[col + row] = false;

            Try(col + 1);

            S[row] =true;
            L[col - row + Normalize] = true;
            R[col + row] = true;

        }
    }
}