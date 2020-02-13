#include "holberton.h"

/**
 * print_times_table - prints nxn times table
 * @n: value of times table dimensions
 */

void print_times_table(int n)
{
	int side, top, x;

	if (n < 15 && n > 0)
	{
		for (side = 0; side <= n; side++)
		{
			_putchar(48);
			for (top = 1; top <= n; top++)
			{
				x = side * top;
				_putchar(44);
				_putchar(32);
				if ((x / 100) == 0 && (x / 10) == 0)
				{
					_putchar(32);
					_putchar(32);
					_putchar((x % 10) + '0');
				}
				else if ((x / 100) == 0)
				{
					_putchar(32);
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				}
				else
				{
					_putchar((x / 100) + '0');
					_putchar(((x / 10) % 10) + '0');
					_putchar((x % 10) + '0');
				}
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
