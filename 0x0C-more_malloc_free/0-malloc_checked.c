#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - to allocat memory
 * @b: the number to check
 * Return: to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
