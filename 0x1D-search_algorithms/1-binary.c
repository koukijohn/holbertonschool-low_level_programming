#include "search_algos.h"

/**
 * binary_search - This is a function that searches for a value in an array
 * of integers using the Binary search algorithm.
 * @array: This is a pointer to the first element of the array to search in.
 * @size: This is the number of elements in array.
 * @value: This is the value to search for.
 *
 * Return: 1 for success (index where value located). -1 for failure.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t Left = 0;
	size_t Right = size - 1;
	size_t midpoint;
	size_t index = 0;

	while (Left <= Right)
	{
		midpoint = ((Left + Right) / 2);

		/* This will print our searching in array */
		printf("Searching in array: ");
		while (index < Right)
		{
			printf("%d, ", array[index]);
			index++;
		}
		printf("%d\n", array[index]);
		/* This will print our searching in array */


		if (array[midpoint] < value)
		{
			Left = midpoint + 1;
		}
		else if (array[midpoint] > value)
		{
			Right = midpoint - 1;
		}
		else
		{
			return (midpoint);
		}
		Left++;
	}
	return (-1);
}
