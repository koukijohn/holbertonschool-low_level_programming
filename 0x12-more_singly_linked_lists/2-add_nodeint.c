#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_nodeint - This is a function that adds new node at beginn pof list.
 * @head: This is what we are adding our new node.
 * @n: This is our integer data.
 *
 * Return: Address of new element, or NULL if failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
