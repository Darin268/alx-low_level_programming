#include "main.h"

/**
 * print_diagonal - to print diagonal
 * @n: number of diagonal to print
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{

		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			int i;

			for (i = 1; i < n; i++)
			{
				_putchar('\\');
			}
			_putchar('\n');
		}
}
