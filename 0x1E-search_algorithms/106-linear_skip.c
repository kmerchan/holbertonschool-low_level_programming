#include "search_algos.h"

/**
 * linear_skip - uses jump search to find value in singly linked skip list
 * @list: pointer to head of singly linked skip list to search through
 * @value: the int value searching for
 *
 * Return: the first node in the list where match to value is or NULL if failed
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *mover = list, *holder = list;
	char *check = "Value checked at index ";
	char *found = "Value found between indexes ";

	if (list == NULL)
		return (NULL);
	while (mover->express)
	{
		mover = mover->express;
		printf("%s[%lu] = [%d]\n", check, mover->index, mover->n);
		if (mover->n >= value)
		{
			printf("%s[%lu] and [%lu]\n", found,
			       holder->index, mover->index);
			return (skip_between((int)mover->index, holder, value));
		}
		holder = mover;
	}
	while (mover->next)
		mover = mover->next;
	printf("%s[%lu] and [%lu]\n", found, holder->index, mover->index);
	return (skip_between((int)mover->index, holder, value));
}

/**
 * skip_between - finds given value between two indices
 * @i: current index
 * @holder: skiplist_t pointer to previous node
 * @value: value searching for
 *
 * Return: first node that matches given value or NULL if failed
 */

skiplist_t *skip_between(int i, skiplist_t *holder, int value)
{
	int k = holder->index;
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
