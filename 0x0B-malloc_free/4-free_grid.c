#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Program frees a 2 dimensional grid
 * @height: height of grid
 * @grid: dimension grid
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
