#include "hash_tables.h"
#include <stdlib.h>

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