#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees a 2d grid
  * @grid: 2d grid
  * @height: height of grid
  *
  * Return: nothing
  */
void free_grid(int **grid, int height)
{
int p;

for (p = 0; p < height; p++)
{
free(grid[p]);
}

free(grid);
}
