#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - This is a function that searches for an integer.
 * @array: This is the array we will put into cmp.
 * @size: This is the number of elements in the array.
 * @cmp: This is a pointer to te function to be used to compare values.
 *
 * Return: 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;
	int y; /*This is used as our placeholder var*/

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	while (x < size)
	{
		y = cmp(array[x]);
		if (y != 0)
			return (x);
		x++;
	}
	return (-1); /*After exits, return -1 for mismatch*/
}
