#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * _printchar - This is to print a char
 * @germo: This is the name of our va_list.
 */
void _printchar(va_list germo)
{
	printf("%c", va_arg(germo, int));
}

/**
 * _printinteger - This is to print a integer.
 * @germo: This is the name of our va_list.
 */
void _printinteger(va_list germo)
{
	printf("%d", va_arg(germo, int));
}
/**
 * _printfloat - This is to print a float.
 * @germo: This is the name of our va_list.
 */
void _printfloat(va_list germo)
{
	printf("%f", va_arg(germo, double));
}
/**
 * _printstring - This is to print a string.
 * @germo: This is the name of our va_list.
 */

void _printstring(va_list germo)
{
	char *pointer;

	pointer = va_arg(germo, char*);
	if (pointer == NULL)
		printf("(nil)");
	else
		printf("%s", pointer);
}

/**
 * print_all - This is to print all/anything.
 * @format: This is the list of args.
 */

void print_all(const char * const format, ...)
{
	va_list germo;

	int x, y; /*use as index for opx(made in header)*/
	char *spacing;
	opx ops[] = {
		{"c", _printchar},
		{"i", _printinteger},
		{"f", _printfloat},
		{"s", _printstring},
		{NULL, NULL}
	};

	x = 0;
	y = 0;

	va_start(germo, format);
	spacing = "";
	while (format != NULL && format[y] != '\0')
	{
		while (ops[x].args != NULL)
		{
			if (format[y] == *ops[x].args)
			{
				printf("%s", spacing);
				ops[x].f(germo);
				spacing = ", ";
			}
			x++;
		}
		x = 0;/*We set y = 0 so that it goes back to 0n after loop*/
		y++;
	}
	printf("\n");
	va_end(germo);
}
