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
	int end = n - 1;

	for (start = 0; start < end; end--)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
	}
}
