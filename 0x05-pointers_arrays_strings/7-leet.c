#include "holberton.h"

/**
 * *leet - This encodes a string into 1337.
 * @s: This is the string to convert into leet.
 *
 * Return: s
 */

char *leet(char *s)
{
	char *normal = "aeotlAEOTL";
	char *numbers = "4307143071";

	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; normal[y] != '\0'; y++)
		{
			if (s[x] == normal[y])
				s[x] = numbers[y];
		}
	}
	return (s);
}
