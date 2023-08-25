#include "main.h"

/**
 * rot13 - Entry point
 * @c: is the string to check
 *
 * Return: to c
 */

char *rot13(char *c)
{
	int i, j;

	char a[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == a[j])
			{
				c[i] = b[j];
			}
		}
	}
	return (c);
}
