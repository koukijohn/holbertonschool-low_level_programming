#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - This function creates an array of characters and init w/ chr
 * @size: This is the limit of the pointer
 * @c: This is the specific character we are creating an array of.
 *
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	char *p; /* This is the pointer we are creating & declaring. */
	unsigned int x;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size); /*rtrn ptr to 1st elment addrs*/
	if (p == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
	{
		p[x] = c;
	}
	return (p);
}
