#include "insertion_sort.h"

void insertionSortArray(int array[], int n)
{   

    int key, j;
    for(int i=1; i < n; i++)
    {
        key = array[i];
        for(j=i-1; j >= 0 ; j--)
        {
            if(array[j] > key)
                array[j+1] = array[j];
            else
                break;
        }
        array[j+1] = key;
    }
}