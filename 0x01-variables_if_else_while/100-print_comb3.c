#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			if (m > n)
			{
				putchar (n);
				putchar (m);
				if (m == 57 && n == 56)
				{
					putchar (10);
				}
				else
				{
					putchar (44);
					putchar (32);
				}
			}
		}
	}
	return (0);
}
