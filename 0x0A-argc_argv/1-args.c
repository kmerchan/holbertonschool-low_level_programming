#include "holberton.h"
#include <stdio.h>

/**
* main - function to print name of function followed by newline
* @argc: argument to determine how many arguments to program are provided
*
* @argv: unused argument
*
* Return: (0)
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
