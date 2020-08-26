#include "search_algos.h"

void print_array(int *array, int size);

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
	int low = 0, high = (size - 1), mid = ((high - low) / 2);

	if (array == NULL || size < 1)
		return (-1);

	while (low <= high)
	{
		print_array(&array[low], (high - low + 1));

/*
 * printf("low: %d, high: %d, mid: %d\n", low, high, mid);
 * printf("array[mid] = %d, value = %d\n", array[mid], value);
 */

		if (array[mid + low] == value)
			return (mid + low);

		if (array[mid + low] > value)
			high = (mid + low - 1);

		else if (array[mid + low] < value)
			low = (mid + low + 1);

		mid = ((high - low) / 2);
	}
	return (-1);
}

/**
 * print_array - prints the array searching through
 * @array: int array to print
 * @size: size of int array
 *
 */

void print_array(int *array, int size)
{
	int i = 0;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i != (size - 1))
			printf(", ");
		else
			printf("\n");
	}
}
