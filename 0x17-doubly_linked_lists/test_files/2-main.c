#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_dlistint_backwards(const dlistint_t *h);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;
	printf("Add new element if passed NULL:\n");
	head = add_dnodeint(NULL, -20);
	print_dlistint(head);
	free_dlistint(head);
	head = NULL;
	printf("Add new node to empty list:\n");
	add_dnodeint(&head, 0);
	print_dlistint(head);
	printf("Add new nodes to existing list:\n");
	add_dnodeint(&head, 1);
	add_dnodeint(&head, 2);
	add_dnodeint(&head, 3);
	add_dnodeint(&head, 4);
	add_dnodeint(&head, 98);
	add_dnodeint(&head, 402);
	add_dnodeint(&head, 1024);
	print_dlistint(head);
	print_dlistint_backwards(head);
	free_dlistint(head);
	return (EXIT_SUCCESS);
}
