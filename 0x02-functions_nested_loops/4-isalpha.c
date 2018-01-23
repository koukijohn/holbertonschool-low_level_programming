#include "holberton.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: the character to print
 *
 * Return: 1 if c is a letter, lowercase or uppercase. 0 otherwise.
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
