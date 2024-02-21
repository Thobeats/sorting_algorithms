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
	unsigned int i, j, temp, holder = 0;

	for (i = 0; i < size; i++)
	{
		temp = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[temp] > array[j])
			{
				temp = j;
			}
		}
		if (temp != i)
		{
			holder = array[i];
			array[i] = array[temp];
			array[temp] = holder;
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
