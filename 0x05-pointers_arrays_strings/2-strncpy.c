#include "holberton.h"

/**
 * *_strncpy - This is a function that copies a string.
 * @dest: This is the string we will copy to.
 * @src: This is the string we copy from.
 * @n: This is the integer limit.
 *
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		for (; x < n; x++)
		{
			dest[x] = '\0';
		}
	}
	return (dest);
}
