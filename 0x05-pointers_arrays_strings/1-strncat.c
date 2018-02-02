#include "holberton.h"

/**
 * *_strncat - This is a function that concatentates two strings.
 * @n: The limit of the array.
 * @dest: This is the first string to append to.
 * @src: This is the second string to append from.
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int g = 0;
	int b = 0;

	while (dest[g] != '\0')
	{
		g++;
	}
	while (src[b] != '\0' && b < n)
	{
		dest[g + b] = src[b];
		b++;
	}
	return (dest);
}
