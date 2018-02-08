#include "holberton.h"

/**
 * _print_rev_recursion - This is a function that prints the string in reverse.
 * @s: This is a string.
 *
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
