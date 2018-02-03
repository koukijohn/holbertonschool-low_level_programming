#include "holberton.h"

/**
 * _strcmp - This is a function that compares two strings.
 * @s1: This is the first string we will compare to.
 * @s2: This is the second string we will compare from.
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' && s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
	}
	return (0);
}
