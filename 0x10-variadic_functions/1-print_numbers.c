#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - to print numbers
 * @n: is the number of integers passed to the function
 * @separator: string to be printed between integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list list;


va_start(list, n);

for (a = 0; a < n; a++)
{
printf("%d", va_arg(list, int));

if (a != n - 1 && separator != NULL)
printf("%s", separator);
}

va_end(list);

printf("\n");
}
