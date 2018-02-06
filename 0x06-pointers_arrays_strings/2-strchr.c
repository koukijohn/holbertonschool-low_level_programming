#include "holberton.h"

/**
 * *_strchr - This is a function that locates a character in a string.
 * @s: This is our string that we are locating a character within.
 * @c: This is our character.
 *
 * Return: 0 or s+x
 */

char *_strchr(char *s, char c)
{
	int x;
	int y;

	for (y = 0; s[y] != '\0'; y++)
	{
		for (x = 0; x < s[y]; x++)
		{
			if (s[x] == c)
				return (s + x);
		}
	}
	return (0);
}
