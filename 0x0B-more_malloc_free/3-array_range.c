#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - This function creates an array of integers.
 * @min: This is the minumum
 * @max: This is the maximum
 *
 * Return: G.
 */

int *array_range(int min, int max)
{
	int *G, size, b;

	if (min > max)
		return (NULL);
	size = max - min;
	G = malloc(sizeof(int) * size + 1);
	if (!G) /* fail case */
		return (NULL);
	for (b = 0; b <= size; b++)
	{
		G[b] = min;
		min++;
	}
	return (G);
}
