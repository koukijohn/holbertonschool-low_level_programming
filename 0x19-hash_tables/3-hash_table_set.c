#include "hash_tables.h"

/**
 * hash_table_set - This adds an element to the hash table.
 * @ht: This is the hash table you want to add or update the key/value to
 * @key: This is the key. Key can not be empty string.
 * @value: Value associated with the key. Value can be empty string.
 *
 * Return: 1 if succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int location;
	hash_node_t *new_element;
	hash_node_t *traverser;

        location = key_index((const unsigned char *)key, ht->size);
	new_element = malloc(sizeof(hash_node_t *));
	if (new_element == NULL)
	{
		return (0);
	}
	if (ht == NULL)
		return (0);
	if (key == NULL)
		return (0);
	new_element->key = strdup(key);
	new_element->value = strdup(value);
	new_element->next = ht->array[location];

	traverser = ht->array[location];

	while (traverser != NULL)
	{
		if (strcmp(key, traverser->key) == 0)
		{
			free(traverser->value);
			traverser->value = strdup(value);
			return (1);
		}
		traverser = traverser->next;
	}

	ht->array[location] = new_element;

	return (1);
}
