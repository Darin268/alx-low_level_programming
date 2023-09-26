#include "lists.h"

/**
 * print_listint - to print all elements of a list
 * @h: is the head of the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
