#include "main.h"

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

	a = malloc(sizeof(char) * size);

	if (size == 0 || a == 0)
	{
		return (NULL);
	}
	while (size--)
	{
		a[size] = c;
		return (a);
	}
}
