#include "lists.h"

/**
 * find_listint_loop - finds the start of a loop of a listint_t list
 * @head: input head of singly linked list to print
 *
 * Return: pointer to location of loop start or NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	if (head == NULL)
		return (NULL);
	while (head->next != NULL)
	{
		if (head->next >= head)
		{
			head = head->next;
			return (head);
		}
		head = head->next;
	}
	return (NULL);
}
