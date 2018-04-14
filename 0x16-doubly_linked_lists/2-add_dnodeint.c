#include "lists.h"

/**
 * add_dnodeint - Adds new node at beginning of doubly linked list.
 * @head: This is our doubly linked list.
 * @n: Data from structure.
 *
 * Return: Address of new element, or NULL if failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newelement;

	newelement = NULL;

	newelement = malloc(sizeof(dlistint_t));
	if (newelement == NULL)
		return (NULL);
	newelement->n = n;
	newelement->next = NULL;
	newelement->prev = NULL;

	if (*head == NULL)
	{
		*head = newelement;
		return (newelement);
	}
	(*head)->prev = newelement;
	newelement->next = *head;
	*head = newelement;

	return (newelement);
}
