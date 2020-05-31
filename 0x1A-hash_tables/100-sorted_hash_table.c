#include "hash_tables.h"
#include <string.h>

/**
 * shash_table_create - function to create hash table
 * @size: size of the array
 *
 * Return: pointer to newly created hash table, or NULL if failed
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = NULL;
	unsigned long int i = 0;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - function to add an element to the hash table
 * @ht: hash table to add key/value pair to
 * @key: string used as key to find desired value in hash table
 * @value: string stored as value with associated key
 *
 * Return: 1 if successful, 0 if failed
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	char *value_duplicate, *key_duplicate;
	int index = 0;
	shash_node_t *new_node = NULL, *mover;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);
	value_duplicate = duplicate_string(value);
	key_duplicate = duplicate_string(key);
	if (value_duplicate == NULL || key_duplicate == NULL)
	{
		sfree_dups(&new_node, &key_duplicate, &value_duplicate);
		return (0);
	}
	new_node = sinitialize_new_node(key_duplicate, value_duplicate);
	if (new_node == NULL)
	{
		sfree_dups(&new_node, &key_duplicate, &value_duplicate);
		return (0);
	}
	index = (hash_djb2((unsigned char *)key) % ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		sorted_shash_table(ht);
		return (1);
	}
	mover = ht->array[index];
	for (; mover != NULL; mover = mover->next)
	{
		if (strcmp(mover->key, key) == 0)
		{
			sfree_dups(&new_node, &key_duplicate, &(mover->value));
			mover->value = value_duplicate;
			return (1);
		}
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	sorted_shash_table(ht);
	return (1);
}

/**
 * duplicate_string - function to duplicate key/value string
 * @string: input key/value to duplicate
 * Return: duplicated string or NULL if failed
 */

char *duplicate_string(const char *string)
{
	int i = 0;
	char *duplicate;

	duplicate = malloc(sizeof(char) * (strlen(string) + 1));
	if (duplicate == NULL)
		return (NULL);
	for (i = 0; string[i]; i++)
	{
		duplicate[i] = string[i];
	}
	duplicate[i] = '\0';
	return (duplicate);
}

/**
 * sinitialize_new_node - function to create and initialize new_node
 * @key_duplicate: key string to set new_node->key to
 * @value_duplicate: value string to set new_node->value to
 * Return: initialized new_node, or NULL if failed
 */

shash_node_t *sinitialize_new_node(char *key_duplicate, char *value_duplicate)
{
	shash_node_t *new_node;

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = key_duplicate;
	new_node->value = value_duplicate;
	new_node->next = NULL;
	new_node->sprev = NULL;
	new_node->snext = NULL;
	return (new_node);
}

/**
 * sfree_dups - function to free duplicated string or extra node
 * @new_node: pointer to new node created
 * freed if node with key value already exists
 * @key: pointer to duplicated key string
 * freed if node with key exists or before exit failure
 * @value: pointer to duplicated value string
 * freed before exit failure or if value being replaced
 */

void sfree_dups(shash_node_t **new_node, char **key, char **value)
{
	free(*new_node);
	free(*key);
	free(*value);
}

/**
 * shash_table_get - function to return value associated with given key
 * @ht: hash table to get key/value pair from
 * @key: string used as key to find desired value in hash table
 *
 * Return: value associated with key, or NULL if key not found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t *mover;

	if (key == NULL || ht == NULL)
		return (NULL);
	index = (hash_djb2((unsigned char *)key) % ht->size);
	mover = ht->array[index];
	if (mover == NULL)
		return (NULL);
	while (mover->next != NULL)
	{
		if (strcmp(mover->key, key) == 0)
			break;
		mover = mover->next;
	}
	if (strcmp(mover->key, key) == 0)
		return (mover->value);
	return (NULL);
}

/**
 * shash_table_print - function to print all key/value pairs in order
 * @ht: hash table to print
 *
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *mover;
	unsigned long int check = 0;

	if (ht == NULL)
		return;
	printf("{");
	mover = ht->shead;
	while (mover != NULL)
	{
		if (check)
			printf(", ");
		printf("\'%s\': ", mover->key);
		printf("\'%s\'", mover->value);
		check = 1;
		mover = mover->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - function to print all key/value pairs in reverse
 * @ht: hash table to print
 *
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *mover;
	unsigned long int check = 0;

	if (ht == NULL)
		return;
	printf("{");
	mover = ht->stail;
	while (mover != NULL)
	{
		if (check)
			printf(", ");
		printf("\'%s\': ", mover->key);
		printf("\'%s\'", mover->value);
		check = 1;
		mover = mover->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - function to free and delete hash table
 * @ht: hash table to delete
 *
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *mover, *tmp;
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

/**
 * sorted_shash_table - function to sort hash table by ASCII value
 * @ht: hash table to sort
 *
 */

void sorted_shash_table(shash_table_t *ht)
{
	shash_node_t *mover, *holder, *holder2;
	unsigned long int i = 0;
	int check = 0;

	reset_shead(ht);
	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		mover = ht->array[i];
		if (mover != NULL && check == 0)
			check = set_first_sort(ht, &mover);
		if (mover != NULL && check == 1)
			check = set_second_sort(ht, &mover);
		for (; mover != NULL && check > 1; mover = mover->next)
		{
			holder = move_holder(ht->shead, mover);
			if (holder == ht->shead)
			{
				mover->snext = ht->shead;
				ht->shead->sprev = mover;
				ht->shead = mover;
			}
			else
			{
				holder2 = ht->shead;
				while (holder2->snext != holder)
					holder2 = holder2->snext;
				mover->sprev = holder2;
				mover->snext = holder2->snext;
				if (holder2->snext != NULL)
					holder2->snext->sprev = mover;
				holder2->snext = mover;
			}
		}
	}
	set_tail(ht);
}

/**
 * set_first_sort - function to set first node of sorted list
 * @ht: hash table to sort
 * @mover: pointer to first node
 * Return: 1 to increase check count
 */

int set_first_sort(shash_table_t *ht, shash_node_t **mover)
{
	ht->shead = (*mover);
	*mover = (*mover)->next;
	return (1);
}

/**
 * set_second_sort - function to set second node of sorted list
 * @ht: hash table to sort
 * @mover: pointer to second node
 * Return: 2 to increase check count
 */

int set_second_sort(shash_table_t *ht, shash_node_t **mover)
{
	shash_node_t *holder;

	holder = ht->shead;
	if (strcmp((*mover)->key, holder->key) > 0)
	{
		(*mover)->sprev = holder;
		holder->snext = (*mover);
		ht->shead = holder;
	}
	else
	{
		holder->sprev = (*mover);
		(*mover)->snext = holder;
		ht->shead = (*mover);
	}
	*mover = (*mover)->next;
	return (2);
}

/**
 * move_holder - moves holder until its key has greater ascii value than mover
 * @holder: node currently in sorted list to move to position to add mover
 * @mover: mover value to compare against
 * Return: holder position after being moved
*/

shash_node_t *move_holder(shash_node_t *holder, shash_node_t *mover)
{
	for (; holder != NULL; holder = holder->snext)
	{
		if (strcmp(holder->key, mover->key) > 0)
			break;
	}
	return (holder);
}

/**
 * set_tail - function to set the tail of a sorted hash table
 * @ht: hash table to sort
 */

void set_tail(shash_table_t *ht)
{
	shash_node_t *mover;

	mover = ht->shead;
	if (mover == NULL)
		return;
	while (mover->snext != NULL)
		mover = mover->snext;
	ht->stail = mover;
}

/**
 * reset_shead - function to reset linked list to sorted hash table
 * @ht: hash table to sort again
 */

void reset_shead(shash_table_t *ht)
{
	shash_node_t *mover, *tmp;

	mover = ht->shead;
	if (mover == NULL)
		return;
	while (mover != NULL)
	{
		tmp = mover;
		mover = mover->snext;
		tmp->snext = NULL;
		tmp->sprev = NULL;
	}
	ht->shead = NULL;
}
