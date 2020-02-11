#include <ctype.h>

/**
 * main - Entry point
 * function will check for alpha character
 * Return: Always 0 (Success)
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
