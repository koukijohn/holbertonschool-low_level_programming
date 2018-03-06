#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_nodeint_end - Adds node at end of listint_t list.
 * @head: This is whe list we are adding a node to.
 * @n: This is our variable that holds our data.
 *
 * Return: Address of new element, or NULL if failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *traverser; /*This lets us move to the last node*/

	new_node = malloc(sizeof(listint_t));/*This is to make our new node*/
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	traverser = *head; /*This will go to the last node*/
	while (traverser->next != NULL)
		traverser = traverser->next;
	traverser->next = new_node;

	return (*head);
}
