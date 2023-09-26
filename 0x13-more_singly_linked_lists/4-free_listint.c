#include "lists.h"

/**
 * free_listint - to free a list
 * @head: is the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *list;

	while (head)
	{

		list = head->next;
		head = list;
		free(head);
	}
}
