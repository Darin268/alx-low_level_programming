#include "main.h"

/**
 * print_number - Entry point
 * @n: is the integer to print
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	else
	{
		_putchar(n);
	}
if (n / 10)
{

	print_number(n / 10);
}
	_putchar((n % 10) + '0');
}
