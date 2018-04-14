#include "lists.h"

/**
 * dlistint_len - Returns number of elements in a doubly linked list.
 * @h: This is the doubly linked list being passed.
 *
 * Return: Number of elements in a linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t numberofelements;
	dlistint_t *doublylinkedlist;

	numberofelements = 0;
	doublylinkedlist = NULL;

	if (h == NULL)
		return (0);

	doublylinkedlist = h->next;
	numberofelements++;

	while (doublylinkedlist != NULL)
	{
		doublylinkedlist = doublylinkedlist->next;
		numberofelements++;
	}

	return (numberofelements);
}
