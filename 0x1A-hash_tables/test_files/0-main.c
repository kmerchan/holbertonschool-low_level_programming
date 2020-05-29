#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(-1024);
	if (ht == NULL)
		printf("hash table creation failed\n");
	else
		printf("%p\n", (void *)ht);
	printf("-----\n");
	ht = hash_table_create(1024);
	if (ht == NULL)
		printf("hash table creation failed\n");
	else
		printf("%p\n", (void *)ht);
	return (EXIT_SUCCESS);
}
