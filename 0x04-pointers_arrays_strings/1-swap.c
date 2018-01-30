#include "holberton.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: integer to be pointed to.
 * @b: integer to be pointed to.
 *
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
