#include "holberton.h"

/**
 * _pow_recursion - returns value of x raised to power of y
 * @x: input base x
 *
 * @y: input power y
 *
 * Return: value of x^y
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
