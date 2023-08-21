#include "main.h"

/**
 * print_rev - Entry point
 * @s: the pointer to check
 */

void print_rev(char *s)
{
	int i, j, rev;

	for (i = 0; s[i] != '\0'; ++i)
	{
	}
	
	j = i;
for (rev = j - 1; rev >= 0; rev--)
{
	_putchar(s[rev]);
}
_putchar('\n');
}
