#include <iostream>
using namespace std;

void MergeSort(int * array, int start, int end)
{
    if(start == end - 1)
        return;
    int mid = (start + end)/2;
    MergeSort(array, start, mid);
    MergeSort(array, mid, end);

    int * tmp = new int[end - start];

    int left_idx=start, right_idx=mid, i=0;
    while(left_idx<mid && right_idx<end)
    {
        if(array[left_idx]<array[right_idx])
        {
            tmp[i++]=array[left_idx++];
        }
        else
        {
            tmp[i++]=array[right_idx];
        }
    } 

    while(left_idx<mid)
    {
        tmp[i++]=array[left_idx++];
    }

    while(right_idx<end)
    {
        tmp[i++]=array[right_idx++];
    }

    for(int i = 0, idx = start; i < end-start; i++, idx++)
    {
        array[idx]=tmp[i];
    }
    delete[] tmp;
}