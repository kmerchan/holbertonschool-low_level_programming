#include <stdio.h>

/**
 * main - sum even-valued terms of Fibonacci sequence under 4,000,000
 * Return: 0 if succesful
 */

int main(void)
{
	int a, b, x, sum;

	a = 1;
	b = 2;
	x = a + b;
	sum = 2;
	while (x <= 4000000)
	{
		if ((x % 2) == 0)
		{
			sum = sum + x;
		}
		a = b;
		b = x;
	}
	printf("%d\n", sum);
	return (0);
}
