#include "search_algos.h"

/**
 * b_search - This is a function that searches for a value in an array
 * of integers using the Binary search algorithm.
 * @array: This is a pointer to the first element of the array to search in.
 * @beginning: This is the beginning of the array.
 * @ending: This is the ending of the array.
 * @value: This is the value to search for.
 *
 * Return: index for success (index where value located). -1 for failure.
 */

int b_search(int *array, size_t beginning, size_t ending, int value)
{
	size_t midpoint = 0;
	size_t counter = beginning;
	char delimeter = NULL;

	if (beginning < ending)
	{
		midpoint = (beginning + ending) / 2;
		printf("Searching in array:");
		while (counter <= ending)
		{
			printf("%c %d", delimeter, array[counter]);
			delimeter = ',';
			counter++;
		}
		printf("\n");

		if (array[midpoint] == value)
		{
			return (midpoint);
		}
		else if (array[midpoint] < value)
		{
			return (b_search(array, midpoint + 1, ending,
					 value));
		}
		else
		{
			return (b_search(array, beginning, midpoint - 1,
					 value));
		}
	}
	return (-1);
}

/**
 * binary_search - This is a function that searches for a value in an array
 * of integers using the Binary search algorithm.
 * @array: This is a pointer to the first element of the array to search in.
 * @size: This is the number of elements in array.
 * @value: This is the value to search for.
 *
 * Return: index for success (index where value located). -1 for failure.
 */

int advanced_binary(int *array, size_t size, int value)
{
	int index = 0;

	if (array == NULL)
	{
		return (-1);
	}
	index = b_search(array, 0, size - 1, value);
	return (index);
}
