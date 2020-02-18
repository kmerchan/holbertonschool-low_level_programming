#include "holberton.h"

/**
 * _puts - prints string of characters to stdout
 * @str: input string to print
 *
 * @*str: input pointer to string
 *
 */

void _puts(char *str)
{
	int size, value;

	size = 0;
	for (value = 0; str[value] != 0; value++)
	{
		size++;
	}
	for (value = 0; value < size; value++)
	{
		_putchar(str[value]);
	}
	/* 10 is ASCII value for \n */
	_putchar(10);
}
