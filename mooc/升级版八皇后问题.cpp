/*题目描述
8X8的国际象棋棋盘上被挖了一些洞，这些洞不能放棋子，求八皇后问题的摆放方案，输出一种方案即可

输入格式
棋盘用.表示正常格子，用#表示被挖掉的洞，一共8行8列

输出格式
输出从上到下的每一行的皇后所在列号（1-8）

注意：只输出列号，只输出列号，最后的输出应该只是8个数字，第i个数字表示第i行的皇后在第几列，中间以空格隔开。

样例输入
........
..##....
####....
........
........
........
........
....####
样例输出
6 2 7 1 4 8 5 3*/
#include <iostream>
using namespace std;
const int Normalize = 9;
int q[9];//八皇后行号
int Num = 0;
int S[9];//行是否安全
int L[17];//i-j对角线是否安全
int R[17];//i+j对角线是否安全

void Try(int col, char **array);

int main()
{   
    char **array = new char*[8];
    for(int i=0; i!=8; i++)
    {   
        array[i]=new char[8];
        for(int j=0; j!=8; j++)
        {
            cin>>array[i][j];
        }
    }
    for(int i = 0; i < 9; i++)
        S[i] = true;
    for(int i = 0; i < 17; i++)
        L[i]=R[i]=true;

    
    Try(1, array);

    return 0;   
}

void Try(int col,char **array)
{
    if(col == 9)
    {   
        Num++;
        if(Num == 1)
        {
            for(int i = 1; i<=8; i++)
                cout<<q[i]<<" ";
            cout<<endl;
        }
    }

    for(int row = 1; row<=8; row++)
    {
        if(S[row] && R[col + row] && L[col - row + Normalize] && array[col-1][row-1]=='.')
        {
            q[col] = row;

            S[row] = false;
            L[col - row + Normalize] = false;
            R[col + row] = false;

            Try(col + 1, array);

            S[row] =true;
            L[col - row + Normalize] = true;
            R[col + row] = true;

        }
    }
}
