#ifndef MYHEADERS_H
#define MYHEADERS_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_a_char(char *separator, va_list list);
void print_an_integer(char *separator, va_list list);
void print_a_float(char *separator, va_list list);
void print_a_char_ptr(char *separator, va_list list);

/**
 * struct format_list - struct format_list
 * @id: the format
 * @f: function pointer
 */
typedef struct format_list
{
	char *id;
	void (*f)(char *separator, va_list list);
}
f_id;

#endif
