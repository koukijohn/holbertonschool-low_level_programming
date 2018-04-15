#include "lists.h"

/**
 * print_dlistint - Prints all the elements of dlistint_t list.
 * @h: This is our doubly linked list we are printing all the elements of.
 *
 * Return: The number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t numberofnodes;
	dlistint_t *doublylinkedlist;

	numberofnodes = 0;
	doublylinkedlist = NULL;

	printf("%d\n", h->n);
	numberofnodes++;
	doublylinkedlist = h->next;

	while (doublylinkedlist != NULL)
	{
		printf("%d\n", doublylinkedlist->n);
		numberofnodes++;
		doublylinkedlist = doublylinkedlist->next;
	}
	return (numberofnodes);
}
