#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: This is the list we are inserting a node into.
 * @idx: list where new node should be added.
 * @n: This is our data.
 *
 * Return: Address of new node or NULL if failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head; /*This will hold our head list*/
	listint_t *newnode;/*This is the node we insert into the index*/
	unsigned int counter;/*This is to count the index*/

	idx = 0;

	if (*head == NULL)/*In case the head is empty*/
		return (NULL);
/*newnode creation*/
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (temp == NULL && idx == 0)
	{
		newnode->next = *head;/*The newnode becomes the head node*/
		*head = newnode;
		return (NULL);
	}

	while (temp != NULL && counter <= idx)
	{
		if (counter == idx)
		{
			newnode->next = temp->next;
			temp->next = newnode;
		}
		else
			temp = temp->next;
		counter++;
	}
	return (temp);
}
