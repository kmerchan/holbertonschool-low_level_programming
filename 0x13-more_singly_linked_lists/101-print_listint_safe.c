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
	(int *) *array;

	if (array == NULL)
		exit(98);
	while (head != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (head == array[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				exit(98);
			}
		}
		n++;
		printf("[%p] %d\n", (void *)head, head->n);
		array = malloc(sizeof(int *));
		if (array == NULL)
		{
			free(array);
			exit(98);
		}
		array[j] = head;
		j++;
		head = head->next;
	}
	free(array);
	return (n);
}
