#include <ctype.h>

/**
 * main - Entry point
 * function will check for lowercase character
 * Return: Always 0 (Success)
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
