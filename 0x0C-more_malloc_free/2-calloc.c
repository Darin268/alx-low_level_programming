#include "main.h"
#include <stdlib.h>

/**
 * _calloc - to allocates memory for an array
 * @nmemb: the number of elements
 * @size: size of element type
 * Return: to the allocated memory and NULL if nmemb or size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (size == 0 || nmemb == 0)
		return (NULL);

	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);

	for (b = 0; b < (size * nmemb); b++)
		a[b] = 0;

	return (a);
}
