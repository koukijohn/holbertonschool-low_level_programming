#include "holberton.h"

/**
 * print_square - This function prints a square, followed by a new line.
 * @size: This is the size of the square.
 *
 * Return: void
 */

void print_square(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
