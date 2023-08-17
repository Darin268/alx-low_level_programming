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
			int i, j;

			for (i = 1; i < n; i++)
			{
				for (j = 0; j < n; j++)
				{
					if (j == i)
				_putchar('\\');
					else if (j < i)
						_putchar(' ');
				}
			_putchar('\n');
			}
		}
}
