#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number
 * @x: value of last digit
 *
 * Return: x
 */

int print_last_digit(int x)
{
	x = x % 10;

	if (x < 0)
		x = (x * -1);
	_putchar (x + '0');
	return (x);
}
