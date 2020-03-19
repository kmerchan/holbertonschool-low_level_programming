#include "lists.h"

/**
 * add_node - add element as a new node at the beginning of list_t list
 * @head: input head of singly linked list to add node to
 *
 * @str: input character string to add to list_t list
 *
 * Return: Number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new, *previous;

	previous = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = string_length(str);
	new->next = NULL;
	if (previous == NULL)
		return (new);
	while (previous->next != NULL)
		previous = previous->next;
	previous->next = new;
	return (previous);
}

/**
 * string_length - determines the length of a string
 * @s: input character string to determine length of
 *
 * Return: integer count of length
 */

int string_length(const char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		continue;
	return (i);
}
