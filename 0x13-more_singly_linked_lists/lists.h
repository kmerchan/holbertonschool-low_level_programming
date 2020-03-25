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

/* declaration of function to add new node to beginning of listint_t list (2)*/
listint_t *add_nodeint(listint_t **head, const int n);

/* declaration of function to add new node to end of listint_t list (3)*/
listint_t *add_nodeint_end(listint_t **head, const int n);

/* declaration of function to free memory of listint_t list (4)*/
void free_listint(listint_t *head);

/* declaration of function to free memory of list & set head to NULL(5)*/
void free_listint2(listint_t **head);

/* declaration of function to delete the head node of a listint_t list (6)*/
int pop_listint(listint_t **head);

/* declaration of function to return the nth node of a listint_t list (7)*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/*declaration of function to sum data from all nodes of listint_t list (8)*/
int sum_listint(listint_t *head);

/*declaration of function to add new node at given index in list (9)*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/*declaration of function to delete node at given index in list (10)*/
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/*declaration of function to reverse listint_t list (11)*/
listint_t *reverse_listint(listint_t **head);

/*declaration of function to print listint_t list, check for same node (12)*/
size_t print_listint_safe(const listint_t *head);

/*declaration of function to free listint_t list, check for same node (13)*/
size_t free_listint_safe(listint_t **h);

#endif
