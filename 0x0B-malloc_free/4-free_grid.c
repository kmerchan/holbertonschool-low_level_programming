#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function to free memory allocated to 2-D int array by malloc
 * @grid: input double pointer to 2-D int array
 *
 * @height: input number of rows in 2-D array
 *
 */

void free_grid(int **grid, int height)
{
	int rows;

	for (rows = 0; rows < height; rows++)
	{
		free(grid[rows]);
	}
	free(grid);
}
