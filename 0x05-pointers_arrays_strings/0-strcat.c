#include "holberton.h"

/**
 * *_strcat - Main function is to concatenate two strings.
 * @dest: This is the first string to cat onto.
 * @src: This is the second string to cat from.
 *
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x + y] = src[y];
		y++;
	}
	return (dest);
}
