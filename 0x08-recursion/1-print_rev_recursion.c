#include "holberton.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: input string to print
 *
 */

void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(s[-1]);
	}
}
