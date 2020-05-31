#ifndef HASH_TABLES
#define HASH_TABLES

/* INCLUDED LIBRARIES */
#include <stdio.h>
#include <stdlib.h>

/* STRUCTS AND DEFINITIONS */

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: string for key
 * The key is unique in the hash table
 * @value: the value corresponding to a key
 * @next: a pointer to the next node of a list
 */

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: the size of the array
 * @array: an array of size given by @size
 * Each cell of this array is a pointer to the first node of a linked list
 * because we want our hash table to use a chaining collision handling
 */

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* FUNCTION PROTOTYPES */

/* declaration of function that creates a hash table (0)*/
hash_table_t *hash_table_create(unsigned long int size);

/* declaration of function to implement the djb2 algorithm (1)*/
unsigned long int hash_djb2(const unsigned char *str);

/* declaration of function to return the index of a given key (2)*/
unsigned long int key_index(const unsigned char *key, unsigned long int size);

/* declaration of function that adds an element to the hash table (3)*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
/* declaration of subfunction to duplicate the key/value string */
char *duplicate_string(const char *string);
/* declaration of subfunction to create and initialize new node of hash table*/
hash_node_t *initialize_new_node(char *key_duplicate, char *value_duplicate);
/* declaration of subfunction to free dups if exit failure or node re-set */
void free_dups(hash_node_t **new_node, char **key, char **value);

/* declaration of function that returns the value associated with a key (4)*/
char *hash_table_get(const hash_table_t *ht, const char *key);

/* declaration of function to print all key/value pairs of a hash table (5)*/
void hash_table_print(const hash_table_t *ht);

/* declaration of function to delete a hash table (6)*/
void hash_table_delete(hash_table_t *ht);

/* ADVANCED TASK STRUCTS AND PROTOTYPES */
/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */

typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */

typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

shash_node_t *sinitialize_new_node(char *key_duplicate, char *value_duplicate);
void sfree_dups(shash_node_t **new_node, char **key, char **value);
void sorted_shash_table(shash_table_t *ht);
int set_first_sort(shash_table_t *ht, shash_node_t **mover);
int set_second_sort(shash_table_t *ht, shash_node_t **mover);
void set_tail(shash_table_t *ht);
void reset_shead(shash_table_t *ht);

#endif
