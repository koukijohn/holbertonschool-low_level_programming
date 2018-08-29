#include "holberton.h"

/**
 * reverse_array - This reverse the content of an array of integers.
 * @a: An array of integers.
 * @n: The number of elements to swap.
 *
 * Return: Void.
 */

void reverse_array(int *a, int n)
{
	int temp;
	int start;
	n = n - 1;

	for (start = 0; start < n; n--)
	{
		temp = a[start];
		a[start] = a[n];
		a[n] = temp;
		start++;
	}
}
