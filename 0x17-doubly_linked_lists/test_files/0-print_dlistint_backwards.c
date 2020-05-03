#include "lists.h"

/**
 * print_dlistint_backwards - function to print all elements of a dlistint_t list backwards
 * @h: input head of dlistint_t list
 * Return: number of nodes printed
 */
size_t print_dlistint_backwards(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *temp = (dlistint_t *)h;

	if (h == NULL)
		return (0);
	while (temp->next != NULL)
		temp = temp->next;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->prev;
	}
	return (count);
}
