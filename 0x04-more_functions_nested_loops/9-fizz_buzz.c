#include <stdio.h>

/**
 * main - print numbers 1-100 where multiples of 3 and/or 5 print words
 *
 * Return: 0 if success
 */

int main(void)
{
	int x;

	printf("%d", 1);
	for (x = 2; x <= 100; x++)
	{
		if ((x % 3) == 0 && (x % 5) == 0)
		{
			printf(" FizzBuzz");
		}
		else if ((x % 3) == 0)
		{
			printf(" Fizz");
		}
		else if ((x % 5) == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", x);
		}
	}
	printf("\n");
	return (0);
}
