#include "lists.h"

/**
 * insert_nodeint_at_index - adds new node at given index
 * @head: pointer to input head of singly linked list
 *
 * @idx: index to add new node at, starting at 0
 *
 * @n: input data to add for new node
 *
 * Return: pointer to new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *mover;
	unsigned int i;

	if (new == NULL || head == NULL)
		return (NULL);
	mover = (*head);
	new->n = n;
	new->next = mover;
	if (idx == 0)
	{
		(*head) = new;
		return (new);
	}
	for (i = 0; i < idx; i++)
	{
		if (mover == NULL)
			return (NULL);
		if (i != (idx - 1))
			mover = mover->next;
	}
	new->next = mover->next;
	mover->next = new;
	return (new);
}
