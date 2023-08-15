#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @n: is the number to check
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int x;

		if (n < 0)
		{
			x = -(n % 10);
			_putchar(x + '0');
			return (x);
		}
		else
		{
			x = (n % 10);
			_putchar(x + '0');
			return (x);
		}

}
