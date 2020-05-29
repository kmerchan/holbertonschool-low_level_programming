#include "hash_tables.h"

/**
 * hash_table_delete - function to free and delete hash table
 * @ht: hash table to delete
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *mover, *tmp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		mover = ht->array[i];
		while (mover != NULL)
		{
			tmp = mover;
			mover = mover->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
