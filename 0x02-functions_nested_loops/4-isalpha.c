#include <ctype.h>

/**
 * _isalpha - check for alpha character
 * @c: character to check
 *
 * Return: 1 if alpha; 0 otherwise
 */

int _isalpha(int c)
{
	/* c = 65 is 'A' and c = 90 is 'Z' */
	/* c = 97 is 'a' and c = 122 is 'z' */
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
