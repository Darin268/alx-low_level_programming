#include "main.h"
/**
 * _isalpha - Entry point
 *
 * @c: the character to check
 *
 * Return: 1 if c is letter otherwise return 0
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
