#include "lists.h"

/**
 * add_dnodeint_end- Adds a new node at the end of a doubly linked list.
 * @head: This points to the head of our doubly linked list.
 * @n: This is our data.
 *
 * Return: Address of new element, or NULL if failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newelement;
	dlistint_t *last = *head; /*Used to traverse to the last node*/

	newelement = malloc(sizeof(dlistint_t));
	if (newelement == NULL)
		return (NULL);
	newelement->n = n; /*putting data in newelement*/
	newelement->next = NULL; /*This new node will be at the end*/

	if (*head == NULL) /*if linked list empty, sset head as newelement*/
	{
		newelement->prev = NULL;
		*head = newelement;
		return (newelement);
	}

	while (last->next != NULL) /* This will traverse to the last node*/
		last = last->next;
	last->next = newelement;
	newelement->prev = last;

	return (newelement);
}
