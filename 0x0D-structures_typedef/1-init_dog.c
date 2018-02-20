#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - This is a function that initializes a var of type struct dog.
 * @d: This is the variable we are defining
 * @name: This is the name of the dog
 * @age: This is the age iof the dog.
 * @owner: This is the owner of the dog.
 *
 * Return: Void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d) /* This is initializing the variable d */
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
