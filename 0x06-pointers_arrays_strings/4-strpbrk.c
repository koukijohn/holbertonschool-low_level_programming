#include "holberton.h"

/**
 * *_strpbrk - Function that searches a string for any set of bytes.
 * @s: This is the string that we are seatching in.
 * @accept: This is a string with a set of bytes.
 *
 * Return: 0 or (s+x)
 */

char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
				return (s + x);
		}
	}
	return (0);
}
