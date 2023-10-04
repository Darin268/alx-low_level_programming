#include "main.h"
#include <stddef.h>

/**
 * flip_bits - to return the number of bits you would need to flip
 * @n: number to check
 * @m: second number to check
 *
 * Return: to the flipped bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int flipped = n ^ m;


	while (flipped != 0)
	{
		if ((flipped & 1) == 1)
			count++;
		flipped = flipped >> 1;

	}
	return (count);
}