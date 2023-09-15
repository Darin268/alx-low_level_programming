#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - to print anything
 * @format: list of types of arguments to print
 */

void print_all(const char * const format, ...)
{
	va_list list;

	f_id format_list[] = {
		{ "c", print_a_char },
		{ "i", print_an_integer },
		{ "f", print_a_float },
		{ "s", print_a_char_ptr }
	};

	unsigned int a = 0;
	unsigned int b = 0;
	char *separator;

	va_start(list, format);

	while (format != NULL && format[a])
	{
		b = 0;
		while (b < 4)
		{
			if (format[a] == *format_list[b].id)
			{
				form_types[b].f(separator, list);
				separator = ", ";
			}
			b++;
		}
		a++;
	}

	va_end(list);
	printf("\n");
}

/**
 * print_a_char - to print a char type
 * @separator: is the separator between char
 * @list: is the list of arguments
 */

void print_a_char(char *separator, va_list list)
{
printf("%s%c", separator, va_arg(list, int));
}

/**
 * print_an_integer - to print an integer type
 * @separator: is the separator between integers
 * @list: is the list of arguments
 */

void print_an_integer(char *separator, va_list list)
{
printf("%s%i", separator, va_arg(list, int));
}

/**
 * print_a_float - to print a float type
 * @separator: is the separator between float
 * @list: is the list of arguments
 */

void print_a_float(char *separator, va_list list)
{
	printf("%s%f", separator, va_arg(list, double));
}

/**
 * print_a_char_ptr - to print a pointer to char type
 * @separator: is the separator between char
 * @list: is the list of arguments
 */

void print_a_char_ptr(char *separator, va_list list)
{
	char *c = va_arg(list, char *);

	if (c == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, c);
}
