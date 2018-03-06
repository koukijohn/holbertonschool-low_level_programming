#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - This function frees a listint_t list.
 * @head: This is the function we are freeing.
 *
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *temp; /*We are saving head in a temp variable*/

	while (head != NULL) /*If the head is NULL, then ...*/
	{
		temp = head; /*We put head into the temp var we make*/
		head = head->next; /*We make head point to next node on list*/
		free(temp); /*We can free after use?*/
	}
}
