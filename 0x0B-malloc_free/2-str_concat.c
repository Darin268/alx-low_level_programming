#include "main.h"
#include <stdlib.h>

/**
 * str_concat - to concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: s1 followed by s2 and NULL if faliure
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int a, b, d, l;

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

	l = a + b;
	c = malloc((sizeof(char) * l) + 1);

	if (c == NULL)
		return (NULL);


	for (d = 0; d < l; d++)
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
