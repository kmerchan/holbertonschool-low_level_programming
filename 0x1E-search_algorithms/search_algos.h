#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* INCLUDED LIBRARIES */
#include <stdio.h>

/* STRUCTS AND DEFINITIONS */
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/* FUNCTION PROTOTYPES */
/* function to use linear search to find first index of matching value (0) */
int linear_search(int *array, size_t size, int value);
/* function to use binary search to find index of matching value (1) */
int binary_search(int *array, size_t size, int value);
/* function to use jump search to find index of matching value (100) */
int jump_search(int *array, size_t size, int value);
/* function to use interpolation search to find index of matching value (102) */
int interpolation_search(int *array, size_t size, int value);
/* function to use binary search to find first index of matching value (104) */
int advanced_binary(int *array, size_t size, int value);
/* function to use jump search to find node with match value in list (105) */
listint_t *jump_list(listint_t *list, size_t size, int value);
listint_t *between(int k, int i, listint_t *holder, int value);

#endif
