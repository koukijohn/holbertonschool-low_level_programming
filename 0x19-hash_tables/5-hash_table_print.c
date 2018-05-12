#include "hash_tables.h"

/**
 * hash_table_print- This prints a hash table.
 * @ht: This is the hash table
 *
 * Return: Void.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int count;
	hash_node_t *hash_table;
	int number_of_nodes;

	count = 0;
	number_of_nodes = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (count < ht->size)
	{
		hash_table = ht->array[count];
		while (hash_table != NULL)
		{
			if (number_of_nodes == 0)
			{
				printf("'%s': '%s'", hash_table->key,
				       hash_table->value);
				number_of_nodes = 1;
			}
			else
			{
				printf(",'%s': '%s'", hash_table->key,
				       hash_table->value);
			}
			hash_table = hash_table->next;
		}
		count++;
	}
	printf("}\n");
}
