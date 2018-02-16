#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

char *_strcpy(char *dest, char *src);

/**
 *
 *
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y;
	char *s3;

	for (x = 0; s1[x] != '\0'; x++) /* length of s1 */
		;
	for (y = 0; s2[y] != '\0'; y++) /* length of s2 */
		;
	if (n >= y)
	{
		s3 = malloc(x + y + 1);
		_strncat(s3, s2, n);
		return (s3);
	}
	else
	{
		s3 = malloc(x + n + 1);
		_strncat(s3, s2, n);
		return (s3);
	}
}

/**
 * *_strncat - This is a function that concatentates two strings.
 * @n: The limit of the array.
 * @dest: This is the first string to append to.
 * @src: This is the second string to append from.
 *
 * Return: dest
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
