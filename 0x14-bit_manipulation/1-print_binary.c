#include "holberton.h"

/**
 * print_binary - function to print binary representation of unsigned int
 * @n: input unsigned int to print binary conversion of
 *
 */

void print_binary(unsigned long int n)
{
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (power2(count + 1) <= n)
		count++;
	for (; count >= 0; count--)
	{
		if (power2(count) > n)
			_putchar('0');
		else
		{
			_putchar('1');
			n -= power2(count);
		}
	}
}

/**
 * power2 - determines power of two to compare to unsigned int
 * @count: input count of power value currently on
 *
 * Return: integer value of power, 2^count
 */

unsigned long int power2(int count)
{
	unsigned long int m = 1;
	int i = 0;

	for (i = 0; i < count; i++)
		m *= 2;
	return (m);
}
