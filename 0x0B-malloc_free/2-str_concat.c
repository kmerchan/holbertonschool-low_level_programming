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

	if (s1 != '\0' && s2 != '\0')
	{
		for (i = 0; s1[i]; i++)
			continue;
		for (j = 0; s2[j]; j++, i++)
			continue;
	}
	else if (s1 == '\0')
	{
		s1 = malloc(1);
		s1[0] = '\0';
		for (i = 0; s2[i]; i++)
			continue;
	}
	else if (s2 == '\0')
	{
		s2 = malloc(1);
		s2[0] = '\0';
		for (i = 0; s1[i]; i++)
			continue;
	}
	array = (char *) malloc((sizeof(char) * i) + 1);

	if (array == '\0')
		return (0);
	array[i + 1] = '\0';
	i = 0;
	for (i = 0; s1[i]; i++)
	{
		array[i] = s1[i];
	}
	for (j = 0; s2[j]; i++, j++)
	{
		array[i] = s2[j];
	}
	return (array);
}
