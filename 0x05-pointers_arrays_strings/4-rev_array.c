#include "holberton.h"

/**
 * reverse_array - This reverse the content of an array of integers.
 * @a: An array of integers.
 * @n: The number of elements to swap.
 *
 */

void reverse_array(int *a, int n)
{
	int holder;
	int x;

	for (x = 0; x < n; x++)
	{
		holder = a[n];
		a[n] = a[x];
		a[x] = holder;
		n--;
	}
}
