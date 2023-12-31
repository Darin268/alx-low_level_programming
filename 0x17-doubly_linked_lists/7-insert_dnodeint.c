#include "lists.h"

/**
 * insert_dnodeint_at_index - to insert a new node at a given position
 * @h: head of the list
 * @idx: index to add
 * @n: data to add
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *old_node;
	unsigned int x;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	old_node = *h;

	for (x = 0; old_node != NULL && x < idx; x++)
		old_node = old_node->next;

	if (old_node == NULL && x == idx)
		return (add_dnodeint_end(h, n));

	else if (old_node != NULL)
	{
		new_node = malloc(sizeof(dlistint_t));

		if (new_node == NULL)
			return (NULL);

	new_node->n = n;
	old_node->prev->next = new_node;
	new_node->prev = old_node->prev;
	old_node->prev = new_node;
	new_node->next = old_node;

	return (new_node);
	}
	return (NULL);
}
