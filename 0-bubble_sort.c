#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * bubble_sort - sorts an array in ascending order
 * @array: the array to be sorted
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int isSwapped;

	if (sizeof(array) == 0)
		printf(" ");

	for (i = 0; i < size - 1; i++)
	{
		isSwapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swapValues(&array[j], &array[j + 1]);
				isSwapped = 1;
				print_array(array, size);
			}
		}

		if (isSwapped == 0)
		{
			break;
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
