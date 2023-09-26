#include "lists.h"

/**
 * free_listint2 - to free the list and set head to NULL
 * @head: pointer to head of list
 */

void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head)
	{
		while (*head)
		{
			list = *head;
			*head = list->next;
			free(list);
		}
	}
}
