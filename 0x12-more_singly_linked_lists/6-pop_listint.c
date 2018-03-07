#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes head node of linked list.
 * @head: This is the linkled list we are popping.
 *
 * Return: head node's data (n).
 */

int pop_listint(listint_t **head)
{
	int rtrnvalue;/*@n: is for the head nodes data*/
	listint_t *temp = NULL;

	if (*head == NULL)
		return (0);
	temp = (*head)->next;
	rtrnvalue = (*head)->n;
	free(*head);
	*head = temp;
	return (rtrnvalue);
}
