#include <stdio.h>

/**
 * main - determines sum of all multiples of 3 or 5 up to 1024
 * Return: 0 if success
 */

int main(void)
{
	int x, n;

	n = 0;
	for (x = 0; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
		{
			n = x + n;
		}
	}
	printf("%ld\n", (long)n);
	return (0);
}
