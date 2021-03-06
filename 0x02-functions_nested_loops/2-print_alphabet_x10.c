#include "holberton.h"

/**
 * print_alphabet_x10 - print the alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	int n;
	int t;

	/* loop through 10 times */
	for (t = 0; t <= 9; t++)
	{
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
}
