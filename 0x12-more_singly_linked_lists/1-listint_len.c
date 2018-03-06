#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - This is a function that returns the number of elements in list
 * @h: This is the linked list we are counting.
 *
 * Return: counter (# of nodes).
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *happy = h;
	size_t counter = 0;

	while (happy != NULL)
	{
		happy = happy->next;
		counter++;
	}
	return (counter);
}
