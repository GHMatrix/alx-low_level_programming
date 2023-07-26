#!/usr/bin/python3
"""
Calculate the perimeter of an island represented by a grid.

The grid represents water by 0 and land by 1. The perimeter of the island
is the total length of the boundaries that separate the land from the water.

    Args:
        grid (list[list[int]]): A 2D grid representing the island.

    Returns:
        int: The perimeter of the island.
"""


def island_perimeter(grid):
    """Return the perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    max_width = len(grid[0])
    max_height = len(grid)
    edges = 0
    size = 0

    for i in range(max_height):
        for j in range(max_width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
