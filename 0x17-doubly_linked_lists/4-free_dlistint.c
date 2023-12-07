#include "lists.h"

/**
 * free_dlistint - to free the list
 * @head: is the beginning of the list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *f;

	while (head != NULL)
	{
		f = head->next;
		free(head);
		head = f;
	}
}
