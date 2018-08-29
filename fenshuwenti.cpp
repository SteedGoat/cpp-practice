#include <iostream>
using namespace std;

int Num;
int take[5];

bool assigned[5];

int like[5][5]={{0,0,1,1,0},
                {1,1,0,0,1},
                {0,1,1,0,1},
                {0,0,0,1,0},
                {0,1,0,0,1}};

void Try(int id);

int main()
{
    Num=0;
    for(int book = 0; book < 5; book++)
        assigned[book] = false;

    Try(0);

    return 0;
}

void Try(int id)
{
    if(id ==5)
    {
        Num++;

        cout<<"第"<<Num<<"个方案：";
        for(int i = 0; i < 5; i++)
            cout << take[i]<<' ';
        cout << endl;

        return;
    }

    for(int book = 0; book <= 4; book++)
    {
        if((like[id][book]==1)&&!assigned[book])
        {
            take[id]=book;
            assigned[book]=true;

            Try(id+1);

            assigned[book] = false;
        }
    }
}