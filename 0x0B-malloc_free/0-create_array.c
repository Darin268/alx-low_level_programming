#include "main.h"
#include <stdlib.h>

/**
 * create_array - to creat an array
 * @size: size of the array
 * @c: is the character to check
 *
 * Return: to pointer of the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	a = malloc(sizeof(char) * size);

	if (size == 0 || a == 0)

		return (NULL);

	for (b = 0; b < size; b++)
	{
		a[b] = c;
	}

		return (a);

}
