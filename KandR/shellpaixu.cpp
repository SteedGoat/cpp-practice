#include <stdio.h>
int main(){
    int gap, i, j, temp, n;
    scanf("%d",&n);
    int v[n];
    for(i = 0;i<n;i++){
        scanf("%d",&v[i]);
    }
    for(gap=n/2; gap > 0; gap--){
        for(i = gap; j>=0 && v[j] > v[j + gap]; j -= gap){
            temp = v[j];
            v[j] = v[j + gap];
            v[j + gap] = temp;
        }
    }
    for(i = 0; i<n; i++){
        printf("%d ", v[i]);
    }
    return 0;
}

