#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Returns sum of all data from linked list.
 * @head: This is our linked list.
 *
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
