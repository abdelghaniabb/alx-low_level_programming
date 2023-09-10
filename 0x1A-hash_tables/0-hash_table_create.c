#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned int i;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new->array[i] = NULL;
	}

	new->size = size;

	return (new);
}
