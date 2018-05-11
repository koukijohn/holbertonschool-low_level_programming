#include "hash_tables.h"


/**
 * hash_table_create - This creates a hash table.
 * @size: size of the array.
 *
 * Returns: newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **array;
	hash_table_t *new_hash_table;
	unsigned long int count;

	array = malloc(size * sizeof(hash_node_t));
	if (array == NULL)
	{
		free(array);
		return(NULL);
	}

	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
	{
		free(new_hash_table);
		return NULL;
	}

	count = 0;
	while (count < size)
	{
		array[count] = NULL;
		count++;
	}

	new_hash_table->size = size;
	new_hash_table->array = array;

	return (new_hash_table);
}
