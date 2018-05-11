#include "hash_tables.h"

/**
 * key_index - This will give you the index of key.
 * @key: This gives us the index of the key.
 * @size: This is the size of the array of the hash table.
 *
 * Return: index of key/value pair array of hash_table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
