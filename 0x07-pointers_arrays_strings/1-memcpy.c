#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: is the distance
 * @src: is the source
 * @n: number of bytes to copy
 *
 * Return: to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
