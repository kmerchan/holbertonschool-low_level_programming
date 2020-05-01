#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	printf("insert in middle-----------------\n");
	insert_dnodeint_at_index(&head, 5, 4096);
	print_dlistint(head);
	printf("insert at beginning-----------------\n");
	insert_dnodeint_at_index(&head, 0, -20);
	print_dlistint(head);
	printf("insert at almost end-----------------\n");
	insert_dnodeint_at_index(&head, 9, 2);
	print_dlistint(head);
	printf("insert at end-----------------\n");
	insert_dnodeint_at_index(&head, 11, 2);
	print_dlistint(head);
	printf("attempt to insert past idx-----------------\n");
	insert_dnodeint_at_index(&head, 100, 2);
	print_dlistint(head);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
