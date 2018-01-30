#include "holberton.h"

/**
 * _puts - Prints a string, w/new line, to stdout.
 * @str: This is a string.
 *
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
