#include <stdlib.h>
#include "holberton.h"

/**
 * main - prints the name of the file it was compiled from
 *
 *
 * Return: 0 if successful
 */

int main(void)
{
	int i;
	char s[] = __BASE_FILE__;

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}
