#include "lists.h"

/**
 * sum_listint - returns sum of all nodes of listint_t list
 * @head: input head of singly linked list
 *
 * Return: sum of all nodes in listint_t list
 */

int sum_listint(listint_t *head)
{
	listint_t *mover = head;
	int sum = 0;

	while (mover != NULL)
	{
		sum += mover->n;
		mover = mover->next;
	}
	return (sum);
}
