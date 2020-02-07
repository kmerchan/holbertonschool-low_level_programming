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

	for (n = 0; n <= 99; n++)
	{
		for (m = (n + 1); m <= 99; m++)
		{
			putchar ((n / 10) + 48);
			putchar ((n % 10) + 48);
			putchar (32);
			putchar ((m / 10) + 48);
			putchar ((m % 10) + 48);
			if (n == 98 && m == 99)
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
	return (0);
}
