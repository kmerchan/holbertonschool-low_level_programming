#!/usr/bin/python3
"""
Finds the perimeter of an island represented by 1s
surrounded by 0s in a list of lists of integers
"""


def island_perimeter(grid):
    perimeter = 0
    for rows in range(len(grid)):
        if rows == 0 or rows == ((len(grid)) - 1):
            continue
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
