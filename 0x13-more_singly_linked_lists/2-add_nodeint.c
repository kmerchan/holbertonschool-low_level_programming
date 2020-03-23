#include "lists.h"

/**
 * add_nodeint - add a node to the beginning of a listint_t list
 * @head: pointer to input head of singly linked list to print
 *
 * @n: input integer to add to listint_t list
 *
 * Return: pointer to new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
