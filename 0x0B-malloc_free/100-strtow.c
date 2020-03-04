#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - function to split string into words
 * @str: input string of words
 *
 * Return: double pointer to array of words
 */

char **strtow(char *str)
{
	int i = 0;
	int j = 0;
	int index = 0;
	int length = 0;
	char *array;

	if (ac == 0)
		return (0);
	for (i = 0; i < ac; i++)
	{
		if (av[i] == '\0')
			return (0);
		for (j = 0; av[i][j]; j++)
			continue;
		length += j + 1;
	}
	array = (char *) malloc((length * sizeof(char)) + 1);
	if (array == '\0')
	{
		return (0);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, index++)
		{
			array[index] = av[i][j];
		}
		if (i == (ac - 1))
		{
			array[index] = '\n';
			array[index + 1] = '\0';
		}
		else
		{
			array[index] = '\n';
		}
		index++;
	}
	return (array);
}
