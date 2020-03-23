#ifndef LISTS_H
#define LISTS_H

/* Included Libraries */
#include <stdio.h>
#include <stdlib.h>

/* Struct Definitions */
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* Function Prototypes */
/* declaration of function to print elements of listint_t list (0)*/
size_t print_listint(const listint_t *h);

/*declaration of function to return number of elements in listint_t list (1)*/
size_t listint_len(const listint_t *h);

#endif
