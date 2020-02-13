#include "holberton.h"

/**
 * print_square - prints square using number of #
 *
 * @size: input dimentsions of the square
 *
 */

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
/* '#' is 35 */
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
