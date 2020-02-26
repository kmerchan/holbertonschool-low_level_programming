#include "holberton.h"

/**
 * _strlen_recursion - returns string length recursively
 * @s: input string to print
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	else
	{
		return (0);
	}
}
