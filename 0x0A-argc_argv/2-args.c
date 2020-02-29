#include "holberton.h"
#include <stdio.h>

/**
* main - function to print name of function followed by newline
* @argc: argument to determine how many arguments to program are provided
*
* @argv: argument array with program name and arguments
*
* Return: (0)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= (argc - 1); i++)
		printf("%s\n", argv[i]);
	return (0);
}
