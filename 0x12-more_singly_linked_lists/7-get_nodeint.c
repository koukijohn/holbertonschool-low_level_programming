#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *get_nodeint_at_index - Returns nth node of linked list.
 * @head: This is our linked list.
 * @index: This is our index var to count.
 *
 * Return: nth node of linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *list1, *list2;
	unsigned int x = 0;/*var to count index*/

	list1 = head;
	list2 = head;

	if (head == NULL)
		return (NULL);

	while (x < index)
	{
		if (list1->next != NULL)
			list1 = list1->next;
		else
			return (NULL);
		x++;
	}
	while (list1->next != NULL)
	{
		list1 = list1->next;
		list2 = list2->next;
	}
	return (list2);
}
