#include "holberton.h"

/**
 * main - Entry point
 * function will print the alphabet in lowercase
 * Return: Always 0 (Success)
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
