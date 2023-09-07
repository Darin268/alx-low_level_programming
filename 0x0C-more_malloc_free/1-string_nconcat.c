#include "main.h"
#include <stdlib>

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
	int a, b;
	int d = 0;
	int l = 0;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}
	if (n >= d)
	l = a + d;
	else
		l = a + n;

	c = malloc((sizeof(char) * l) + 1);
	if (c == NULL)
		return (NULL);

	b = 0;
	while (d < l)
	{
		if (d <= a)
			c[d] = s1[d];

		if (d >= a)
		{
			c[d] = s2[b];
			b++;
		}
		d++;
	}
	c[d] = '\0';
	return (c);
}
