#include "lists.h"

/**
 * free_listint_safe - frees all the nodes of a listint_t list
 * @h: pointer to input head of singly linked list
 *
 * Return: Number of nodes
 */

size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	size_t i = 0, j = 0;
	listint_t *tmp;
	listint_t *array[9999];

	if (h == NULL || (*h) == NULL)
		return (0);
	while ((*h) != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if ((*h) == array[i])
			{
				(*h) = NULL;
				return (n);
			}
		}
		n++;
		array[j] = (*h);
		j++;
		tmp = (*h);
		(*h) = (*h)->next;
		free(tmp);
	}
	(*h) = NULL;
	return (n);
}
