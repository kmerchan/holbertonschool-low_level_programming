#ifndef LISTS_H
#define LISTS_H

/* Included Libraries */
#include <stdio.h>

/* Structs */
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 *
 * Description: singly linked list node structure
 * for Holberton project
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Function Prototypes */
/* declaration of function to print all elements of a list_t list */
size_t print_list(const list_t *h);

/* declaration of function to count all elements of a list_t list */
size_t list_len(const list_t *h);

#endif
