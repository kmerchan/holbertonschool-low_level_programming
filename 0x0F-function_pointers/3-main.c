#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - perform input operation of two ints using input operator
 * @argc: number of input arguments
 *
 * @argv: array of arguments
 *
 * Return: int result of performing operation or error if unable to compute
 */

int main(int argc, char *argv)
{
	int a, b, x;

	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	x = f(a, b);
	if (x == NULL)
	{
		printf("Error\n");
		exit(100);
	}
	return (x);
}
