#include "main.h"

/**
 * swap_int - Entry point
 * @a: first character to check
 * @b: second character to check
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
