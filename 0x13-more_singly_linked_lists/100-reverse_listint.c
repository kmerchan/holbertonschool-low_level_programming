#include "lists.h"

/**
 * reverse_listint - reverses order of listint_t list
 * @head: pointer to input head of singly linked list
 *
 * Return: head pointer to beginning of newly reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *mover;

	if (head == NULL || (*head) == NULL)
		return (NULL);
	current = (*head);
	mover = current->next;
	current->next = NULL;
	while (mover != NULL)
	{
		current = mover;
		mover = mover->next;
		current->next = (*head);
		(*head) = current;
	}
	return (*head);
}
