#include "holberton.h"

/**
 * factorial - returns factorial of given number
 * @n: input integer to return factorial of
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
