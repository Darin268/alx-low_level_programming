#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - to insert new node at a given position
 * @head: pointer to head node
 * @idx: index of the list
 * @n: the element to add
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *list = *head;
	unsigned int count = 0;

	if (list == NULL && idx != 0)
		return (NULL);

	while (list && count < idx - 1)
	{
		list = list->next;
		count++;
	}

	newnode = malloc(sizeof(listint_t));
	if (newnode != NULL)
	{
		newnode->n = n;
		if (idx == 0)
		{
			newnode->next = *head;
			*head = newnode;
			return (newnode);
		}

		if (count + 1 == idx)
		{
			newnode->next = list->next;
			list->next = newnode;
			return (newnode);
		}
	}
	return (NULL);
}
