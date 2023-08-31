#include "main.h"

int actual_sqrt_recursion(int i, int n);

/**
 * _sqrt_recursion - Entry point
 * actual_sqrt_recursion - to find natural 
 * square root of a number
 * @i: iterator
 * @n: is the int to check
 * Return: to natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

		return (actual_sqrt_recursion(n, 0));
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
		return (actual_sqrt_recursion(n, i + 1));
	
}
