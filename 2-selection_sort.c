#include "sort.h"

/**
 * swap - change numbers place
 * @change1: number1
 * @change2: number2
 * Return: void
 */
void swap(int *change1, int *change2)
{
	int temp = *change1;
	*change1 = *change2;
	*change2 = temp;
}

/**
 * selection_sort - selection sort
 * @array: array
 * @size: size
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i , j, min_index;

	for (i = 0; i < (size - 1); i++)
	{
		min_index = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}

		if (min_index != i)
			swap(&array[min_index], &arr[i]);
	}
}
