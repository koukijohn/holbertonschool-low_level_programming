#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - This is a function that returns the sum of all its param
 * @n: This is our counter variable
 *
 * Return: sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list germtheworm;/*We are naming and initializing our list.*/
	unsigned int x, sum;/* This is to loop through our list*/
/*x is every argument the function has*/
	va_start(germtheworm, n);/*n is our count*/
/*our count is the number of argument in our list*/
	sum = 0;

	if (n == 0)
		return (0);
	for (x = 0; x < n; x++)
		sum += va_arg(germtheworm, int);/*Gets the next arg value*/

	va_end(germtheworm);/*This is to end/"free"/"clear" our list*/
	return (sum);
}
