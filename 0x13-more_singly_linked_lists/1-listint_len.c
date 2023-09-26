#include "lists.h"

/**
 * listint_len - to returns the number of elements in a linked list
 * @h: is the head
 *
 * Return: the number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
