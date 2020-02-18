#include "holberton.h"

/**
 * puts_half - prints the second half of a string
 * @str: input string to print
 *
 * @*str: input pointer to string
 *
 */

void puts_half(char *str)
{
	int size, value;

	size = 0;
	for (value = 0; str[value] != 0; value++)
	{
		size++;
	}
	for (value = size / 2; value < size; value++)
	{
		_putchar(str[value]);
	}
	/* 10 is ASCII value for \n */
	_putchar(10);
}
