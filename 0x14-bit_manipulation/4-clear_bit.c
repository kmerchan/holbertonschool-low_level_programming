#include "holberton.h"

/**
 * clear_bit - function to set value of bit at specific index to be 0
 * @n: input unsigned int made up of one or more bits
 *
 * @index: input index value, starting at 0
 *
 * Return: 1 if successful or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8)
		return (-1);
	*n = (*n & ~(1 << index));
	return (1);
}
