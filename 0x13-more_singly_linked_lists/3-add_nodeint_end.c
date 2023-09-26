#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - to add a new node at the end of a list
 * @head: is the head
 * @n: elements to add
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list;
	listint_t *new;

	new_list = malloc(sizeof(listint_t));

	if (new_list == NULL)
		return (NULL);


	new_list->n = n;
	new_list->next = NULL;

	if (*head == NULL)
	{
		*head = new_list;
		return (new_list);
	}

	else
	{
		new = *head;

		while (new->next)
			new = new->next;

		new->next = new_list;
	}
	return (new_list);
}
