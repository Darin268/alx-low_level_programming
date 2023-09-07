#include "main.h"
#include <stdlib.h>

/**
 * array_range - to creat an array of int
 * @min: the smallest int
 * @max: the largest int
 * Return: to newly created array and NULL if faliure
 */

int *array_range(int min, int max)
{
	int *a;
	int b;
	int c = 0;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min + 1));

			if (a == NULL)
			return (NULL);

			for (b = min; b <= max; b++)
			{
			a[c] = b;
			c++;
			}

			return (a);
}
