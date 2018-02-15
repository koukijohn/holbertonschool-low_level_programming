#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - This concatenates two strings.
 * @s1: Our first string
 * @s2: Our second string
 *
 * Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
	int x;
	int y;
	int sum;
	char *s3;

	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;
	sum = x + y + 1;
	s3 = malloc(sizeof(char) * sum);
	if (s3 == NULL)
		return ("");
	for (x = 0; s1[x] != '\0'; x++)
	{
		s3[x] = s1[x];
	}
	for (y = 0; s2[y] != '\0'; y++)
	{
		s3[x + y] = s2[y];
	}
	s3[x + y] = '\0';
	if (s3[x+y] != '\0')
		return (NULL);
	return (s3);
}
