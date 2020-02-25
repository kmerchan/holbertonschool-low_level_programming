#include <stdio.h>

/**
 * print_diagsums - function will print sum of diagonals from square 2D arrays
 * @a: array of values to be summed diagonally
 *
 * @size: size of square array to sum
 *
 */

void print_diagsums(int *a, int size)
{
	int rows = 0;
	int columns = 0;
	int sum = 0;
	int x = 0;

	columns = 0;
	for (rows = 0; rows < size; rows++)
	{
		x = (size * rows) + columns;
		sum += *(a + x);
		columns++;
	}
	printf("%d, ", sum);

	sum = 0;
	columns = size - 1;
	for (rows = 0; rows < size; rows++)
	{
		x = (size * rows) + columns;
		sum += *(a + x);
		columns--;
	}
	printf("%d\n", sum);

}
