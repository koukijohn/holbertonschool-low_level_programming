#include "holberton.h"

/**
 * _strspn - This is a function that gets the length of a prefix substring.
 * @s: This is our string
 * @accept: This is our string we want to accept.
 *
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;
	int counter = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				counter++;
				break;
			}
		}
		if (accept[y] == 0)
			break;
	}
	return (counter);
}
