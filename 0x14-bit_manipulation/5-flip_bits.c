#include "holberton.h"

/**
 * flip_bits - determines how many bits needed to be flipped to convert numbers
 * @n: first input unsigned int
 *
 * @m: second input unsigned int
 *
 * Return: number of bits that would need to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while ((n != 0) || (m != 0))
	{
		if ((n & 1) != (m & 1))
			count++;
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
