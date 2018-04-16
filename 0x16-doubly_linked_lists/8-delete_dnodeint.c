#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index of doubly linked list.
 * @head: This is the head node of the doubly linked list.
 * @index: This is the index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter;
	dlistint_t *traverser;

	counter = 0;
	traverser = NULL;

	if (head == NULL)
		return (-1);
	traverser = *head;

	while (traverser != NULL)
	{
		if (counter == index)
		{
			if (traverser->prev != NULL)
				traverser->prev->next = traverser->next;
			if (traverser->next != NULL)
				traverser->next->prev = traverser->prev;
			if (index == 0)
			{
				if (traverser->next != NULL)
					*head = traverser->next;
				else
					*head = NULL;
			}
			free(traverser); /*deleting part*/
			return (1);
		}
		counter++;
		traverser = traverser->next;
	}
	return (-1); /*error*/
}
