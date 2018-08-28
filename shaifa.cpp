#include <iostream>
using namespace std;
 
int main()
{  
    const int x = 1000;
    bool seive[x+1];
    for(int i=0;i<=x;i++){
        seive[i]=true;
    }
    for(int d =2;d*d<=x;d++){
        if(seive[d]){
            for(int n=d*d;n<=x;n+=d){
                seive[n]=false;
            }
        }
    }
    for(int n=2;n<=x;n++){
        if(seive[n]){
            cout<<n<<endl;
        }
    }
    return 0;
}