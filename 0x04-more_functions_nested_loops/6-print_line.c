#include "holberton.h"

/**
 * print_line - prints line using number of _
 * @n: number of _ to print, how long the line should be
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
/* '_' is 95 */
			_putchar(95);
		}
	}
	_putchar(10);
}
