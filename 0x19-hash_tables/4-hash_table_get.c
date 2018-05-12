#include "hash_tables.h"

/**
 * hash_table_get - This retrieves a value associated with a key.
 * @ht: This is the hash table you want to look into.
 * @key: This is the key you are looking for.
 *
 * Return: The value associated w/ elementor NULL if key couldn't be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int location;
	hash_node_t *new_node;

	if (ht == NULL)
		return (NULL);

	if (key == NULL)
		return (NULL);

	location = key_index((unsigned char *)key, ht->size);
	new_node = ht->array[location];

	while (new_node != NULL)
	{
		if (strcmp(new_node->key, key) == 0)
		{
			return (new_node->value);
		}
		new_node = new_node->next;
	}
	if (new_node == NULL)
	{
		return (NULL);
	}
	return (NULL);
}
