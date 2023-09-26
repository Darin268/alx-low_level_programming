#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - to add new node at the beginning of a list
 * @head: is head of list
 * @n: element to add
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));

	if (new_head == NULL)
		return (NULL);


	new_head->n = n;
	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
