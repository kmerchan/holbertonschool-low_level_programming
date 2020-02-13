#include "holberton.h"

/**
 * print_numbers - prints numbers 0-9 followed by newline
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar(10)
}
