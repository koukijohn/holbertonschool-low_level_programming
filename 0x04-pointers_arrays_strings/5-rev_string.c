#include "holberton.h"

/**
 * rev_string - Reverses a string
 * @s: This is the string that will be reversed.
 *
 * Return: Void
 */

void rev_string(char *s)
{
	int length = 0, c, temp;

	while (s[length + 1] != 0)
		length++;
	for (c = 0; c <= length / 2; c++)
	{
		temp = s[c], s[c] = s[length - c];
		s[length - c] = temp;
	}
}
