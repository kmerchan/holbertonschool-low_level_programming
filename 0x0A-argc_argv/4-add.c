#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - function to add positive numbers together
* @argc: argument to determine how many arguments to program are provided
*
* @argv: argument array with program name and arguments
*
* Return: (0)
*/

int main(int argc, char *argv[])
{
	int i, sum, x;

	sum = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		printf("This is argc: %d\n", argc);
		printf("This is argv[1]: %s\n", argv[1]);
		printf("This is argv[2]: %s\n", argv[2]);
		printf("This is int of argv[1]: %d\n", atoi(argv[1]));
		printf("This is int of argv[2]: %d\n", atoi(argv[2]));
		for (i = 1; i <= argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				x = atoi(argv[i]);
				sum += x;
				printf("This is sum: %d\n", sum);
			}
		}
	}
	printf("%d\n", sum);
	return (0);

}
