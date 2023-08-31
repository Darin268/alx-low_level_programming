#include "main.h"

int actual_sqrt_recursion(int i, int n);

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
		return (actual_sqrt_recursion(n, 0));
	}
}

int actual_sqrt_recursion(int i, int n)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (actual_sqrt_recursion(n, i + 1));
	}
}
