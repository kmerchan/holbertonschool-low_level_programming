#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _free_list - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */
void _free_list(dlistint_t *head)
{
	if (head)
	{
		_free_list(head->next);
		free(head);
	}
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	dlistint_t *head;
	int strings[3] = {
		1,
		2,
		0
	};
	dlistint_t *ptr;
	int i;
	size_t n;

	head = NULL;
	for (i = 0; i < 3; ++i)
	{
		ptr = add_dnodeint(&head, strings[i]);
		if (!ptr)
		{
			printf("Failed\n");
			_free_list(head);
			return (1);
		}
		if (ptr->n == strings[i])
		{
			printf("Data should be stored\n");
		}
	}
	n = print_dlistint(head);
	printf("-> %lu elements\n", n);
	_free_list(head);
	return (0);
}
