#include <string.h>

/**
 * _strlen - function to return length of string
 * @s: input string
 *
 * @*s: input pointer character string s
 *
 * Return: integer length of string
 */

int _strlen(char *s)
{
	int size, i;

	size = 0;
	for (i = 0; s[i] != 0; i++)
	{
		size++;
	}
	return (size);
}
