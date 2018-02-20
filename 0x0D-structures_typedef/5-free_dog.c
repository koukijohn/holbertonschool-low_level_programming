#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - This function frees dogs.
 * @d: This is the dog we are freeing
 *
 * Return: Void.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
