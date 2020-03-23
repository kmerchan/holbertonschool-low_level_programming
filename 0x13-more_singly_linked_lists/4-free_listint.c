#include "lists.h"

/**
 * free_listint - free memory allocated to listint_t list
 * @head: input head of singly linked list to free
 *
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
