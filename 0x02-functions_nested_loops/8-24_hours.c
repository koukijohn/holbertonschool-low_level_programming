#include "holberton.h"

/**
 * jack _bauer - prints every minute of day of Jack Bauer
 *
 */

void jack_bauer(void)
{
	int x;
	int y;

        for (x = 0; x <= 23; x++)
	{
		for (y = 0; y <= 59; y++)
		{
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
			_putchar(':');
			_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
			_putchar('\n');
		}
	}

}
