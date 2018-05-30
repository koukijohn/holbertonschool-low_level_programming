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
	size_t x = 0;
	size_t start = 0;
	int low = 0;
	size_t low_index = 0;
	int value_holder = 0;

	if (array == NULL)
		return;
	if (size < 2)
		return;
	while (start < size)
	{
		low = array[start];
		low_index = start;
		x = 0;  /*resets inner loop position*/
		while ((x + start) < size)
		{
			if (array[x + start] < low)
			{
				low = array[start + x];
				low_index = start + x;
			}
			x++;
		}
		if (start != low_index)
		{
			value_holder = array[start];
			array[start] = array[low_index];
			array[low_index] = value_holder;
			print_array(array, size);
		}
		start++;
	}
}
