#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - Prints all the elements of dlistint_t list.
 * @h: This is our doubly linked list we are printing all the elements of.
 *
 * Return: The number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t numberofnodes = 0;
	dlistint_t *doublylinkedlist = NULL;

	if (h == NULL)
		return (0);

	doublylinkedlist = h->next;
	printf("%d\n", h->n);
	numberofnodes++;

	while (doublylinkedlist != NULL)
	{
		printf("%d\n", doublylinkedlist->n);
		numberofnodes++;
		doublylinkedlist = doublylinkedlist->next;
	}
	return (numberofnodes);
}
