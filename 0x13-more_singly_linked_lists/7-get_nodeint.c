#include "lists.h"

/**
 * get_nodeint_at_index - returns pointer to nth node of listint_t list
 * @head: input head of singly linked list to free
 *
 * @index: desired index element of listint_t list, starting from 0
 *
 * Return: deleted head node's data or 0 if list is empty
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *mover = head;
	unsigned int i;

	for (i = 0; i <= index; i++)
	{
		if (mover == NULL)
			return (NULL);
		if (i != index)
			mover = mover->next;
	}
	return (mover);
}
