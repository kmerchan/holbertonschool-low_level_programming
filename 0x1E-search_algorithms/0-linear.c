#include "search_algos.h"

/**
 * linear_search - uses linear search to find value in array of ints
 * @array: the array of integers to search through
 * @size: the size of the array of ints
 * @value: the int value searching for
 *
 * Return: the first index in the array where match to value is or -1 if failed
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
