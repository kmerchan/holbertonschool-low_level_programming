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
	int arr2[] = {
		0, 1, 2, 4, 5, 6, 6, 7, 8, 9
	};
	int arr[] = {
		0, 1, 1, 1, 1, 1, 1, 1, 2, 3, 3, 4, 5, 5, 5, 5, 6, 6, 6, 6, 6, 8, 9, 9
	};
	int a[] = {
		3
	};
	size_t size = sizeof(array) / sizeof(array[0]);
	size_t sz = sizeof(arr) / sizeof(arr[0]);

	/* test if NULL array passed to function */
	printf("Found %d at index: %d\n\n", 6, advanced_binary(NULL, size, 3));
	/* test if size of array is 0 */
	printf("Found %d at index: %d\n\n", 6, advanced_binary(array, 0, 3));
	/* test is array is only 1 element long, and matches */
	printf("Found %d at index: %d\n\n", 3, advanced_binary(a, 1, 3));
	/* test is array is only 1 element long, and isn't a match */
	printf("Found %d at index: %d\n\n", -3, advanced_binary(a, 1, -3));
	/* first test given on project page, finds non-repeat match */
	printf("Found %d at index: %d\n\n", 8, advanced_binary(array, size, 8));
	/* second test given on project page, finds first repeated match */
	printf("Found %d at index: %d\n\n", 5, advanced_binary(array, size, 5));
	/* third test given on project page, shows no match found, non-match beyond array max */
	printf("Found %d at index: %d\n\n", 999, advanced_binary(array, size, 999));

	/* tests if match is found, but not at index 0 so there could be a previous match */
	printf("Found %d at index: %d\n\n", 5, advanced_binary(arr2, size, 5));

	/* tests multiple repeats in upper half of array */
	printf("Found %d at index: %d\n\n", 6, advanced_binary(arr, sz, 6));
	/* tests for non-match in middle of array */
	printf("Found %d at index: %d\n\n", 7, advanced_binary(arr, sz, 7));
	/* tests multiple repeats in lower half of array */
	printf("Found %d at index: %d\n\n", 1, advanced_binary(arr, sz, 1));
	/* tests for non-match beyond array min */
	printf("Found %d at index: %d\n\n", -3, advanced_binary(arr, sz, -3));
	/* tests match at beginning of array */
	printf("Found %d at index: %d\n\n", 0, advanced_binary(arr, sz, 0));
	return (EXIT_SUCCESS);
}
