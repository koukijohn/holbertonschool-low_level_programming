#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers w/new line.
 * @n: number of elements of the array to be printed
 * @a: This is an array
 *
 * Return: Void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
