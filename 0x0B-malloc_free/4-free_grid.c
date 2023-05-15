#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2-dimensional grid of integers
 * @grid: pointer to the 2-dimensional grid to free
 * @height: height of the grid
 *
 * Description: frees the memory of a
 * 2-dimensional grid previously created by alloc_grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int i;

/* free each row of the grid */
for (i = 0; i < height; i++)
{
free(grid[i]);
}

free(grid);
}
