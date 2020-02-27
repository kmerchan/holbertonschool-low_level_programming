#include "holberton.h"

/**
 * _sqrt_recursion - returns natural square root of function
 * @n: input number to determine square root of
 *
 * Return: natural square root of n or -1 if n does not have natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (square_root_recursion(n, (n / 2) + 1));
	}
}

/**
 * square_root_recursion - determines square root of number, if one exists
 * @n: input number to determine square root of
 *
 * @guess: input guess as to what square root might be
 *
 * Return: natural square root of n, or -1 if n does not have natural sqrt
 */

int square_root_recursion(int n, int guess)
{
	int newguess;

	newguess = ((n / guess) + 1 + guess) / 2;

	if ((n / guess) == guess && n % guess == 0)
	{
		return (guess);
	}
	else if (newguess == guess)
	{
		return (-1);
	}
	else
	{
		return (square_root_recursion(n, newguess));
	}
}
