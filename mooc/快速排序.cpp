#include <iostream>
using namespace std;

void QuickSort(int * array, int len)
{
    if(len<=1)
        return;
    
    int * left = new int[len], * right = new int [len];

    int left_idx=0, right_idx=0;

    int key = array[0];
    for(int i=0;i<len;i++)
    {
        if(array[i]<key)
            left[left_idx++]=array[i];
        if(array[i]>key)
            right[right_idx++]=array[i];
    }

    QuickSort(left, left_idx);
    QuickSort(right, right_idx);

    int idx = 0;
    int i;
    for(i = 0; i < left_idx; i++)
        array[idx++]=left[i];
    array[idx++]=key;
    for(i = 0; i < right_idx; i++)
        array[idx++]=right[i];

    delete[] left;
    delete[] right;
}