#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: is the first string
 * @src: is the second string
 * @n: is the number of bytes
 *
 * Return: to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
