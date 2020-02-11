#include "holberton.h"

/**
 * main - Entry point
 * function will print sign of character
 * Return: Always 0 (Success)
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
