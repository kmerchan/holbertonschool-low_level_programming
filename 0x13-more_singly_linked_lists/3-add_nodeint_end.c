#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of a listint_t list
 * @head: pointer to input head of singly linked list to print
 *
 * @n: input integer to add to listint_t list
 *
 * Return: pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *mover = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (mover == NULL)
	{
		(*head) = new;
		return (*head);
	}
	while (mover->next != NULL)
		mover = mover->next;
	mover->next = new;
	return (new);
}
