#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory of specified size
 * @b: input unsigned int of desired memory size
 *
 * Return: void pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
