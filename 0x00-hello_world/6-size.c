#include<stdio.h>
#define S "Size of a"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("%s char: %d byte(s)\n", S, sizeof(char));
	printf("%sn int: %d byte(s)\n", S, sizeof(int));
	printf("%s long int: %d byte(s)\n", S, sizeof(long int));
	printf("%s long long int: %d byte(s)\n", S, sizeof(long long int));
	printf("%s float: %d byte(s)\n", S, sizeof(float));
	return (0);
}
