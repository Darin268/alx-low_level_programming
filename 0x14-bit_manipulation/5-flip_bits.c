#include "main.h"


/**
 * flip_bits - flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits that was needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	int count;

	x = n ^ m;
	count = 0;

	while (x)
	{
		if (x & 1)
			count++;

		x >>= 1;
	}

	return (count);
}
