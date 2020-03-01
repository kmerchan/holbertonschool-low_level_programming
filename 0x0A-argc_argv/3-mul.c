#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - function to multiply two arguments to program
* @argc: argument to determine how many arguments to program are provided
*
* @argv: argument array with program name and arguments
*
* Return: (0)
*/

int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", (x * y));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
