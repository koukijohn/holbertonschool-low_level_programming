#include "holberton.h"

/**
 * *string_toupper - Changes all lowercase letters of a string to uppercase.
 * @s: This is the string that we are converting to uppercase.
 *
 * Return: s
 */

char *string_toupper(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] >= 'a' && s[x] <= 'z')
			s[x] -= 32;
		x++;
	}
	return (s);
}
