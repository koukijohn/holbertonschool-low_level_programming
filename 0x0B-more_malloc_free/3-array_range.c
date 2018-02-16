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
	int *G, b, x; /*pointer 4 array */
	x = 0;

	if (min > max)
		return (NULL);
	G = malloc(sizeof(int) * ((max - min) + 1)); /* max - min 4 difference */
	if (G == NULL) /* test/fail case */
		return (NULL);
	for (b = min; b <= max; b++) /* */
	{
		G[x] = b;
		x++; /* b & x wll ++ until done w/ loop */
	}
	return (G);
}
