#include "holberton.h"

/**
 * primenumber - This is our helper function that we use for our base cases
 * @n: This is our helper function.
 * @t: This is our trial operand.
 *
 * Return: 
 */

int primenumber(int n, int t) /* helper function where we declare 2 vars*/
{
	if (t == 1)
		return (1);
	if (n == 1) /* These are our base cases (where to stop) */
		return (0);
	if (n < 1)
		return (0);
	if (n % t == 0)
		return (0);
	return (primenumber(n, t - 1));
}

/**
 *
 */

int is_prime_number(int n)
{
	return (primenumber(n, n - 1));
}
