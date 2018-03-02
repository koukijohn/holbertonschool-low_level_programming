#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - This function will print all of the elements of a list_t list.
 * @h: This is our list variable.
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	const list_t *tempnode = h; /*declare h/head first w/ linked list*/
	size_t numbofnodes = 0;/*return #ofnodes*/

	if (tempnode == NULL)
	{
		printf("[0] (nil)\n");
	}
	while (tempnode != NULL)
	{
		if (tempnode->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", tempnode->len, tempnode->str);
		tempnode = tempnode->next;
		numbofnodes++;
	}

	return (numbofnodes);
}
