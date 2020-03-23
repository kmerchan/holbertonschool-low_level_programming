#include "lists.h"

/**
 * pop_listint - deletes head node and returns head node's data
 * @head: pointer to input head of singly linked list to free
 *
 * Return: deleted head node's data or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp = (*head);

	if ((*head) == NULL)
	{
		free(*head);
		return (0);
	}
	n = (*head)->n;
	(*head) = (*head)->next;
	free(tmp);
	return (n);
}
