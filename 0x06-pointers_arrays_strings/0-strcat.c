#include "main.h"

/**
 * *_strcat - Entry point
 * @*dest: is the first string
 * @*src: is the second string
 *
 * Return: to pointer string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = scr[j];
	}

	dest[i] = '\0';

	return(dest);
}
