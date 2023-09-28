#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to convert
 */

void print_binary(unsigned long int n)
{
	int p = 0;
	int b = sizeof(n) * 8 - 1;

	if (n == 0)
		_putchar('0');


	while (b >= 0)
	{
		if (n & 1 << b)
		{
			_putchar('1');
			p++;
		}

		else if (p)
			_putchar('0');

		b--;
	}
}
