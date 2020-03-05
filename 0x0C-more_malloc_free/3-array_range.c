#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - allocates memory for an array of integers from min to max
 * @min: input first int in array of (max - min + 1) elements
 *
 * @max: input last int in array of (max - min + 1) elements
 *
 * Return: void pointer to allocated memory
 */

int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = min, j = 0; i <= max; i++, j++)
		p[j] = i;
	return (p);
}
