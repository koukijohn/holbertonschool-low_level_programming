#include "holberton.h"

/**
 * _isupper - function checks for uppercase.
 * @c: This is character to be checked.
 *
 * Return: 1 if c is uppercase, 0 if otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
