#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
		0, 1, 2, 5, 5, 6, 6, 7, 8, 9
	};
	int arr[] = {
		0, 1, 1, 1, 1, 1, 1, 1, 2, 3, 3, 4, 5, 5, 5, 5, 6, 6, 6, 6, 6, 8, 9, 9
	};
	int a[] = {
		3
	};
	size_t size = sizeof(array) / sizeof(array[0]);
	size_t sz = sizeof(arr) / sizeof(arr[0]);

	printf("Found %d at index: %d\n\n", 6, advanced_binary(NULL, sz, 3));
	printf("Found %d at index: %d\n\n", 3, advanced_binary(a, 1, 3));
	printf("Found %d at index: %d\n\n", 3, advanced_binary(a, 1, -3));

	printf("Found %d at index: %d\n\n", 8, advanced_binary(array, size, 8));
	printf("Found %d at index: %d\n\n", 5, advanced_binary(array, size, 5));
	printf("Found %d at index: %d\n\n", 999, advanced_binary(array, size, 999));

	printf("Found %d at index: %d\n\n", 6, advanced_binary(arr, sz, 6));
	printf("Found %d at index: %d\n\n", 7, advanced_binary(arr, sz, 7));
	printf("Found %d at index: %d\n\n", 1, advanced_binary(arr, sz, 1));
	printf("Found %d at index: %d\n\n", -3, advanced_binary(arr, sz, -3));
	return (EXIT_SUCCESS);
}
