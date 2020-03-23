#include "lists.h"

/**
 * listint_len - prints number of elements of a listint_t list
 * @h: input head of singly linked list to print
 *
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
