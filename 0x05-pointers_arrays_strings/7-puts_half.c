#include "main.h"

/**
 * puts_half - Entry point
 * @str: is the string to check
 */

void puts_half(char *str)
{
	int x, y, z;

	for (x = 0; str[x] != '\0'; x++)
	{
	}

	if (x % 2 == 0)
	{
		for (y = x / 2; str[y] != '\0'; y++)
		{
			_putchar(str[y]);
		}
	}
		else if (x % 2 != 0)
		{
			for (z = (x - 1) / 2; str[z] != '\0'; z++)
			{
				_putchar(str[z]);
			}
		}
		_putchar('\n');
}
