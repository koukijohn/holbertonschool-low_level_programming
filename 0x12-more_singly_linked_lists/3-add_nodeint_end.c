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
	listint_t *newnode;
	listint_t *traverser; /*This lets us move to the last node*/

	newnode = malloc(sizeof(listint_t));/*This is to make our new node*/
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	traverser = *head; /*This will go to the last node*/
	while (traverser->next != NULL)
		traverser = traverser->next;
	traverser->next = newnode;

	return (*head);
}
