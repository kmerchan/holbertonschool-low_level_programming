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
	int check = 0;
	hash_table_t *ht;
	unsigned long int index;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "holberton");
	index = (hash_djb2((unsigned char *)"betty") % 1024);
	printf("key: %s\n", ht->array[index]->key);
	printf("value: %s\n", ht->array[index]->value);
	printf("-----Reset key-----\n");
	hash_table_set(ht, "betty", "reset");
	index = (hash_djb2((unsigned char *)"betty") % 1024);
	printf("key: %s\n", ht->array[index]->key);
	printf("value: %s\n", ht->array[index]->value);
	printf("-----1 collision-----\n");
	hash_table_set(ht, "stylist", "value1");
	hash_table_set(ht, "subgenera", "value2");
	index = (hash_djb2((unsigned char *)"stylist") % 1024);
	printf("key: %s\n", ht->array[index]->key);
	printf("value: %s\n", ht->array[index]->value);
	printf("key: %s\n", ht->array[index]->next->key);
	printf("value: %s\n", ht->array[index]->next->value);
	printf("-----empty string key-----\n");
	check = hash_table_set(ht, "", "");
	printf("check: %d\n", check);
	printf("-----empty string value-----\n");
	check = hash_table_set(ht, "stylist", "");
	printf("key: %s\n", ht->array[index]->key);
	printf("value: %s\n", ht->array[index]->value);
	printf("key: %s\n", ht->array[index]->next->key);
	printf("value: %s\n", ht->array[index]->next->value);
	return (EXIT_SUCCESS);
}
