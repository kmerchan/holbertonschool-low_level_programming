#include "holberton.h"

/**
 * print_binary - function to print binary representation of unsigned int
 * @n: input unsigned int to print binary conversion of
 *
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
