#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - prints from n to 98
 * @n: starting integer
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			n++;
			if (n != 99)
			{
				printf(", ");
			}
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			n--;
			if (n != 97)
			{
				printf(", ");
			}
		}
	}
	else
	{
		printf("%d", n);
	}
	printf("\n");
}
