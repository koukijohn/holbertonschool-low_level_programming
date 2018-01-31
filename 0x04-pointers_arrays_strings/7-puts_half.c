#include "holberton.h"

/**
 * puts_half - Prints half the string w/new line.
 * @str: This is the string.
 *
 * Return: Void.
 */

void puts_half(char *str)
{
	int x;
	int y;
	int z;

	for (x = 0; str[x] != '\0'; x++)
		y++;
	if (y % 2 != 0)
		z = (y + 1) / 2;
	else
		z = y / 2;
	for (x = z; x < y; x++)
		_putchar(str[x]);
	_putchar('\n');
}
