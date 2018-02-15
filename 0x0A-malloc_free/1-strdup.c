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

	if (str == NULL) /* This is given to us to check str memory */
		return (NULL);
	for (x = 0; str[x] != '\0'; x++) /* To find str length */
		;
	GermGerm = malloc(sizeof(char) * x + 1); /* add 1 to include null byte */
	if (GermGerm == NULL) /* to check if germgerm has enought mem */
		return (NULL);
	for (y = 0; y <= x; y++) /* This makes the strings equal to each other*/
	{
		GermGerm[y] = str[y];
	}
	return (GermGerm); /* Must return a char(our str) our copy */
}
