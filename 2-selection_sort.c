#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * selection_sort - sorts an array with the selection method
 * @array: the array to be sorted
 * @size: the size of the array
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, minId;

	if (array == NULL)
		return;
	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		minId = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minId])
			{
				minId = j;
			}
		}

		if (minId != i)
		{
			swapValues(&array[minId], &array[i]);
			print_array(array, size);
		}
	}
}

/**
 * swapValues - swap the values of the array
 * @x: the value to swap
 * @y: the value to be swapped with
 */

void swapValues(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
