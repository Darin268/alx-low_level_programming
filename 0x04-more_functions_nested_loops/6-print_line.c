#include "main.h"

/**
 * print_line - to print line
 * @n: the number of times of the character
 * Return: 0 Always (Success)
 */

void print_line(int n)
{
	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;

		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
