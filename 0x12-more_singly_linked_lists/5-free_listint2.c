#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - This is a function that frees a listint_t list.
 * @head: This is the list we are freeing.
 *
 * Return : Void.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
