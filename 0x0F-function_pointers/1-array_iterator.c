#define NULL 0
#include <stdlib.h>

/**
 * array_iterator - executes function as a parameter on each element of array
 * @array: input array of ints to use as function parameters
 * @size: size of int array
 * @action: pointer to function to run with each element of array
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
