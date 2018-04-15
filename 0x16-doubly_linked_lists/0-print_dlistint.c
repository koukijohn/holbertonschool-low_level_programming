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
	int element;

	element = h->n;
	numberofnodes = 0;
	doublylinkedlist = NULL;

	doublylinkedlist = h->next;
	printf("%d\n", element);
	numberofnodes++;

	while (doublylinkedlist != NULL)
	{
		printf("%d\n", doublylinkedlist->n);
		numberofnodes++;
		doublylinkedlist = doublylinkedlist->next;
	}
	return (numberofnodes);
}
