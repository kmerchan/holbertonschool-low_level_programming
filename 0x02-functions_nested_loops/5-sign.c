#include "holberton.h"

/**
 * print_sign - print sign of character
 * @n: integer to check sign of
 *
 * Return: 1 if positive, -1 if negative, 0 if 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		/* 43 is '+' */
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		/* 45 is '-' */
		_putchar(45);
		return (-1);
	}
	else
	{
		/* 48 is '0' */
		_putchar(48);
		return (0);
	}

}
