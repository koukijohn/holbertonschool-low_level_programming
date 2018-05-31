#include "sort.h"

/**
 * partition - This will set the partition of our array.
 * @array: This is the array that we are partitioning.
 * @low_index: This is the index of the low section of the array.
 * @high_index: This is the index of the high section of the array.
 * @size: This is the size of the array.
 *
 * Return: This will return the index moving foward.
 */

int partition(int *array, int low_index, int high_index, size_t size)
{
	int pivot_point, x, y, holder;

	pivot_point = array[high_index];
	x = low_index - 1;
	y = low_index;

	while (y < high_index)
	{
		if (array[y] <= pivot_point)
		{
			x++;
			holder = array[x];
			array[x] = array[y];
			array[y] = holder;
			if (x != y)
			{
				print_array(array, size);
			}
		}
		y++;
	}
	holder = array[x + 1];
	array[x + 1] = array[high_index];
	array[high_index] = holder;
	if (x + 1 != high_index)
	{
		print_array(array, size);
	}
	return (x + 1);
}


/**
 * sorter - This will recursively call sort and partition the array
 * @array: This is an array of integers.
 * @low_index: This is the index of the low section of the array.
 * @high_index: This is the index of the high section of the array.
 * @size: This is the size of the array.
 *
 * Return: Void.
 */

void sorter(int *array, int low_index, int high_index, size_t size)
{
	int p;

	if (low_index < high_index)
	{
		p = partition(array, low_index, high_index, size);
		sorter(array, low_index, p - 1, size);
		sorter(array, p + 1, high_index, size);
	}
}


/**
 * quick_sort - This sorts an array of integers in ascending order.
 * @array: This is the array we are sorting.
 * @size: This is the size of the array.
 *
 * Return: Void.
 */

void quick_sort(int *array, size_t size)
{
	int low = 0;
	int high = 0;

	if (array == NULL)
	{
		return;
	}

	high = size - 1;
	sorter(array, low, high, size);
}
