#include <ctype.h>

/**
 * _isdigit - check if integer is digit (0-9)
 * @c: character to check
 *
 * Return: 1 if digit; 0 otherwise
 */

int _isdigit(int c)
{
	/* c = 48 is '0' and c = 57 is '9' */
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
