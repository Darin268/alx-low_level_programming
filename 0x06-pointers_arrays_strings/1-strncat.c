#include "main.h"

/**
 * _strncat - Entry point
 * @dest: first string to check
 * @src: second string to check
 * @n: is the number of bytes
 *
 * return: to pointer string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
