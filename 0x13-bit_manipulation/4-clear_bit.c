#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * clear_bit - Sets value of bit == 0 at index.
 * @n: This is our arg num we are changing bit for.
 * @index: This is how we count through our binary.
 *
 * Return: 1 on success and -1 on error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
