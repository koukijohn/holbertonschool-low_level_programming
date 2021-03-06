#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - This is a function that prints strings
 * @n: This is the number of strings passed to the function.
 * @separator: This is the string in b/w our strings.
 *
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list apple;

	unsigned int x;
	char *mango;

	va_start(apple, n);

	for (x = 0; x < n; x++)
	{
		mango = va_arg(apple, char *);
		if (separator != NULL && x > 0)
			printf("%s", separator);
		if (mango == NULL)
			printf("(nil)");
		else
			printf("%s", mango);
	}

	printf("\n");
	va_end(apple);
}
