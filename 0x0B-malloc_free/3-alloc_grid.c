#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2-dimensional grid of integers
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to the 2-dimensional grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
int **mee;
int x, y;

/* if width or height are less than or equal to 0, return NULL */
if (width <= 0 || height <= 0)
return (NULL);

/* allocate memory for the rows of the grid */
mee = malloc(sizeof(int *) * height);

if (mee == NULL)
return (NULL);

/* allocate memory for the columns of the grid */
for (x = 0; x < height; x++)
{
mee[x] = malloc(sizeof(int) * width);

if (mee[x] == NULL)
		{
for (; x >= 0; x--)
free(mee[x]);

free(mee);
return (NULL);
}
}

/* initialize all elements of the grid to 0 */
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
mee[x][y] = 0;
}

return (mee);
}
