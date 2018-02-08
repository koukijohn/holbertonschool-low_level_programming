#include "holberton.h"

/**
 * square_root - This is our helper function to help us find the sqrt.
 * @n: This is our number we are trying to find the sqrt of.
 * @t: This is our trial operand
 *
 * Return: n
 */

int square_root(int n, int t)
{
	if (n < 1) /* base case for if number was bad */
		return (-1);
	if (t * t == n) /* base case to find the square root */
		return (t);
	if (t * t > n) /* base case for no sqrt */
		return (-1);
	return (square_root(n, t + 1)); /* recursive call */

}

/**
 * _sqrt_recursion - This is our function thast returns the natural sqrt of #.
 * @n: This is the number we are trying to find sqrt of.
 *
 * Return: n
 */

int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}
