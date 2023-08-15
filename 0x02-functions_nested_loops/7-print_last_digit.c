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
	int y, x;

		if (n < 0)
		{
			y = n * -1;
			x = (y % 10);
			_putchar(x);
			return (x);
		}
		else
		{
			x = (n % 10);
			_putchar(x);
			return (x);
		}
}
