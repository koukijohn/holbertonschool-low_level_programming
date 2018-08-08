#include "search_algos.h"

/**
 * linear_search - This is a function that searches for a value in an array
 * of integers using the Linear search algorithm.
 * @array: This is a pointer to the first element of the array to search in.
 * @size: This is the number of elements in array.
 * @value: This is the value to search for.
 *
 * Return: 1 for success. -1 for failure.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t counter = 0;

	while (counter != size)
	{
		printf("Value checked array[%lu] = [%d]\n", counter,
		       array[counter]);
		if (value == array[counter])
		{
			return (counter);
		}
		counter++;
	}
	return (-1);
}
