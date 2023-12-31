#include "lists.h"

/**
 * delete_dnodeint_at_index - to delete node at given index
 * @head: is the beginning of the list
 * @index: index to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *old_node;
	unsigned int x;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		old_node = *head;
		*head = old_node->next;

		if (*head != NULL)
			(*head)->prev = NULL;
		free(old_node);
		return (1);
	}

	old_node = *head;

	for (x = 0; old_node != NULL && x < index; x++)
		old_node = old_node->next;
	if (old_node == NULL)
		return (-1);
	old_node->prev->next = old_node->next;

	if (old_node->next != NULL)
		old_node->next->prev = old_node->prev;
	free(old_node);
	return (1);
}
