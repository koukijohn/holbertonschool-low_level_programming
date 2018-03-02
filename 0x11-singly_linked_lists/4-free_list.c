#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *
 *
 *
 *
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
