#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98 followed by a new line
 * @n: random integer
 *
 * Return: print
 */

void print_to_98(int n)
{
	while (n > 98)
	{
	printf("%d, ", n);
	n--;
	}
	while (n < 98)
	{
	printf("%d, ", n);
	n++;
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
