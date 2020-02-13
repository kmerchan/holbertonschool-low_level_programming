#include "holberton.h"

/**
 * more_numbers - prints numbers 0-14 10 times
 */

void more_numbers(void)
{
	int n;
	int x;

	for (n = 0; n <= 10; n++)
	{
		for (x = 0; x <= 14; x++)
		{
			if ((x / 10) != 0)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar(10);
	}
}
