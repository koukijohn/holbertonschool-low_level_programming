#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node_end - This is a function that adds a new node at end of the list.
 * @head: This is the string we are adding the node at the end of.
 * @str: This is the string that needs to be duplicated.
 *
 * Return: Address of the new element, or NULL if failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *traverser;
	list_t *end_node;
	int len = 0;

	while (str[len] != '\0')
		len++;/*This is to find the len*/

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);
	end_node->str = strdup(str);
	end_node->len = len;
	end_node->next = NULL;

	/*empty list handling*/
	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}
	traverser = *head;/*This goes to the last node*/
	while (traverser->next != NULL)
		traverser = traverser->next;
	traverser->next = end_node;
	return (*head);
}
