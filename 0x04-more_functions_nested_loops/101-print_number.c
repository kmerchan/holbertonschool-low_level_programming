#include "holberton.h"

/**
 * print_number - prints integers
 *
 * @n: interger to be printed
 *
 */

void print_number(int n)
{
	int digits = 1, divider = 1;
	int num = n, j = 0, j2 = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/* counts number of digits by increasing count and dividing by 10 */
	while ((num / 10) != 0)
	{
		digits++;
		num /= 10;
	}
	/* loops through number from last digit to largest digit */
	for (j = (digits - 1); j >= 0; j--)
	{
		divider = 1;
		for (j2 = 0; j2 < j; j2++)
			divider = divider * 10;
		if (n < 0)
		{
			_putchar('-');
			_putchar((0 - (n / divider)) + '0');
			n = n % divider;
			n = 0 - n;
		}
		else
		{
			_putchar((n / divider) + '0');
			n = n % divider;
		}
	}
}
