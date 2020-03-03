#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function to copy a string to a new location and
 * return a pointer to the new location.
 *
 * @str: an unsigned int fed from main that will be the size of our array
 *
 * Return: NULL or pointer to the filled array.
 */

char *_strdup(char *str)
{
	int i;
	int length = 0;
	char *new;

	if (str == '\0')
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}
       	new = (char *) malloc((length * sizeof(char)) + 1);

	if (new == NULL)
	{
       		return (NULL);
	}
       	else
       	{
       		for (i = 0; i < length; i++)
       			new[i] = str[i];
       		new[i] = '\0';
	}
	return (new);

}
