#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - This is a function that xctes a paramater in a given array.
 * @array: This is the array
 * @size: This is the size of the array
 * @action: This is a pointer to a function you need to use.
 *
 * Return: Void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (x = 0; x < size; x++)
		action(array[x]);
}
