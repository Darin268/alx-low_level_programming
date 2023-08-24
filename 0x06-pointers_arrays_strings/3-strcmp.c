#include "main.h"

/**
 * _strcmp - Entry point
 * @s1: is the first string
 * @s2: is the second string
 *
 * Return: Always 0 (success)
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0', i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		return (0);
	}
}
