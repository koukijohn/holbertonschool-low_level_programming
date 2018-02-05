#include "holberton.h"

/**
 * *_memset - This is a function that fills memory with a constant byte.
 * @s: This is our array we will be working with.
 * @b: This is the constant byte we will filling our memory with.
 * @n: This is the limit of our array.
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
