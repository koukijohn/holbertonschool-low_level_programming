#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - Returns pointer to newly allocated space in memory. Contains copy
 * @str: This is the string we are copying the mem space from
 *
 * Return: GermGerm
 */

char *_strdup(char *str)
{
	int x;
	int y;
	char *GermGerm;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
		;
	GermGerm = malloc(sizeof(char) * x + 1);
	if (GermGerm == NULL)
		return (NULL);
	for (y = 0; y <= x; y++)
	{
		GermGerm[y] = str[y];
	}
	return (GermGerm);
}
