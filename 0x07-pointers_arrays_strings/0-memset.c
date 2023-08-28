#include "main.h"

/**
 * _memset - Entry point
 * @s: is the memory to be filled
 * @b: is the character to copy
 * @n: is the number of times to copy b
 *
 * Return: to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
