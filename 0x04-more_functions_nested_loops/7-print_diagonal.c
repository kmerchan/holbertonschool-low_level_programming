#include "holberton.h"

/**
 * print_diagonal - prints diagonal line using number of \\
 *
 * @n: number of \\ to print, how long the line should be
 *
 */

void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
/* ' ' is 32 and '\' is 92 */
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
