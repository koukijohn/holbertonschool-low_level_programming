#include "holberton.h"

/**
 * _strlen_recursion - This is a function that returns the length of a string.
 * @s: This is a string.
 *
 * Return: 0.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
