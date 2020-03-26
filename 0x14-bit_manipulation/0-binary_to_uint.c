#include "holberton.h"

/**
 * binary_to_uint - function to convert binary into unsigned int
 * @b: input character string representing binary number
 *
 * Return: converted binary as unsigned int or 0 if failed
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i = 0, length = 0, count = 0, multiplier = 0, bit;

	if (b == NULL)
		return (0);
	length = string_length(b);
	for (i = (length - 1); i >= 0; i--, count++)
	{
		bit = b[i] - '0';
		if (bit != 0 && bit != 1)
			return (0);
		multiplier = power(count);
		sum += multiplier * bit;
	}
	return (sum);
}

/**
 * string_length - determines the length of a string
 * @s: input character string to determine length of
 *
 * Return: integer count of length
 */

int string_length(const char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		continue;
	return (i);
}

/**
 * power - determines what power of 2 to multiply bit by to convert number
 * @count: input count of what bit currently on, starting from the lsb
 *
 * Return: integer value of multiplier, 2^count
 */

int power(int count)
{
	int m = 1, i = 0;

	for (i = 0; i < count; i++)
		m *= 2;
	return (m);
}
