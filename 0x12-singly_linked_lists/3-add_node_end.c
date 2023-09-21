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
 * add_node_end - to adds a new node at the end of a list_t list
 * @head: the head of the node
 * @str: the string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *new;

	if (str != NULL)
	{
		new_list = malloc(sizeof(list_t));
		if (new_list == NULL)
			return (NULL);

		new_list->str = strdup(str);
		new_list->len = _strlen(str);
		new_list->next = NULL;

		if (*head == NULL)
		{
			*head = new_list;
			return (*head);
		}

		else
		{
			new = *head;
			while (new->next)
				new = new->next;

			new->next = new_list;
			return (new);
		}
	}

	return (NULL);
}
