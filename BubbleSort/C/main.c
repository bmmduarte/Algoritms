#include <stdio.h>
#include "bubble_sort.h"

void printIntArray(int array[], int length);

int main()
{
	int array[] = {4, 2, 1, 6, 5, 3, 9, 52, 17, 2, 1, 6, 5};
	
	size_t arr_len = sizeof(array) / sizeof(int);

	printf("\n-------- Bubble sort example --------\n");

	printIntArray(array, arr_len);	

	bubbleSortArray(array, arr_len);

	printIntArray(array, arr_len);

	return 0;
}

void printIntArray(int array[], int length) 
{
	printf("[ ");
	for(int i = 0 ; i < length -1 ; i++)
		printf("%d, ", array[i]);
	printf("%d ]\n", array[length-1]);
}
