#!/usr/bin/python3
"""Finds the perimeter of an island"""


def island_perimeter(grid):
    """Finds the perimeter of an island except for diagonal cells"""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i]) - 1):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                        perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                            perimeter -= 2
    return perimeter
