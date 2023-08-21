#include "main.h"

/**
 * _strlen - Entry point
 * @s: is the pointer to check
 * 
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	for (s[i]; s[i] != '0'; i++)
	{
		return (i);
	}
}
