#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - Allocates mem for an array using malloc
 * @nmemb: This is the number of mem in an array
 * @size: This is the size of bytes
 *
 * Return: p.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	while (x < (nmemb * size))
	{
		p[x] = '\0';
		x++;
	}
	return (p);
}
