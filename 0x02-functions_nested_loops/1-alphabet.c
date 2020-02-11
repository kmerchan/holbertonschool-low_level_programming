#include "holberton.h"

/**
 * print_alphabet - print the alphabet in lowercase
 */

void print_alphabet(void)
{
	int n;

	/* 97 is ASCII value for 'a' */
	n = 97;
	/* loop through from 97 ('a') t0 122 ('z') */
	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	/* Print new line after alphabet */
	_putchar(10);
}
