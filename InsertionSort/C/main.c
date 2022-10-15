#include <stdio.h>
#include "insertion_sort.h"

void printIntArray(int array[], int length);

int main()
{
	int array[] = {4, 2, 1, 6, 5, 3, 9, 52, 17, 3, 11, 16, 35};
	
	size_t arr_len = sizeof(array) / sizeof(int);

	printf("\n-------- Insertion sort example --------\n");

	printIntArray(array, arr_len);	

	insertionSortArray(array, arr_len);

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
