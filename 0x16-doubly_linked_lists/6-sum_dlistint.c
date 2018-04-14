#include "lists.h"

/**
 * sum_dlistint - This function returns sum of data(n) from a dllist.
 * @head: This is our doubly linked list.
 *
 * Return: sum of n(data). If NULL, return (0).
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *dllist;
	int sum;

	sum = 0;
	dllist = head;

	if (head == NULL) /*if head empty, return NULL*/
		return (0);

	while (dllist != NULL)
	{
		sum = sum + dllist->n;
		dllist = dllist->next;
	}

	return (sum);
}
