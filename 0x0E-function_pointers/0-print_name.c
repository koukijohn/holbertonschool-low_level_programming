#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - This is a function that prints a name.
 * @name: This is the name of the person.
 * @f: This is what we are putting name into.
 *
 * Return: Void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	if (name == NULL)
		return;
	f(name);
}
