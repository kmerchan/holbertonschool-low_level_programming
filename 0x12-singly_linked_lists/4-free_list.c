#include "lists.h"

/**
 * free_list - frees memory used by list_t list
 * @head: input head of singly linked list
 *
 */

void free_list(list_t *head)
{
	list_t *tmp;
	char *tmpstr;

	while (head->next != NULL)
	{
		tmp = head;
		tmpstr = head->str;
		head = head->next;
		free(tmpstr);
		free(tmp);
	}
	free(head->str);
	free(head);
}
