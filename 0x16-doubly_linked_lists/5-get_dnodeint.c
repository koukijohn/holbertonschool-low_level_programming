#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: This is the head of our linked list.
 * @index: This is the position of our linked list.
 *
 * Return: nth node, or NULL if node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nthnode;
	unsigned int counter; /*To count to our index*/

	counter = 0;
	nthnode = head;
	while (nthnode != NULL)
	{
		if (counter == index)
			return (nthnode);
		nthnode = nthnode->next;
		counter++;
	}

	return (NULL);
}
