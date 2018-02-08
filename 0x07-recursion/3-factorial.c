#include "holberton.h"

/**
 * factorial - This function returns the factorial of a given number.
 * @n: This is our n that will change.
 *
 * Return: n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
