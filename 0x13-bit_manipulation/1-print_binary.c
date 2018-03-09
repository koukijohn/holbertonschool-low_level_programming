#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * print_binary - Prints binary number from decimal.
 * @n: This is num converted to binary.
 *
 * Return: Void.
 */

void print_binary(unsigned long int n)
{
	char binary;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}

	binary = (n & 1) + '0';/*convert to binarys, then convert to char*/
	print_binary(n >> 1);/*loops through recursion, shifts right*/
	_putchar(binary);
}
