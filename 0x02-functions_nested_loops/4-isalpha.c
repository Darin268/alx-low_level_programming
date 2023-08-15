#include "main.h"
/**
 * test_isalpha - Entry point
 *
 * @c: is the character to check
 *
 * Return: 1 if c is lowercase or  uppercase  and 0 if otherwise
 */
int test _isalpha(int c)
{
	if (c >= 'a' && c >='A')
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
