#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: pointer to input head of singly linked list
 *
 * @index: index to add new node at, starting at 0
 *
 * Return: 1 if successful, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *index_node;
	listint_t *mover = (*head);
	unsigned int i;


	for (i = 0; i <= index; i++)
	{
		if (mover == NULL)
			return (-1);
		if (i == (index - 1))
			previous = mover;
		if (i == index)
			index_node = mover;
		mover = mover->next;
	}
	if (index != 0)
		previous->next = mover;
	else
		*head = mover;
	free(index_node);
	return (1);
}
