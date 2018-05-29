#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: This is our array of integers.
 * @size: This is the size of an array.
 *
 * Return: Void.
 */

void bubble_sort(int *array, size_t size)
{
	size_t y = 0;
	int flag = 1;
	int temp;

	while (flag == 1)
	{
		flag = 0;
		y = 0;
		while (y < size - 1)
		{
			if (array[y] > array[y + 1])
			{
				temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;
				print_array(array, size);
				flag = 1;
			}
			y++;
		}
	}
}
