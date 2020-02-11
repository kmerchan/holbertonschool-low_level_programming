#include <ctype.h>

/**
 * _islower - check for lowercase character
 * @c: character to check
 *
 * Return: 1 if lowercase; 0 otherwise
 */

int _islower(int c)
{
	/* c = 97 is 'a' and c = 122 is 'z' */
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
