#include "bubble_sort.h"

void swap(int * elem1, int * elem2)
{
    int aux = *elem1;
    *elem1 = *elem2;
    *elem2 = aux;
}

void bubbleSortArray(int array[], int n)
{
    for(int i=0; i < n-1; i++)
    {
        if(array[i] > array[i+1])
            swap(&array[i],&array[i+1]);
    }
}