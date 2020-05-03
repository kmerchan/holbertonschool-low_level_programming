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
	int i = 0;

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
	printf("delete at index 5:-----------------\n");
	i = delete_dnodeint_at_index(&head, 5);
	if (i == 1)
		print_dlistint(head);
	else
		printf("Failed to delete at given index\n");
	printf("delete at index 100:-----------------\n");
	i = delete_dnodeint_at_index(&head, 100);
	if (i == 1)
		print_dlistint(head);
	else
		printf("Failed to delete at given index\n");
	printf("delete at index 0:-----------------\n");
	i = delete_dnodeint_at_index(&head, 0);
	if (i == 1)
		print_dlistint(head);
	else
		printf("Failed to delete at given index\n");
	printf("delete at index 0:-----------------\n");
	i = delete_dnodeint_at_index(&head, 0);
	if (i == 1)
		print_dlistint(head);
	else
		printf("Failed to delete at given index\n");
	printf("delete at index 0:-----------------\n");
	i = delete_dnodeint_at_index(&head, 0);
	if (i == 1)
		print_dlistint(head);
	else
		printf("Failed to delete at given index\n");
	printf("delete at index 0:-----------------\n");
	i = delete_dnodeint_at_index(&head, 0);
	if (i == 1)
		print_dlistint(head);
	else
		printf("Failed to delete at given index\n");
	printf("delete at index 0:-----------------\n");
	i = delete_dnodeint_at_index(&head, 0);
	if (i == 1)
		print_dlistint(head);
	else
		printf("Failed to delete at given index\n");
	printf("delete at index 0:-----------------\n");
	i = delete_dnodeint_at_index(&head, 0);
	if (i == 1)
		print_dlistint(head);
	else
		printf("Failed to delete at given index\n");
	printf("delete at index 0:-----------------\n");
	i = delete_dnodeint_at_index(&head, 0);
	if (i == 1)
		print_dlistint(head);
	else
		printf("Failed to delete at given index\n");
	printf("delete at index 0:-----------------\n");
	i = delete_dnodeint_at_index(&head, 0);
	if (i == 1)
		print_dlistint(head);
	else
		printf("Failed to delete at given index\n");
	printf("delete at index 0:-----------------\n");
	i = delete_dnodeint_at_index(&head, 0);
	if (i == 1)
		print_dlistint(head);
	else
		printf("Failed to delete at given index\n");
	printf("delete at index 0:-----------------\n");
	i = delete_dnodeint_at_index(&head, 0);
	if (i == 1)
		print_dlistint(head);
	else
		printf("Failed to delete at given index\n");
	return (0);
}
