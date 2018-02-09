#include "holberton.h"

/**
 * _pow_recursion - This is a function that returns the value of x^y.
 * @x: This integer represents our base
 * @y: This integer represents our power to.
 *
 * Return: int.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
