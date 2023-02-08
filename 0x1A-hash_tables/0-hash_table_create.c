#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * hash_table_create - A function that creates a hash table
 * @size: The size of the array
 *
 * Return: If an error occurs - NULL
 *         Otherwise - A pointer to the new hash table
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_created;
	unsigned long int i;

	/* Allocate space for the hash table */
	hash_table_created = malloc(sizeof(hash_table_t));

	if (hash_table_created == NULL)
		return (NULL);

	hash_table_created->size = size;
	hash_table_created->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table_created->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		hash_table_created->array[i] = NULL;
	}

	return (hash_table_created);
}
