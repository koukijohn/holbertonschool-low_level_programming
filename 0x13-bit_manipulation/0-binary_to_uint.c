#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - Converts binary number to unsigned int.
 * @b: This points to a string of 0 and 1 chars.
 *
 * Return: Converted number or 0 if one not 0 or 1 in b or if b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b == '1')
			decimal = 1 | decimal << 1;
		else if (*b == '0')
			decimal = decimal << 1;/*shift pos left by 1*/
		else
			return (0);
		b++;
	}
	return (decimal);
}
