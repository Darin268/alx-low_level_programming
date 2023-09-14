#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - to print strings
 * @n: is the number of strings passed to the function
 * @separator: string to be printed between strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

unsigned int a;
va_list list;
char *c;

va_start(list, n);

for (a = 0; a < n; a++)
{
c = va_arg(list, char *);


if (c  == NULL)
printf("%s", "(nil)");

else
printf("%s", c);

if (a != n - 1 && separator != NULL)
printf("%s", separator);
}

va_end(list);

printf("\n");
}
