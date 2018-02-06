#include "holberton.h"

/**
 * *_strchr - This function locates a character in a string
 * @s: This is the string that we are locating a char within.
 * @c: This is a character
 *
 * Return: Null or (s + x)
 */

char *_strchr(char *s, char c)
{
	int x;
	int y;

	for (y = 0; s[y] != '\0'; y++)
	{
		for (x = 0; x < s[x]; x++)
		{
			if (s[x] == c)
				return (s + x);
		}
	}
	return (0);
}
