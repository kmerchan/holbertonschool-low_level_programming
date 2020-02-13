#include <ctype.h>

/**
 * _isupper - check for uppercase character
 * @c: character to check
 *
 * Return: 1 if uppercase; 0 otherwise
 */

int _isupper(int c)
{
	/* c = 65 is 'A' and c = 90 is 'Z' */
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
