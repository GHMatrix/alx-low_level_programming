def island_perimeter(grid):
    """
    Calculate the perimeter of an island represented by a grid.

    The grid represents water by 0 and land by 1. The perimeter of the island
    is the total length of the boundaries
    that separate the land from the water.

    Args:
        grid (list[list[int]]): A 2D grid representing the island.

    Returns:
        int: The perimeter of the island.

    Example:
        Example_grid = [
            [0, 1, 0, 0],
            [1, 1, 1, 0],
            [0, 1, 0, 0],
            [1, 1, 0, 0]
        ]
        island_perimeter(example_grid)  # Output: 16
    """
    def count_neighbors(row, col):
        """
        Count the number of neighboring land cells around a given cell.

        Args:
            row (int): The row index of the cell.
            col (int): The column index of the cell.

        Returns:
            int: The number of neighboring land cells.
        """
        count = 0
        for dr, dc in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nr, nc = row + dr, col + dc
            if 0 <= nr < len(grid) and 0 <= nc < len(grid[0]):
                count += grid[nr][nc]
        return count

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                neighbors = count_neighbors(i, j)
                perimeter += 4 - neighbors

    return perimeter
