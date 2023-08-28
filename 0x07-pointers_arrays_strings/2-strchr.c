#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 * @s: is the string
 * @c: is the character to find
 *
 * Return: to s or to NULL
 */

char *_strchr(char *s, char c)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
	}

	for (y = 0; y <= x; y++)
	{
		if (c == s[b])
		{
			s = s + y;
			return (s);
		}
	}

	return (NULL);
}
