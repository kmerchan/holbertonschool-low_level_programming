#include "search_algos.h"

/**
 * binary_search - uses binary search to find value in array of ints
 * @array: the array of integers to search through, sorted in ascending order
 * @size: the size of the array of ints
 * @value: the int value searching for
 *
 * Return: the index in the array where match to value is or -1 if failed
 */

int binary_search(int *array, size_t size, int value)
{
	int half = ((size - 1) / 2), result = 0;
	size_t i = 0;

	if (array == NULL || size < 1)
		return (-1);

	printf("Searching in array: ");
	for(i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i != (size - 1))
			printf(", ");
		else
			printf("\n");
	}

/*	printf("checking for value: %d compared to: %d\n", value, array[half]);
 */
	if (array[half] == value)
		return (half);
	else if (size <= 1)
		return (-1);

	if (array[half] > value)
	{
/*		printf("value is less than current\n");
 */
		return (binary_search(array, half, value));
	}
	if (array[half] < value)
	{
/*		printf("value is greater than current\n");
 */
		half += 1;
		result = binary_search(&array[half], size - half, value);
		if (result == -1)
			return (-1);
		return (half + result);
	}
	return (-1);
}
