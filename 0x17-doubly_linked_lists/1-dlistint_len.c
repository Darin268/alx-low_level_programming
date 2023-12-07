#include "lists.h"

/**
 * dlistint_len - to find the length of the list
 * @h: is the head of the list
 * Return: the number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
		h = h->next;

	return (x);
}
