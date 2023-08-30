#include "main.h"

/**
 * _puts_recursion - to print a string
 * @s: is the string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_put_recursion(s++);
	}
}
