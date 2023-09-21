#include "lists.h"

/**
 * free_list - to free a list_t list
 * @head: is the head of the list
 */

void free_list(list_t *head)
{
	list_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list->str);
		free(list);
	}

}
