#include "search_algos.h"
#include <math.h>

/**
 * jump_search - uses jump search to find value in sorted array of ints
 * jump size is sqrt of size of array
 * @array: the array of integers to search through, sorted in ascending order
 * @size: the size of the array of ints
 * @value: the int value searching for
 *
 * Return: the first index in the array where match to value is or -1 if failed
 */

int jump_search(int *array, size_t size, int value)
{
	int i = 0, jump = sqrt(size), j = 0;
	char *check = "Value checked array";
	char *found = "Value found between indexes ";

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i += jump)
	{
		if (array[i] < value)
		{
			printf("%s[%d] = [%d]\n", check, i, array[i]);
			continue;
		}
		else
		{
			printf("%s[%d] and [%d]\n", found, i - jump, i);
			for (j = (i - jump); j <= i; j++)
			{
				printf("%s[%d] = [%d]\n", check, j, array[j]);
				if (array[j] == value)
					return (j);
				if (array[j] > value)
					return (-1);
			}
		}
	}
	printf("%s[%d] and [%d]\n", found, i - jump, i);
	for (j = (i - jump); j < (int)size; j++)
	{
		printf("%s[%d] = [%d]\n", check, j, array[j]);
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			return (-1);
	}
	return (-1);
}
