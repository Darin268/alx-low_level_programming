#include "lists.h"

/**
 * get_dnodeint_at_index - to get node at given index
 * @head: is the beginning of the list
 * @index: is the index to get the node at
 *
 * Return: to head or NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
		return (NULL);

	for (x = 0; head != NULL && x < index; x++)
	{
		head = head->next;
	}
	return (head);
}
