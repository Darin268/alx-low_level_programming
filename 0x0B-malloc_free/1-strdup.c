#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Entry point
 * @str: is the string to duplicate
 *
 * Return: to the duplicate string and NULL if str is NULL
 */

char *_strdup(char *str)
{
	char *c;
	unsigned int a, b;

	if (str == NULL)
	{
		return (NULL);
	}

	for (a = 0; str[a] != '\0'; a++)
	{
	}

	c = malloc(sizeof(char) * a + 1);

	if (c == NULL)
	{
		return (NULL);
	}

	for (b = 0; str[b] != '\0'; b++)
	{
		c[b] = str[b];
	}
	return (c);
}
