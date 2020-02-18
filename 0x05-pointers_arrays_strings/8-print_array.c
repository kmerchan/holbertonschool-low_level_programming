#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints nth elements of an array
 * @n: input number of array elements to print
 *
 * @a: integer value of array
 *
 * @*a: input pointer to array
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
