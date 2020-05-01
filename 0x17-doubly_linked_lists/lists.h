#ifndef LISTS_H
#define LISTS_H

/* INCLUDED LIBRARIES */
#include <stdio.h>
#include <stdlib.h>

/* DEFINITIONS */
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* FUNCTION PROTOTYPES */
/* Declaration of function to print all elements of a doubly linked list */
size_t print_dlistint(const dlistint_t *h);

#endif
