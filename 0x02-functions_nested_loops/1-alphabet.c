#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		print_alphabet();
		_putchar(c);
		_putchar('\n');
	}

	return (0);
}
