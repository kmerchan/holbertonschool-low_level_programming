#include <stdlib.h>
#include "holberton.h"

/**
 * print_last_digit - return the value of the last digit of an int
 * @n: input integer, may be multiple digits
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		l = 0 - l;
	}
	_putchar(l + '0');
	return (l);
}
