#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return pointer to new allocated space with copy of string
 * @str: input string to copy
 *
 * Return: pointer to newly allocated memory
 */

char *_strdup(char *str)
{
	char *array;
	int i = 0;

	if (str == '\0')
	{
		return (0);
	}
	for (i = 0; str[i]; i++)
	{
		continue;
	}

	array = (char *) malloc((sizeof(char) * i) + 1);

	if (array == '\0')
	{
		return (0);
	}
	array[i + 1] = '\0';
	for (; i >= 0; i--)
	{
		array[i] = str[i];
	}
	return (array);
}
