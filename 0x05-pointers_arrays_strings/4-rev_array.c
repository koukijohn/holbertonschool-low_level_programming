#include "holberton.h"

/**
 * reverse_array - This reverse the content of an array of integers.
 * @a: An array of integers.
 * @n: The number of elements to swap.
 *
 */

void reverse_array(int *a, int n)
{
	int temp;
	int start;

	for (start = 0; start < n; start++)
	{
		temp = a[n - 1];
		a[n] = a[start];
		a[start] = temp;
		n--;
	}
}
