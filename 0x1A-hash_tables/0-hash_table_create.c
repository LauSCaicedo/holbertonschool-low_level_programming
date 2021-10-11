#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 * @size: Is the size of the array.
 * Return: A pointer to the newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newhasht = NULL;

	newhasht = malloc(sizeof(size));

	if (newhasht == NULL)
	{
		return (NULL);
	}

	return (newhasht);
}
