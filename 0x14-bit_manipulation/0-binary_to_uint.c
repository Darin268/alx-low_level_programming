#include "main.h"

/**
 * binary_to_uint - to converts a binary number to an unsigned int
 * @b: is the string
 * Return: the converted number, or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int u = 0;

	if (b == NULL)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);

		u = 2 * u + (b[a] - '0');
	}

	return (u);
}
