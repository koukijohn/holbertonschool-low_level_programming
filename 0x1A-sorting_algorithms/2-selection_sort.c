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
	size_t traverser = 0;
	int low = 0;
	size_t low_index = 0;
	int value_holder = 0;

	if (array == NULL)
		return;
	if (size < 2)
		return;

	while (traverser < size)
	{
		low = array[traverser];
		low_index = traverser;
		x = 0;  /*resets inner loop position*/
		while ((x + traverser) < size)
		{
			if (array[x + traverser] < low)
			{
				low = array[traverser + x];
				low_index = traverser + x;
			}
			x++;
		}
		if (traverser != low_index)
		{
			value_holder = array[traverser];
			array[traverser] = array[low_index];
			array[low_index] = value_holder;
			print_array(array, size);
		}
		traverser++;
	}
}
