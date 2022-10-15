#include "insertion_sort.h"

void swap(int * elem1, int * elem2)
{
    int aux = *elem1;
    *elem1 = *elem2;
    *elem2 = aux;
}

void insertionSortArray(int array[], int n)
{   

    for(int i=1; i < n; i++)
    {
        for(int j=i-1; j >= 0 ; j--)
        {
            if(array[j] > array[j+1])
                swap(&array[j], &array[j+1]);
            else
                break;
        }
    }
}