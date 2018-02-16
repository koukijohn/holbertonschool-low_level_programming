#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - This function concatentates 2 strings (s2 <= n)
 * @s1: 1st string
 * @s2: 2nd string.
 * @n: This is the limit of s2.
 *
 * Return: s3
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, g, b, sum, sum1;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++) /* length of s1 */
		;
	for (y = 0; s2[y] != '\0'; y++) /* length of s2 */
		;
	if (n >= y)
	{
		sum = x + y + 1;
		s3 = malloc(sizeof(char) * sum);
		if (s3 == NULL)
			return (NULL);
	}
	else
	{
		sum1 = x + n + 1;
		s3 = malloc(sizeof(char) * sum1);
		if (s3 == NULL)
			return (NULL);
	}
	for (g = 0; g < x; g++)
	{
		s3[g] = s1[g];
	}
	for (b = 0; b < y && b < n; b++)
	{
		s3[g + b] = s2[b];
	}
	s3[g + b] = '\0';
	return (s3);
}
