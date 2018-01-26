#include "holberton.h"

/**
 * print_line - function is to draw straight lines in the terminal
 * @n: This is the line number.
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	int x;

	if (!(n <= 0))
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
