#include "search_algos.h"

/**
 * interpolation_search - uses interpolation to find value in sorted int array
 * position = low + ((value - array[low]) / m)
 * m = rise / run = (array[high] - array[low]) / (high - low)
 * @array: the array of integers to search through, sorted in ascending order
 * @size: the size of the array of ints
 * @value: the int value searching for
 *
 * Return: the first index in the array where match to value is or -1 if failed
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = (size - 1), guess = 0;
	double m = 0;
	char *check = "Value checked array";

	if (array == NULL || size < 1)
		return (-1);

	while (low <= high)
	{
		m = ((double)(array[high] - array[low]) / (double)(high - low));
		guess = (low + ((value - array[low]) / m));

		if (guess >= low && guess <= high)
			printf("%s[%lu] = [%d]\n", check, guess, array[guess]);
		else
		{
			printf("%s[%lu] is out of range\n", check, guess);
			return (-1);
		}

		if (array[guess] == value)
			return (guess);

		if (array[guess] < value)
			low = guess + 1;

		else if (array[guess] > value)
			high = guess - 1;
	}
	return (-1);
}
