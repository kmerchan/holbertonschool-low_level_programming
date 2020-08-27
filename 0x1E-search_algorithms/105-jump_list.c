#include "search_algos.h"
#include <math.h>

/**
 * jump_list - uses jump search to find value in singly linked list of ints
 * jump size is sqrt of size of list
 * @list: pointer to head of singly linked list to search through
 * @size: the size of the list
 * @value: the int value searching for
 *
 * Return: the first node in the list where match to value is or NULL if failed
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int i = 0, jump = sqrt(size), j = 0, k = 0;
	listint_t *mover = list, *holder = list;
	char *check = "Value checked at index ";
	char *found = "Value found between indexes ";

	if (list == NULL || size == 0)
		return (NULL);
	while (mover->next)
	{
		j = i + jump;
		for (; i < j && mover->next; i++)
			mover = mover->next;
		printf("%s[%d] = [%d]\n", check, i, mover->n);
		if (mover->n >= value)
		{
			printf("%s[%d] and [%d]\n", found, k, i);
			return (between(k, i, holder, value));
		}
		if (mover->next)
		{
			holder = mover;
			k = i;
		}
	}
	printf("%s[%d] and [%d]\n", found, k, i);
	return (between(k, i, holder, value));
}

/**
 * between - finds given value between two indices
 * @k: previous index
 * @i: current index
 * @holder: listint_t pointer to previous node
 * @value: value searching for
 *
 * Return: first node that matches given value or NULL if failed
 */

listint_t *between(int k, int i, listint_t *holder, int value)
{
	char *check = "Value checked at index ";

	for (; k <= i && holder; k++)
	{
		printf("%s[%d] = [%d]\n", check, k, holder->n);
		if (holder->n == value)
			return (holder);
		if (holder->n > value)
			return (NULL);
		holder = holder->next;
	}
	return (NULL);
}
