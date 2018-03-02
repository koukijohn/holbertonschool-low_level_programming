#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node - This function will print all of the elements of a list_t list.
 * @head: This is our function we are adding a string to the beginning.
 * @str: This is the string that needs to be duplicated.
 *
 * Return: adress of new element or NULL if failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

	while (str[len] != '\0')
		len++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;
	return (*head);
}
