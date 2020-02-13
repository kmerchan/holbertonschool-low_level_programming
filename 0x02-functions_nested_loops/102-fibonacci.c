#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	int n;
	long int a, b, x;

	a = 1;
	b = 2;

	printf("%ld, ", a);
	printf("%ld, ", b);

	for (n = 3; n <= 50; n++)
	{
		x = a + b;
		if (n != 50)
		{
			printf("%ld, ", x);
			a = b;
			b = x;
		}
		else
		{
			printf("%ld\n", x);
		}
	}
	return (0);
}
