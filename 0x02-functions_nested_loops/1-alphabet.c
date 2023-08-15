#include "main.h"
/**
 * main - print alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		_putchar(c);
		_putchar('\n');
	}

	return (0);
}
