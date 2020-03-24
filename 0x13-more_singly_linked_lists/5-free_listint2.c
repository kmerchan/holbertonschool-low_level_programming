#include "lists.h"

/**
 * free_listint2 - free memory allocated to listint_t list, sets head to NULL
 * @head: pointer to input head of singly linked list to free
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while ((*head) != NULL)
	{
		tmp = (*head);
		(*head) = (*head)->next;
		free(tmp);
	}
	head = NULL;
}
