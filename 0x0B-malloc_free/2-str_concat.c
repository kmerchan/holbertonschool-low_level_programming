#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - pointer to new memory space with copy of 2 concatenated strings
 * @s1: input string 1 to copy
 *
 * @s2: input string 2 to copy after string 1
 *
 * Return: pointer to newly allocated memory with concatenated copy of strings
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	int i, j;

	if (s1 != NULL && s2 != NULL)
	{
		i = _strlen(s1);
		i += _strlen(s2);
	}
	else if (s1 == NULL)
	{
		s1 = "";
		i = _strlen(s2);
	}
	else if (s2 == NULL)
	{
		s2 = "";
		i = _strlen(s1);
	}
	else
	{
		s1 = "";
		s2 = "";
		i = 0;
	}
	array = (char *) malloc(sizeof(char) * (i + 1));
	if (array == NULL)
		return (0);
	i = 0;
	for (i = 0; s1[i]; i++)
		array[i] = s1[i];
	for (j = 0; s2[j]; i++, j++)
		array[i] = s2[j];
	array[i] = '\0';
	return (array);
}

/**
 * _strlen - find string length
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		continue;
	return (i);
}
