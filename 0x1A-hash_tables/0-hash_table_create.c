#include "hash_tables.h"

/**
 * *hash_table_create - prototype func
 * @size: is size of the array
 * Return: pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int h = 0;
	hash_table_t *NewTable = NULL;

	NewTable = malloc(sizeof(hash_table_t));

	if (NewTable == NULL)
		return (NULL);

	NewTable->array = malloc(sizeof(hash_node_t *) * size);

	if (NewTable->array == NULL)
		return (NULL);

	NewTable->size = size;

	for (h = 0; h < size; h++)
		NewTable->array[h] = NULL;

	return (NewTable);

}
