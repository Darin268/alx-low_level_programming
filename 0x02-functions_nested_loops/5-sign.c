#include "main.h"
/**
 * print_sign _ Entry point to print sign befor n
 *
 * n: is the number to check
 * _putchar is to print sign
 *
 * Return: 1 if n is greater than 0, if n is 0 return 0 otherwise return -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');

		return (0);
	}
	else
	{
		_putchar('-');

		return (-1);
	}
}
