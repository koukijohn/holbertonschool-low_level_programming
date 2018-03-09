#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * set_bit - Sets value of bit to 1 at given index.
 * @n: Our arg var.
 * @index: Index starting from 0 of bit you set.
 *
 * Return: 1 on sucess, -1 if error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	*n = *n | (1 << index);/*using or to set bit at index*/
	return (1);
}
