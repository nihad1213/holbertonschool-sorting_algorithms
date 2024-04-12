#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the
 *  Bubble sort algorithm
 *  @array: array
 *  @size: elements in array
 *  Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tempNumber;
	int change = 1;

	if (!array || size < 2)
	{
		return (-1);
	}

	j = size;

	while (change)
	{
		change = 0;
		for (i  = 1; i < j; i++ )
		{
			if (array[i - 1] > array[i])
			{
				tempNumber = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temNumber;
				change = 1;
				print_array(array, size);
			}
		}

		j--;
	}
}
