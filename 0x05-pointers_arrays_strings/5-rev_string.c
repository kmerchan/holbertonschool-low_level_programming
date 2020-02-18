#include <string.h>

/**
 * rev_string - function to reverse string
 * @s: input string
 *
 * @*s: input pointer character string s
 *
 */

void rev_string(char *s)
{
	int size, i;

	size = 0;
	for (i = 0; s[i] != 0; i++)
	{
		size++;
	}

	for (i = 0; i < size; i++)
	{
		s[i] = s[size - i];
	}
}
