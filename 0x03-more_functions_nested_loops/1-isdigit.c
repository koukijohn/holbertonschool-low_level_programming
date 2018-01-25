#include "holberton.h"

/**
 * _isdigit - Function that checks for a digit (0 through 9).
 * @c: number to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c <= 9 && c >= 0)
	{
		return (1);
	}
	return (0);
}
