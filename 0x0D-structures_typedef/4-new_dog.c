#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

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

/**
 * *new_dog - This is a function that creates a new dog.
 * @name: This is the name.
 * @age: This is the age.
 * @owner: This is the owner.
 *
 * Return: dog_t
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	char *dname;
	char *downer;
	dog_t *doggo;

	dname = _strdup(name); /*duplicating string to dname */
	downer = _strdup(owner); /*duplicating string to downer */
	if (dname == NULL)
	{
		return (NULL); /*Don't need to free becuse we haven't used any*/
	}
	if (downer == NULL)
	{
		free(dname); /*Must free dname because we just used dname */
		return (NULL);
	}
	doggo = malloc(sizeof(dog_t)); /*We must malloc to create program*/
	if (doggo == NULL)
	{
		free(dname); /*Must free because used above */
		free(downer); /*Must free because used above */
		return (NULL);
	}
	doggo->name = dname;
	doggo->age = age;
	doggo->owner = downer;
	return (doggo);
}
