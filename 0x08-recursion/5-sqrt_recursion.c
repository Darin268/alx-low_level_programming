#include "main.h"

/**
 * _sqrt_recursion - Entry point
 * @n: is the int to check
 * Return: to natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion(n));
	}
}
