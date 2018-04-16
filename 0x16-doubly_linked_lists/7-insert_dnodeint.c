#include "lists.h"

/**
 * insert_dnodeint_at_index - Inderts new node at given position.
 * @h: This is our doubly linked list.
 * @idx: index of the list where the new node should be added.
 * @n: This is our data.
 *
 * Return: Address of new node, or NULL if failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter;
	dlistint_t *traverser;
	dlistint_t *newelement;

	counter = 0;
	traverser = NULL;
	newelement = NULL;

	if (*h == NULL)
		return (add_dnodeint(h, n));
	if (idx == 0)
                return (add_dnodeint(h, n));
	newelement = malloc(sizeof(dlistint_t));
	if (newelement == NULL)
		return (NULL);
	newelement->next = NULL;
	newelement->prev = NULL;
	newelement->n = n;

	traverser = *h;
	while (traverser != NULL)
	{
		if (counter + 1 == idx)
		{
			if (traverser->next != NULL)
			{
				newelement->next = traverser->next;
				newelement->next->prev = newelement;
				newelement->prev = traverser;
				traverser->next = newelement;
			}
			else
			{
				traverser->next = newelement;
				newelement->prev = traverser;
			}
			return (newelement);
		}
		counter++;
		traverser = traverser->next;
	}
	return (NULL);
}
