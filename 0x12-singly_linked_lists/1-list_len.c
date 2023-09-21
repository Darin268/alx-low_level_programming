#include "lists.h"

/**
 * list_len - to print number of elements in a linked list_t list
 * @h: the list to check
 *
 * Return: to count
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
