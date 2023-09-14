#include "variadic_functions.h"

/**
 * sum_them_all - to calculate the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: to the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int sum = 0;
	va_list list;

	va_start(list, n);

	if (n == 0)
		return (0);

	for (a = 0; a < n; a++)
		sum = sum + va_arg(list, int);

	va_end(list);

	return (sum);
}
