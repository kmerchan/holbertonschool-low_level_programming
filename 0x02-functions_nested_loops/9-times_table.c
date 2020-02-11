#include "holberton.h"

/**
 * times_table - prints 9x9 times table
 */

void times_table(void)
{
	int side;
	int top;
	int x;

	for (side = 0; side <= 9; side++)
	{
		_putchar(48);
		for (top = 1; top <= 9; top++)
		{
			x = side * top;
			_putchar(44);
			_putchar(32);
			if ((x / 10) == 0)
			{
				_putchar(32);
				_putchar(x + '0');
			}
			else
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
		}
		_putchar(10);
	}
}
