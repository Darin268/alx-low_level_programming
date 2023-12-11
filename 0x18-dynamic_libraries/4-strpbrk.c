#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Entry point
 * @s: string to search
 * @accept: string containing the bytes
 *
 * Return: pointer to bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; *s != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (*s == accept[y])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
