#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @x: the integer to print
 *
 * Return: Always 0.
 *
 */

int _abs(int x)
{
	if (x < 0)
	{
		x = (x * -1);
		_putchar(x);
	}
	else if (x > 0)
	{
		x = (x * 1);
		_putchar(x);
	}
	else
	{
		x = (x * 0);
		_putchar(x);
	}
	return (0);
}
