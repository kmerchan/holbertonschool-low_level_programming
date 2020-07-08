#!/usr/bin/python3
"""
Defines function to find island perimeter
"""


def island_perimeter(grid):
    """
    Finds the perimeter of an island represented by 1s
    surrounded by 0s in a list of lists of integers
    """
    perimeter = 0
    for rows in range(len(grid)):
        for columns in range(len(grid[rows])):
            if grid[rows][columns] == 1:
                if grid[rows][columns - 1] == 0:
                    perimeter += 1
                if grid[rows][columns + 1] == 0:
                    perimeter += 1
                if grid[rows - 1][columns] == 0:
                    perimeter += 1
                if grid[rows + 1][columns] == 0:
                    perimeter += 1
    return perimeter
