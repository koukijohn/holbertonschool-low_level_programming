#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - This function will print all of the elements of a list_t list.
 * @h: This is our list variable.
 *
 * Return: the number of nodes.
 */

size_t list_len(const list_t *h)
{
	const list_t *str = h; /*h == head/declare head first with linked list*/
	size_t numbofnodes = 0;/*return #ofnodes*/

	while (str != NULL)
	{
		numbofnodes++;
		str = str->next;
	}
	return (numbofnodes);
}
