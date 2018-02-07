#include "holberton.h"

/**
 * print_chessboard - This function prints a chessboard
 * @a: This is the variable that points to char board
 *
 * Return: Void.
 */

void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar ('\n');
	}
}
