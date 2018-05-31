#include "sort.h"

/**
 * inserter - This moves through the linked list.
 * @location: This is the location that we are enter inserting.
 * @node: This is the node we are inserting.
 *
 * Return: Void.
 */

void inserter(listint_t *location, listint_t *node)
{
/* This removes the node */
	if (node->next == NULL)
	{
		node->prev->next = NULL;
	}
	if (node->prev == NULL)
	{
		node->next->prev = NULL;
	}
	if (node->next != NULL && node->prev != NULL)
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
	}
/* This will insert the node */
	if (location->prev == NULL)
	{
		node->prev = NULL;
		location->prev = node;
		node->next = location;
		location = node;
		return;
	}
	location->prev->next = node;
	node->prev = location->prev;
	node->next = location;
	location->prev = node;
}

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list: This is the doubly linked list we are sorting.
 *
 * Return: Void.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *traverser_foward, *traverser_backward, *holder;
	int foward_data = 0, counter = 0;

/* checking value of list */
	if (list == NULL)
		return;
	if (*list == NULL)
		return;

/* This is to check the count of the list if the count is less than 2 */
	traverser_foward = *list;
	while (traverser_foward != NULL)
	{
		counter++;
		traverser_foward = traverser_foward->next;
	}
	if (counter < 2)
		return;
/* resets traverser_foward back to head of list*/
	traverser_foward = *list;

	while (traverser_foward != NULL)
	{
		foward_data = traverser_foward->n;
		traverser_backward = traverser_foward;
		holder = traverser_foward;
		/*Inner while loop to loop backwards and check value lower*/
		while (traverser_backward != NULL)
		{
			if (foward_data < traverser_backward->n)
			{
				if (traverser_backward->prev == NULL)
				{
					inserter(traverser_backward, holder);
					*list = holder;
				}
				else
				{
					inserter(traverser_backward, holder);
				}
/* This will print the list everytime */
				print_list(*list);
			}
			/*This will traverse to the end of the linked list*/
			traverser_backward = traverser_backward->prev;
		}
/*This will traverse to the end of the linked list */
		traverser_foward = traverser_foward->next;
	}
}
