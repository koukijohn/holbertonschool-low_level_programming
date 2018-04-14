#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list.
 * @head: This is the function being freed.
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *idkyet;

	idkyet = NULL;

	if (head == NULL)
		return;
	idkyet = head;

	while (idkyet != NULL)
	{
		idkyet = head->next;
		free(head);
		head = idkyet;
	}
}
