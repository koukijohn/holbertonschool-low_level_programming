#include "holberton.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase with new line
 *
 *
 */

void print_alphabet_x10(void)
{
	int a = 'a';
	int x = 0;

	while (x <= 9)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		a = 'a';
		x++;
	}
}
