#include "holberton.h"

/**
 * get_bit - function to return value of bit at specific index
 * @n: input unsigned int made up of one or more bits
 *
 * @index: input index value, starting at 0, to determine bit to check
 *
 * Return: value of bit at given index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index > (sizeof(n) * 8))
		return (-1);
	for (i = 0; i < index; i++)
	{
		n = n >> 1;
	}
	return (n & 1);
}
