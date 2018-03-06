#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - This is a function that prints all the elements of a list.
 * @h: This is the linked list we go through.
 *
 * Return: nodes (the number of nodes).
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;/*we go through temp instead of h*/
	size_t nodes;/*number of nodes*/

	while (temp != NULL)
	{
		if (temp->n != '\0')
		{
			printf("%d\n", temp->n);
		}
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
