#include "holberton.h"

/**
 * is_prime_number - determines if number is a prime number
 * @n: input number to determine if prime
 *
 * Return: 1 if prime and 0 if not prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (counter(n, 1));
	}
}

/**
 * counter - increases by one to keep track of how many recursive iterations
 * @n: input integer to determine if prime
 *
 * @count: input count of function
 *
 * Return: 1 if prime, 0 if not prime
 */

int counter(int n, int count)
{
	if (count == n - 1)
	{
		return (1);
	}
	else if (n % (n - count) == 0)
	{
		return (0);
	}
	else
	{
		return (counter(n, count + 1));
	}
}
