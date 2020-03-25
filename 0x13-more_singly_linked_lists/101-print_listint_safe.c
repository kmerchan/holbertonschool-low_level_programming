#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a listint_t list
 * @head: input head of singly linked list to print
 *
 * Return: Number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	size_t i = 0, j = 0;
	int *array[9999];

	while (head != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if ((int *)head == array[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (n);
			}
		}
		n++;
		printf("[%p] %d\n", (void *)head, head->n);
		array[j] = (int *)head;
		j++;
		head = head->next;
	}
	return (n);
}
