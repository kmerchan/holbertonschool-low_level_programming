#include "lists.h"

/**
 * find_listint_loop - finds the start of a loop of a listint_t list
 * @head: input head of singly linked list to print
 *
 * Return: pointer to location of loop start or NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);
	turtle = head;
	hare = head;
	while (hare->next != NULL && hare->next->next != NULL)
	{
		turtle = turtle->next;
		hare = hare->next->next;
		if (turtle == hare)
		{
			turtle = head;
			while (hare != NULL)
			{
				if (turtle == hare)
					return (turtle);
				turtle = turtle->next;
				hare = hare->next;
			}
		}
	}
	return (NULL);
}
