#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - This is a function that prints numbers w/ new line.
 * @n: This is the number of integers passed to the funtion.
 * @separator: Our string to be printed between numbers.
 *
 * Return: Void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list goku;
	unsigned int x;

	va_start(goku, n);

	if (separator == NULL)
		return;

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(goku, int));
		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(goku);
}
