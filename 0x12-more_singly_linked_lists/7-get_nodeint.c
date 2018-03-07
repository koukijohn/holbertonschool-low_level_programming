#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *
 *
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);
	while (counter < index)
	{
		head = head->next;
		counter++;
	}
	return (head);
}
