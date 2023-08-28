#include "main.h"

/**
 * _strspn - Entry point
 * @s: is the string
 * @accept: the bytes to count
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int c = 0;

	for (i = 0; s[i] !='\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
			c++;
	}
	return (c);
	}
	return (c);
}
