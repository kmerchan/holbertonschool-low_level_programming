#include "holberton.h"

/**
 * set_bit - function to set value of bit at specific index to be 1
 * @n: input unsigned int made up of one or more bits
 *
 * @index: input index value, starting at 0
 *
 * Return: 1 if successful or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;
	unsigned long int num = *n;

	if (index > sizeof(*n) * 8)
		return (-1);
	for (i = 0; i < index; i++)
	{
		num = (num >> 1);
	}
	num = num | 1;
	num = num << index;
	*n = (num | *n);
	return (1);
}
