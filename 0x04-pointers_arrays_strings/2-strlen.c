#include "holberton.h"

/**
 * _strlen - Returns the length of a string.
 * @s: This is a string
 *
 * Return: The length of a string.
 */

int _strlen(char *s)
{
	int x;
	int y = 0;

	for (x = 0; s[y] != '\0'; ++x)
	{
		y++;
	}
	return (y);
}
