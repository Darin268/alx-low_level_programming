#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to the head of node
 * @index: index of node
 *
 * Return: the data in nth node, or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (index == count)
			return (head);

		head = head->next;
		count++;
	}

	return (NULL);
}
