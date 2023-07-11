#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function is for 2d array that will be freed
 *
 * @grid: the 2d grid
 *
 * @height: the height dimension of the grid
 *
 * Return: program returns void(nothing)
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
