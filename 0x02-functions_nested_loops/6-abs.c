#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @x: the integer to print
 *
 * Return: x.
 *
 */

int _abs(int x)
{
	if (x < 0)
	{
		x = (x * -1);
	}
	else if (x > 0)
	{
		x = (x * 1);
	}
	else
	{
		x = (x * 0);
	}
	return (x);
}
