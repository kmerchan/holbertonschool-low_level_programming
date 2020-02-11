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

	if (n < 0)
	{
		n = 0 - n;
	}
	l = n % 10;
	_putchar(l + '0');
	return (l);
}
