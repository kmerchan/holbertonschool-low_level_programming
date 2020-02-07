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
	int l;

	for (n = 48; n <= 55; n++)
	{
		for (m = 49; m <= 56; m++)
		{
			for (l = 46; l <= 57; l++)
			{
				if (l > m && m > n)
				{
					putchar (n);
					putchar (m);
					putchar (l);
					if (n == 55)
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
	}
	return (0);
}
