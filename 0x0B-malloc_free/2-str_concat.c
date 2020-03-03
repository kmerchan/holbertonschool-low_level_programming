#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - pointer to new memory space with copy of 2 concatenated strings
 * @s1: input string 1 to copy
 *
 * @s2: input string 2 to copy after string 1
 * Return: pointer to newly allocated memory with concatenated copy of strings
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	int i = 0;
	int j = 0;

	for (i = 0; s1[i]; i++)
	{
		continue;
	}
	for (i = 0; s2[i]; i++)
	{
		continue;
	}

	array = (char *) malloc((sizeof(char) * i) + 1);

	if (array == '\0')
	{
		return (0);
	}
	array[i + 1] = '\0';
	for (i = 0; s1[i]; i++)
	{
		array[i] = s1[i];
	}
	j = i;
	for (i = 0; s2[i]; i++, j++)
	{
		array[j] = s2[i];
	}
	return (array);
}
