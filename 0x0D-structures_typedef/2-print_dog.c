#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Function that prints a struct dog
 * @d: This is the variable we are using
 *
 * Return: Void.
 */

void print_dog(struct dog *d)
{
	if (d == NULL) /*edge case that is given */
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
