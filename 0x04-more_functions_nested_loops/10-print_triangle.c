#include "holberton.h"

/**
 * print_triangle - prints left-justified right triangle using number of #
 *
 * @size: input dimentsions of the base and height of triangle
 *
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= (size - x); y++)
			{
				_putchar(32);
			}
			for (z = 1; z <= x; z++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
