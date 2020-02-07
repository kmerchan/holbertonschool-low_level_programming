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

	n = 48;
	while (n <= 57)
	{
		for (m = 48; m <= 57; m++)
		{
			putchar (n);
			putchar (m);
			if (m == n && m == 57)
			{
				putchar('\n');
			}
			else
			{
				putchar (44);
				putchar (32);
			}
		}
		n++;
	}
	return (0);
}
