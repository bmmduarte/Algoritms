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
        for(int j=0; j < n-i-1; j++)
        {
            if(array[j] > array[j+1])
                swap(&array[j], &array[j+1]);
        }
    }
}