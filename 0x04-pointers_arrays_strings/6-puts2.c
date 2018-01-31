#include "holberton.h"

/**
 * puts2 - Prints one char out of 2 of a string, w/new line.
 * @str: This is a string
 *
 * Return: Void
 */

void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != 0; x++)
		if (x % 2 == 0)
			_putchar(str[x]);
	_putchar('\n');
}
