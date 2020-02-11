#include <stdlib.h>

/**
 * _abs - detemine the absolute value of a character
 * @n: input integer
 *
 * Return: value of absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
		/* if n is negative, subtract n from 0 to get positive value */
		n = 0 - n;
	}
	return (n);
}
