#include "sort.h"

/**
*swap - swaps two elements in an array
*@xp: first element to be swapped
*@yp: seceond element to be swapped
*/
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
*selection_sort - sorts an array
*@array: the array to be sorted
*@size: the number of elements in the array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}
				if (min_idx != i)
				swap(&array[min_idx], &array[i]);
				print_array(array, size);
	}
}