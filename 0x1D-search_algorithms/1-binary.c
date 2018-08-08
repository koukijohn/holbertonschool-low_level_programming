#include "search_algos.h"

/**
 * printer - This is a function that will print Searching in array.
 * @array: This is a pointer to the first element of the array to search in.
 * @Left: This is the beginning of the array.
 * @Right: This is the end of the array.
 *
 * Return: Void.
 */


void printer(int *array, size_t Left, size_t Right)
{
	size_t index = 0;

	printf("Searching in array: ");
	for (index = Left; index < Right; index++)
	{
		printf("%d, ", array[index]);
	}
	printf("%d\n", array[index]);
}


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
	size_t midpoint = 0;

	while (Left <= Right)
	{
		midpoint = ((Left + Right) / 2);

		/* This will print our searching in array */
		printer(array, Left, Right);
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
	}
	return (-1);
}
