#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *get_nodeint_at_index - Returns nth node of linked list.
 * @head: This is our linked list.
 * @index: This is index of node.
 *
 * Return: listint_t (nth node).
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (counter < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		counter++;
	}
	return (head);
}
