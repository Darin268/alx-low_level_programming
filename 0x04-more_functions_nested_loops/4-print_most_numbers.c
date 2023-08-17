#include "main.h"

/**
 * print_most_numbers - to print most numbers
 *
 * Return: 0 Always (Success)
 */

void print_most_numbers(void)
{
	int y;

	for (y = 0; y <= 9; y++)
	{
		if (y != 2 && y != 4)
		{

		_putchar(y + '0');
	}
	}
	_putchar('\n')
}
