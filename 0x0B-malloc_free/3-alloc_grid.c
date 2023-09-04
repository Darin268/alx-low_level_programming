#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - to returns a pointer to a 2 dimensional array of int
 * @width: int for width
 * @height: int for hight
 *
 * Return: to array or NULL if error
 */

int **alloc_grid(int width, int height)
{
	int **c;
	int a, b, w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	c = malloc(sizeof(int *) * height);

	if (c == NULL)
	{
		free(c);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		c[a] = malloc(sizeof(int) * width);

		if (c[a] == NULL)
		{
			for (b = a; b >= 0; b--)
			{
				free(c[b]);
			}

			free(c);
			return (NULL);
		}
	}
for (h = 0; h < height; h++)
{
	for (w = 0; w < width; w++)
	{
		c[h][w] = 0;
	}
}
return (c);
}
