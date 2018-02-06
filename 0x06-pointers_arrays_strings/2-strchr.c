#include "holberton.h"

/**
 * *_strchr - This function locates a character in a string
 * @s: This is the string that we are locating a char within.
 * @c: This is a character
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	while (x < c)
	{
		if (s[x] == c)
			return (s + x);
		x++;
	}
	return (0);
}
