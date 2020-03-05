#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - pointer to new memory space with concatenated strings
 * @s1: input string 1 to copy
 *
 * @s2: input string 2 to copy after string 1
 *
 * @n: input number of bytes to concatenate from s2
 *
 * Return: pointer to newly allocated memory with concatenated copy of strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = _strlen(s1);
	if (n >= _strlen(s2))
		i += _strlen(s2);
	else
		i += n;

	array = (char *) malloc(sizeof(char) * (i + 1));
	if (array == NULL)
		return (0);
	i = 0;
	for (i = 0; s1[i]; i++)
		array[i] = s1[i];
	for (j = 0; j < n && s2[j]; i++, j++)
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

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	for (i = 0; s[i]; i++)
		continue;
	return (i);
}
