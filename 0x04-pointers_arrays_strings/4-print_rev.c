#include "holberton.h"

/**
 * print_rev - Prints and reverse a sring, w/new line, to stdout.
 * @s: This is the string to be printed in reverse.
 *
 * Return: void
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x] != 0)
		x++;
	for (x--; x >= 0; x--)
		_putchar(s[x]);
	_putchar('\n');
}
