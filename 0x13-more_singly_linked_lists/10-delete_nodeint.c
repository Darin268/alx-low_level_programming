#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - to deletes the node at index index of a list
 * @head: is the header of the head
 * @index: is the index of the node that should be deleted
 * Return: 1 if success, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current
	listint_t *new;
	unsigned int count;

	count = 0;
	current = *head;
	if (*head == NULL)
		return (-1);

	while (count < index)
	{
		count++;
		new = current;

		if (current->next)
			current = current->next;

		else
			return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
	}
	else if (current->next)
	{
		new->next = current->next;
	}
	else
	{
		new->next = NULL;
	}

	free(current);
	return (1);
}
