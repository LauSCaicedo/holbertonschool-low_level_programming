#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 * @size: Is the size of the array.
 * Return: A pointer to the newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newhasht = NULL;
	unsigned long int l;

	if (size < 1)
	{
		return (NULL);
	}

	newhasht = malloc(sizeof(hash_table_t));

	if (newhasht == NULL)
	{
		return (NULL);
	}

	newhasht->array = malloc(sizeof(hash_table_t *) * size);
	if (newhasht->array == NULL)
	{
		return (NULL);
	}

	while (l < size)
	{
		l++;
		newhasht->array[1] = NULL;
	}

	return (newhasht);
}
