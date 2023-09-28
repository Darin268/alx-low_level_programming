#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: is the number to check
 * @index: the index to check the bit
 *
 * Return: the value of a bit at a given index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	n = n >> index;

	if (n & 1 == 0)
		return (0);
	else
		return (1);
}
