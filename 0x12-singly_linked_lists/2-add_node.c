#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - to return length of string
 * @s: is the string
 *
 * Return: string length
 */

int _strlen(const char *s)
{
	int count = 0;

	while (*s)
	{
		s++;
		count++;
	}

	return (count);
}

/**
 * add_node - to adds a new node at the
 * beginning of a list_t list
 * @head: is the first of the node
 * @str: is the string
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	if (head != NULL && str != NULL)
	{
		new_head = malloc(sizeof(list_t));
		if (new_head == NULL)
			return (NULL);

new_head->str = strdup(str);
new_head->len = _strlen(str);
new_head->next = *head;

*head = new_head;

return (new_head);
	}

	return (0);
}
