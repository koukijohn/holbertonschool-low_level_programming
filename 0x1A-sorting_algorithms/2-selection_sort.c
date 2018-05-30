#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order.
 * @array: This is the array we are sorting.
 * @size: This is the size of the array.
 *
 * Return: Void
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t start = 0;
	int low = 0;
	int low_idx = 0;
	int temp;

	while (start < size - 1)
	{
		low = array[start];
		i = 0;
		while ((i + start) < size)
		{
			if (array[i + start] < low)
			{
				low = array[start + i];
				low_idx = start + i;
			}
			i++;
		}
		temp = array[start];
		array[start] = array[low_idx];
		array[low_idx] = temp;
		print_array(array, size);
		start++;
	}
}
