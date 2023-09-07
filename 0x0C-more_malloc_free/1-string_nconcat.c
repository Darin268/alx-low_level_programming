#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Entry point
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate to s1
 * Return: to resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
unsigned int a = 0;
unsigned int b = 0;
	unsigned int d = 0;
	unsigned int l = 0;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (d = 0; s2[d] != '\0'; d++)
	{
	}
	if (n >= d)
	l = a + d;
	else
		l = a + n;

	c = malloc((sizeof(char) * l) + 1);
	if (c == NULL)
		return (NULL);

	d = 0;
	while (b < l)
	{
		if (b <= a)
			c[b] = s1[b];

		if (b >= a)
		{
			c[b] = s2[d];
			d++;
		}
		b++;
	}
	c[b] = '\0';
	return (c);
}
